/*
問題文の引用元：https://atcoder.jp/contests/arc011/tasks/arc011_2
B - ルイス・キャロルの記憶術Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 古今東西、数字の記憶には様々な方法が取り入れられてきた。例えば日本では
e の値を「鮒一鉢二鉢一鉢二鉢至極惜しい」などとして記憶するし、欧米では π の値を
Yes, I know a number!
として記憶する。「不思議の国のアリス」の著者として知られるルイス・キャロル
(本名:チャールズ・ラトウィッジ・ドジソン)
は、子音のみを用いた独自の記憶術を作り、様々な年号を記憶していたらしい。これによれば、次のように、文字に数字を割り当てていたという。図：文字から数字への割り当てこの表に従い、覚えたい数字を子音に変換し、これを用いた単語をひとつ作って文にすることで、キャロルは年号などを覚えていたという。なお、子音以外の文字
(a,e,i,o,u,y や、コンマ、ピリオド等)
はすべて無視され、大文字も小文字も同じように変換される。例えば、モーツァルトの正没年はMozart
plays magic.とし、plays を 756 に変換し、 magic を 791 に変換して、 1756 年 ～
1791
年と覚えることができるわけである。この方式での記憶文が与えられるとき、それを前から順に変換し、変換した数字を出力するプログラムを作成せよ。入力入力は以下の形式で標準入力から与えられる。Nw_{0}
w_{1} ... w_{N-1}1 行目は単語の数を表す整数 N(1≦N≦1,000) が与えられる。2
行目は単語が半角スペース区切りで与えられる。単語とは半角英字 ピリオド
コンマから構成される。各単語は 1 文字以上 30
文字以内である。出力与えられた単語から変換された数字を 1
行で出力せよ。ただし、変換された数字と数字の間には半角スペースを 1
つ入れること。整数の頭に 0 がつく場合もあるが、その場合は 0
も出力すること。また、出力の最後には改行をいれること。
// ソースコードの引用元 :
https://atcoder.jp/contests/arc011/submissions/11343481
// 提出ID : 11343481
// 問題ID : arc011_2
// コンテストID : arc011
// ユーザID : xryuseix
// コード長 : 2874
// 実行時間 : 3



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

map<char, int> m;

string calc(string s) {
  string res = "";
  rep(i, s.size()) {
    if (s[i] >= 'A' && s[i] <= 'Z') {
      s[i] += ('a' - 'A');
    }
    if (m.count(s[i]) == 0)
      continue;
    res += '0' + m[s[i]];
  }
  return res;
}

int main() {

  m['b'] = 1;
  m['c'] = 1;
  m['t'] = 3;
  m['j'] = 3;
  m['l'] = 5;
  m['v'] = 5;
  m['p'] = 7;
  m['m'] = 7;
  m['n'] = 9;
  m['g'] = 9;
  m['d'] = 2;
  m['w'] = 2;
  m['f'] = 4;
  m['q'] = 4;
  m['s'] = 6;
  m['x'] = 6;
  m['h'] = 8;
  m['k'] = 8;
  m['z'] = 0;
  m['r'] = 0;

  int n;
  cin >> n;
  vs ans;
  rep(i, n) {
    string s;
    cin >> s;
    s = calc(s);
    if (s.size() > 0)
      ans.pb(s);
  }
  rep(i, ans.size()) { cout << ((!i) ? "" : " ") << ans[i]; }
  cout << endl;
}
