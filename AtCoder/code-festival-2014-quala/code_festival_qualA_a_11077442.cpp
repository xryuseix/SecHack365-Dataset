/*
問題文の引用元：https://atcoder.jp/contests/code-festival-2014-quala/tasks/code_festival_qualA_a
A - CODE FESTIVAL 2014Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : このコンテスト名は、CODE FESTIVAL
2014です。しかし、物覚えが悪い高橋君は、いつも、2014を付け忘れてしまいます。そこで、高橋君は、文字列に自動的に2014を付け加えるソフトを作ろうと思いました。文字列
S が与えられます。文字列 S
に、2014を付け加えた文字列を出力してください。なお、半角スペースなどを付ける必要はありません。入力入力は以下の形式で標準入力から与えられる。S1
行目には、1 つの文字列 S (1 ≦ |S| ≦ 20) が与えられる。S
に含まれる文字は、全て大文字アルファベットであることが保障されている。出力文字列
S に、2014を付け加えた文字列を出力を 1
行で出力せよ。出力の末尾には改行をいれること。
// ソースコードの引用元 :
https://atcoder.jp/contests/code-festival-2014-quala/submissions/11077442
// 提出ID : 11077442
// 問題ID : code_festival_qualA_a
// コンテストID : code-festival-2014-quala
// ユーザID : xryuseix
// コード長 : 2136
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

  string s;
  cin >> s;
  cout << s + "2014" << endl;
}
