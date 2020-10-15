/*
問題文の引用元：https://atcoder.jp/contests/abc162/tasks/abc162_f
F - Select HalfEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 600 点
問題文 : 長さ N の整数列 A_1,...,A_N が与えられます。この中からちょうど
\left\lfloor \frac{N}{2} \right\rfloor 個の整数を、どの 2
箇所も連続しないように選びます。選んだ要素の和としてありえる最大値を求めてください。ここで、\lfloor
x \rfloor は、x を超えない最大の整数を表します。
制約2 \leq N \leq 2\times 10^5|A_i|\leq
10^9入力は全て整数入力入力は以下の形式で標準入力から与えられる。NA_1 ...
A_N出力選ばれた要素の和としてありえる最大値を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc162/submissions/11865970
// 提出ID : 11865970
// 問題ID : abc162_f
// コンテストID : abc162
// ユーザID : xryuseix
// コード長 : 3544
// 実行時間 : 84



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
#include <random>
#include <iomanip>
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
typedef map<int, int> mii;
typedef set<int> si;
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
#define itn int
// #define endl '\n';
#define fi first
#define se second
#define NONVOID [[nodiscard]]
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
template <class T> inline void dump(T &v) {
  irep(i, v) { cout << *i << ((i == --v.end()) ? '\n' : ' '); }
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

  ll n;
  cin >> n;
  vll v(n), maxNum(n);
  ll num = 1, maxK = 3;

  rep(i, n) { scanf("%lld", &v[i]); }
  rep(i, n) {
    if (i == maxK) {
      num++;
      maxK += 2;
    }
    maxNum[i] = num;
  }

  vector<map<ll, ll>> dp(n, map<ll, ll>());
  for (int i = 0; i < n; i++) {
    dp[i][1] = v[i];
    for (int k = 2; k <= 4; k++) { //-4,-3,-2
      if (i - k < 0)
        continue;
      for (auto l = dp[i - k].begin(); l != dp[i - k].end();
           l++) { // kの場所のたて
        ll Val = l->second + v[i];
        ll kosu = l->first + 1;
        if (kosu < maxNum[i]) {
          continue;
        } else {
          if (dp[i].count(kosu) == 1)
            chmax(dp[i][kosu], Val);
          else
            dp[i][kosu] = Val;
        }
      }
    }
  }
  ll ans = -LLINF;
  for (int i = 0; i < n; i++) {
    irep(j, dp[i]) {
      if (j->first == n / 2) {
        chmax(ans, j->second);
      }
    }
  }
  fin(ans);
  // rep (i,n)cout<<i<<" "<<dp[i].size()<<endl;
  // irep(i,dp[2])cout<<i->fi<<" "<<i->se<<endl;
  // dump(maxNum);
}

/*
7
-1 -2 -3 -4 -5 -6 -7
0
1 -3
2 0
*/
