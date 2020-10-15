/*
問題文の引用元：https://atcoder.jp/contests/past201912-open/tasks/past201912_i
I - ProcurementEditorial
Time Limit : 2 sec / Memory Limit : 1024
MB注意この問題に対する言及は、2019年12月29日 05:00 JST
まで禁止されています。言及がなされた場合、賠償が請求される可能性があります。試験後に総合得点や認定級を公表するのは構いませんが、どの問題が解けたかなどの情報は発信しないようにお願いします。
問題文 : あなたは、あるものを作るために N 種類の部品、部品 1, \ldots, N
を購入しようとしている。ネット通販サイトを探すと、部品のセット販売が M
件見つかった。i 件目のセット販売 (1 \leqq i \leqq M) の情報は、長さ N の文字列
S_i と整数 C_i の組として与えられる。S_i の j 文字目 (1 \leqq j \leqq N)
は、このセットが部品 j を含むとき Y、含まないとき N である。また、このセットは
C_i 円で販売されている。これらのセットのうち何個かを購入し、N 種類の部品をすべて
1 個以上手に入れるのに必要な金額を求める
(または、それが不可能であることを報告する) プログラムを作成せよ。
制約1 \leqq N \leqq 101 \leqq M \leqq 1,000S_i は長さ N の文字列である。S_i
の各文字は Y または N である。1 \leqq C_i \leqq 1,000,000,000C_i
は整数である。入力入力は以下の形式で標準入力から与えられる。N MS_1 C_1S_2
C_2:S_M C_M出力すべての部品を 1
個以上手に入れることが可能であれば、それに必要な最小金額を表す整数を出力せよ。そうでなければ、-1
と出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/past201912-open/submissions/11741663
// 提出ID : 11741663
// 問題ID : past201912_i
// コンテストID : past201912-open
// ユーザID : xryuseix
// コード長 : 2785
// 実行時間 : 6



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
#define endl '\n';
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

  int n, m;
  cin >> n >> m;
  int b[m];
  vll dp((1 << n) + 10, LLINF);
  int cost[m];
  rep(i, m) {
    string s;
    cin >> s;
    int num = 0;
    rep(j, n) {
      if (s[j] == 'Y') {
        num += pow(2, j);
      }
    }
    b[i] = num;
    cin >> cost[i];
  }
  dp[0] = 0;
  rep(i, 1 << n) {
    if (dp[i] == LLINF)
      continue;
    for (int j = 0; j < m; j++) {
      chmin(dp[i | b[j]], dp[i] + cost[j]);
    }
  }
  if (dp[(1 << n) - 1] == LLINF)
    fin(-1);
  else
    fin(dp[(1 << n) - 1]);
}