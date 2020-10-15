/*
問題文の引用元：https://atcoder.jp/contests/abc063/tasks/arc075_a
C - BuggedEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 300 点
問題文 : あなたはコンピュータで試験を受けています。試験は N 問の問題からなり、i
問目の問題の
配点は s_i
です。それぞれの問題に対するあなたの解答は「正解」または「不正解」のいずれかとして判定され、正解した問題の
配点の合計があなたの成績となります。あなたが解答を終えると、解答がその場で採点されて成績が表示される…はずでした。ところが、試験システムに欠陥があり、成績が
10 の倍数の場合は、画面上で成績が 0
と表示されてしまいます。それ以外の場合は、画面に正しい成績が表示されます。この状況で、成績として画面に表示されうる最大の値はいくつでしょうか？
制約入力値はすべて整数である。1 ≤ N ≤ 1001 ≤ s_i ≤
100入力入力は以下の形式で標準入力から与えられる。Ns_1s_2:s_N出力成績として画面に表示されうる最大の値を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc063/submissions/13360496
// 提出ID : 13360496
// 問題ID : arc075_a
// コンテストID : abc063
// ユーザID : xryuseix
// コード長 : 2656
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
  int mi = INF;
  int sum = 0;
  rep(i, n) {
    int a;
    cin >> a;
    if (a % 10 != 0 && mi > a) {
      mi = a;
    }
    sum += a;
  }
  if (sum % 10 != 0) {
    fin(sum);
  } else {
    if (mi == INF)
      fin(0);
    else {
      fin(sum - mi);
    }
  }
}
