/*
問題文の引用元：https://atcoder.jp/contests/code-festival-2014-quala/tasks/code_festival_qualA_c
C - 2月29日Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 高橋君は、西暦 A 年の元旦に地球で生まれ、 西暦 B
年の大晦日に地球を去る予定です。高橋君は、 地球で何回 2 月 29
日を過ごせるかを調べようと思いました。2 月 29
日があるのはうるう年だけであり、うるう年であるかどうかは、以下のルールで決定されます。西暦年が
4 で割り切れる年はうるう年である。ただし、西暦年が 100
で割り切れる年はうるう年ではない。ただし、西暦年が 400
で割り切れる年はうるう年である。高橋君が、 2 月 29
日を過ごせる回数を出力してください。なお、高橋君は非常に長生きであることがあることに注意してください。入力入力は以下の形式で標準入力から与えられる。A
B1 行目には、高橋君が生まれた年、及び地球を去る年を表す整数 A, B (1 ≦ A ≦ B ≦
2,000,000,000) が与えられる。部分点1 ≦ A ≦ B ≦ 3,000
の全てのケースに正解すると、 25
点が与えられる。残りの全てのケースに正解すると、さらに 75
点が与えられる。入力は以下の形式で標準入力から与えられる。出力高橋君が、 2 月 29
日を過ごせる回数を 1 行で出力せよ。出力の末尾には改行をいれること。
// ソースコードの引用元 :
https://atcoder.jp/contests/code-festival-2014-quala/submissions/11077424
// 提出ID : 11077424
// 問題ID : code_festival_qualA_c
// コンテストID : code-festival-2014-quala
// ユーザID : xryuseix
// コード長 : 2202
// 実行時間 : 1



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

  ll a, b;
  cin >> a >> b;
  a--;
  ll ans = b / 4 - a / 4;
  ans -= b / 100 - a / 100;
  ans += b / 400 - a / 400;
  fin(ans);
}
