/*
問題文の引用元：https://atcoder.jp/contests/abc004/tasks/abc004_3
C - 入れ替えEditorial
Time Limit : 2 sec / Memory Limit : 64 MB
問題文 :             ここにカードが 6 枚あり、それぞれ 1 から 6
までの整数が書かれています。        最初、左から右へ 1 のカードから 6
のカードまでがソートされた状態で並んでいます。
高橋君には整数 N が与えられます。高橋君は以下の操作を i = 0,1,2, ... ,N-1
に対して i = 0 から 順番に行います。                    左から (i mod 5)+1
番目にあるカードと、左から (i mod 5)+2 番目にあるカードの位置を入れ替える。
mod とは、「剰余」を意味し、例えば 8 mod 5 は 3 であり、15 mod 5 は 0
になります。        ここで実際に N = 5 のときに行われる操作を例示します。
i = 0 のとき：            (0 mod 5)+1 = 1、(0 mod 5)+2 = 2
より、左から 1 番目のカード」と、「左から 2 番目のカード」を入れ替えます。
i = 1 のとき：                                                    i = 2 のとき：
i = 3 のとき：                                                    i = 4 のとき：
よって、N=5 のとき、カードの並びは左から234561の順に並びます。
あなたは高橋君の代わりに、上記の操作が全て終わった後のカードの並びを答えてください。
入力            入力は以下の形式で標準入力から与えられる。N        1
行目には、高橋君に与えられた整数 N(1≦N≦10^9) を与える。
この問題には部分点が設定されている。後述する部分点の項も参照すること。
出力            操作が終わった後のカードの並びを左から順に 1
行で出力してください。また、出力の末尾には改行を入れること。        部分点
1≦N≦50 を満たすテストケース全てに正解すると、100 点満点のうち 30
点が与えられる。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc004/submissions/13360570
// 提出ID : 13360570
// 問題ID : abc004_3
// コンテストID : abc004
// ユーザID : xryuseix
// コード長 : 2467
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
#include <random>
#include <iomanip>
#include <unordered_set>
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
#define fi first
#define se second
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
  int n;
  cin >> n;
  string s = "123456";
  n %= 30;
  for (int i = 0; i < n; i++) {
    swap(s[i % 5], s[i % 5 + 1]);
  }
  fin(s);
}
