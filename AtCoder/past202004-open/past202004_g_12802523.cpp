/*
問題文の引用元：https://atcoder.jp/contests/past202004-open/tasks/past202004_g
G - String QueryEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 6 点注意この問題に対する言及は、2020年5月2日 18:00 JST
まで禁止されています。言及がなされた場合、賠償が請求される可能性があります。試験後に総合得点や認定級を公表するのは構いませんが、どの問題が解けたかなどの情報は発信しないようにお願いします。
問題文 : 文字列 S に対して Q 回の操作を行います。初め文字列 S は空文字列です。i
回目の操作の種類は整数 T_i (1 \leq i \leq Q)
で表され、その内容は以下の通りです。T_i = 1 のとき英小文字 C_i と整数 X_i
が与えられる。S の末尾に C_i を X_i 文字追加する。T_i = 2 のとき整数 D_i
が与えられる。S の先頭から D_i 文字を削除する。S の長さが D_i
文字以下である場合は、S は空文字列となる。そして、この操作でa, b, c, \cdots z
の各文字が何文字削除されたかを求める。それぞれ del_a, del_b, \cdots, del_z
文字削除された場合、{del_a}^2 + {del_b}^2 + \cdots + {del_z}^2 を出力する。
制約1 \leq Q \leq 10^5T_i = 1 または 2C_i は英小文字1 \leq X_i \leq 10^51 \leq
D_i \leq 10^5Q, T_i, X_i, D_i は整数T_i = 2 の操作が 1
つ以上存在する入力入力は以下の形式で標準入力から与えられる。QQuery_1:Query_Q2
行目から Q+1 行目の Query_i は以下の 2 つのいずれかである。1 C_i X_iT_i = 1
として操作を行うことを表す。2 D_iT_i = 2 として操作を行うことを表す。出力T_i = 2
である操作それぞれに対して順番に、各文字種の削除された文字数の 2
乗の和を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/past202004-open/submissions/12802523
// 提出ID : 12802523
// 問題ID : past202004_g
// コンテストID : past202004-open
// ユーザID : xryuseix
// コード長 : 3294
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
typedef vector<pair<ll, ll>> vpll;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef vector<vector<string>> vvs;
typedef vector<vector<ll>> vvll;
typedef map<int, int> mii;
typedef set<int> si;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
#define arep(i, v) for (auto i : v)
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
constexpr int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
constexpr int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
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
constexpr ll LLINF = 1LL << 60;
constexpr ll MOD = 1000000007;
constexpr double EPS = 1e-9;

int main() {

  map<char, ll> m;
  vpii v;
  int pos = 0;

  int n;
  cin >> n;
  rep(_, n) {
    int Q;
    cin >> Q;
    if (Q == 1) {
      char c;
      int d;
      cin >> c >> d;
      v.pb(mp(c, d));
    } else {
      int d;
      cin >> d;
      m.clear();
      for (int i = pos; i < v.size(); i++) {
        if (d < v[i].se) {
          v[i].se -= d;
          m[v[i].fi] += d;
          d = 0;
        } else {
          m[v[i].fi] += v[i].se;
          d -= v[i].se;
          v[i].se = 0;
        }
        if (v[i].se == 0)
          pos++;
        if (d == 0)
          break;
      }
      ll ans = 0;
      irep(i, m) { ans += pow(i->second, 2); }
      fin(ans);
    }
  }
}
