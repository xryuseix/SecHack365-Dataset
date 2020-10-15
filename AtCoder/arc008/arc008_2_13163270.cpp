/*
問題文の引用元：https://atcoder.jp/contests/arc008/tasks/arc008_2
B - 謎のたこ焼きおじさんEditorial
Time Limit : 2 sec / Memory Limit : 64 MB
問題文 :
あなたはたこ焼きを買いに来たところ、伝説のたこ焼きマスター高橋社長に認められ、新しく作るたこ焼き屋さんの店長を任されました。店長に任命されたあなたに与えられた最初の仕事は、お店の看板を作成することでした。ところが高橋社長は使えない時間がないので、たこ焼き屋さんの名前は決めましたが、看板を作るのはあなたに任せて去って行きました。その際に看板を作るための英字ブロックが入ったいくつかのキットを渡されました。英字キットとは、ランダムな英字ブロックが含まれている袋のことです。例えば英字キットを表す文字列が
ABCC
であるような英字キットの場合、英字ブロックAが1つ含まれている。英字ブロックBが1つ含まれている。英字ブロックCが2つ含まれている。とみなすことができます。つまり、英字キット
ABCC 1
袋につき、英字ブロックAと英字ブロックBを1つずつ、英字ブロックCを2つを看板に用いることができます。高橋社長から渡された英字キットは全て同じ英字キットだったので、どのキットを開けても中身は全く同じです。あなたは看板にお金をかけるわけにもいかないので、開封する英字キットを最小にして残りは返品したいです。どれだけの英字キットを使うことで、お店の看板を作ることができるでしょうか。入力入力は以下の形式で標準入力から与えられる。N
Mnamekit入力は 3 行ある。 1 行目にお店の名前の文字数 N\ (1≦N≦50) と、英字キット
1 袋に入ってる英字ブロックの数 M\ (1≦M≦50) が空白区切りで与えられる。 2
行目にはお店の名前を表す文字列 name が N 文字で与えられる。文字列 name
に含まれる文字は A-Z のみである。3
行目には英字キットに含まれている英字ブロックを表す文字列 kit が M
文字で与えられる。文字列 kit に含まれる文字は A-Z
のみである。出力看板をつくるために必要な英字キットの最小数を標準出力に 1
行で出力すること。与えられた英字キットで看板を作成することができない場合は、-1を出力すること。また、出力の最後には改行をいれること。
// ソースコードの引用元 :
https://atcoder.jp/contests/arc008/submissions/13163270
// 提出ID : 13163270
// 問題ID : arc008_2
// コンテストID : arc008
// ユーザID : xryuseix
// コード長 : 2845
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

  int n, m;
  cin >> n >> m;
  int ans = 1;
  vi ue(26, 0);
  vi si(26, 0);
  string s, t;
  cin >> s >> t;
  rep(i, n) { ue[s[i] - 'A']++; }
  rep(i, m) { si[t[i] - 'A']++; }
  rep(i, 26) {
    if (ue[i] > 0 && si[i] == 0) {
      fin(-1);
      return 0;
    }
    if (ue[i] > si[i]) {
      chmax(ans, (int)ceil((double)ue[i] / si[i]));
    }
  }
  fin(ans);
}
