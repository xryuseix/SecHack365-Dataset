/*
問題文の引用元：https://atcoder.jp/contests/dwango2015-prelims/tasks/dwango2015_prelims_2
B - ニコニコ文字列Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 0 から 9 の数字から成る文字列 S が与えられます。ある文字列 X
について、X="25" または X="2525" または X="252525" …… というふうに "25"
を何回か繰り返した文字列になっているとき、X
はニコニコ文字列であるといいます。たとえば "25" や "25252525"
はニコニコ文字列ですが、"123" や "225"
はニコニコ文字列ではありません。あなたの仕事は、文字列 S
について、ニコニコ文字列となるような連続した部分文字列の取り出し方が何通りあるかを答えることです。文字列として同じであっても、取り出し位置が異なっていれば別々に数えます。入力入力は以下の形式で標準入力から与えられる。S1
行目には、文字列 S が与えられる。Sの長さは 1 以上 100,000 以下である。また、S
の各文字は 0 から 9
の数字のみから成る。部分点この問題には部分点が設定されています。N≦2000
を満たすデータセット 1 にすべて正解すると、30 点が得られます。追加
制約のないデータセット 2 にすべて正解すると、上記のデータセットに加えてさらに 70
点が得られ、全体で 100 点が得られます。出力1 行目には、文字列 S
からニコニコ文字列となるような連続した部分文字列を取り出す方法が何通りあるかを出力せよ。行末の改行を忘れると不正解と判定されるので注意すること。
// ソースコードの引用元 :
https://atcoder.jp/contests/dwango2015-prelims/submissions/12470142
// 提出ID : 12470142
// 問題ID : dwango2015_prelims_2
// コンテストID : dwango2015-prelims
// ユーザID : xryuseix
// コード長 : 2730
// 実行時間 : 5



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

  string s;
  cin >> s;
  vll v;
  rep(i, s.size()) {
    int j = i;
    while (j + 1 < s.size() && s[j] == '2' && s[j + 1] == '5') {
      j += 2;
    }
    if (j - i > 0)
      v.push_back(j - i);
    i = max(i, j - 1);
  }
  ll ans = 0;
  arep(i, v) { ans += i / 2 + ((i > 3) ? (i / 2) * (i / 2 - 1) / 2 : 0); }
  fin(ans);
}
