/*
問題文の引用元：https://atcoder.jp/contests/code-festival-2014-quala/tasks/code_festival_qualA_b
B - とても長い文字列Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 文字列 S は、文字列 A を、10^{100} 個連結させた文字列です。文字列 S の
B
文字目の文字は何かを出力しなさい。入力入力は以下の形式で標準入力から与えられる。AB1
行目には、文字列 A (1 ≦ |A| ≦ 50) が与えられる。文字列 A
は、小文字アルファベットのみで構成されていることが保障されている。2
行目には、整数 B (1 ≦ B ≦ 1,000,000,000) が与えられる。部分点1 ≦ B ≦ 100,000
の全てのテストケースに正解すると、 20
点が与えられる。残りの全てのテストケースに正解すると、さらに 80
点が与えられる。出力文字列 S の B 文字目の文字を 1
行で出力せよ。出力の末尾には改行をいれること。
// ソースコードの引用元 :
https://atcoder.jp/contests/code-festival-2014-quala/submissions/10981749
// 提出ID : 10981749
// 問題ID : code_festival_qualA_b
// コンテストID : code-festival-2014-quala
// ユーザID : xryuseix
// コード長 : 1974
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
int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
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
  int a;
  cin >> a;
  if (!(a % s.size()))
    fin(s[s.size() - 1]);
  else
    cout << s[a % s.size() - 1] << endl;
}
