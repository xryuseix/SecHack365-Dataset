/*
問題文の引用元：https://atcoder.jp/contests/abc159/tasks/abc159_e
E - Dividing ChocolateEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 500 点
問題文 : 縦 H マス、横 W
マスのグリッドに区切られたチョコレートがあります。上から i 行目、左から j
列目にあるマス (i,j) のチョコレートは、S_{i,j} が 0
のとき普通のチョコレートであり、1
のときホワイトチョコレートです。このチョコレートに対して、マスの境界に沿った直線によってグリッド全体の端から端まで割る操作を何度か行い、いくつかのブロックに分割します。分割後のどのブロックにもホワイトチョコレートのマスが
K
マス以下しか含まれないようにするためには、最小で操作を何回行う必要があるか求めてください。
制約1 \leq H \leq 101 \leq W \leq 10001 \leq K \leq H \times WS_{i,j} は 0 か
1入力入力は以下の形式で標準入力から与えられる。H W
KS_{1,1}S_{1,2}...S_{1,W}:S_{H,1}S_{H,2}...S_{H,W}出力分割後のどのブロックにもホワイトチョコレートのマスが
K マス以下しか含まれないようにするため必要な操作回数の最小値を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc159/submissions/11130319
// 提出ID : 11130319
// 問題ID : abc159_e
// コンテストID : abc159
// ユーザID : xryuseix
// コード長 : 3249
// 実行時間 : 82



*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cctype>
#include <cassert>
#include <climits>
#include <string>
#include <bitset>
#include <cfloat>
#include <unordered_set>
#pragma GCC optimize("Ofast")
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef vector<double> vd;
typedef vector<string> vs;
typedef vector<ll> vll;
typedef vector<pair<int, int>> vpii;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef vector<vector<string>> vvs;
typedef vector<vector<ll>> vvll;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
#define irep(it, stl) for (auto it = stl.begin(); it != stl.end(); it++)
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define fin(ans) cout << (ans) << '\n'
#define STLL(s) strtoll(s.c_str(), NULL, 10)
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
#define MATHPI acos(-1)
#define itn int;
#define endl '\n';
const int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
const int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
template <class T> inline bool chmax(T &a, T b) {
  if (a < b) {
    a = b;
    return 1;
  }
  return 0;
}
template <class T> inline bool chmin(T &a, T b) {
  if (a > b) {
    a = b;
    return 1;
  }
  return 0;
}
inline string getline() {
  string s;
  getline(cin, s);
  return s;
}
inline void yn(const bool b) { b ? fin("yes") : fin("no"); }
inline void Yn(const bool b) { b ? fin("Yes") : fin("No"); }
inline void YN(const bool b) { b ? fin("YES") : fin("NO"); }
struct io {
  io() {
    ios::sync_with_stdio(false);
    cin.tie(0);
  }
};
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;
const ll MOD = 1000000007;
const double EPS = 1e-9;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int h, w, K;
  cin >> h >> w >> K;
  vs v(h);
  rep(i, h) cin >> v[i];
  int ans = INF;

  for (int i = 0; i < (1 << (h - 1)); ++i) {
    vi seq(1, -1);
    rep(j, (h - 1)) if ((1 << j) & i) seq.pb(j);
    seq.pb(h - 1);

    vi sum(seq.size() - 1, 0);
    int res = 0;
    bool dame = false;
    rep(j, w) {
      vi tmpS(sum.size());
      int pos = 0;
      for (int k = 0; k < seq.size() - 1; ++k) {
        int l = seq[k];
        int r = seq[k + 1];
        int lrSum = 0;
        for (int m = l + 1; m <= r; m++) {
          lrSum += v[m][j] - '0';
        }
        if (lrSum > K) {
          dame = true;
          break;
        }
        tmpS[pos] = lrSum;
        pos++;
      }

      if (dame) {
        break;
      }

      bool ch = 1;
      rep(k, sum.size()) {
        sum[k] += tmpS[k];
        if (sum[k] > K)
          ch = 0;
      }
      if (!ch) {
        sum = tmpS;
        res++;
      }
    }
    if (!dame)
      chmin(ans, res + (int)seq.size() - 2);
  }
  fin(ans);
}
