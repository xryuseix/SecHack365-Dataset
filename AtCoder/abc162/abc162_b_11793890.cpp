/*
問題文の引用元：https://atcoder.jp/contests/abc162/tasks/abc162_b
B - FizzBuzz SumEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 :  FizzBuzz列  a_1,a_2,... を次のように定めます。i が 3 でも 5
でも割り切れるなら、a_i=\mbox{FizzBuzz}そうではなく i が 3
で割り切れるなら、a_i=\mbox{Fizz}そうではなく i が 5
で割り切れるなら、a_i=\mbox{Buzz}そうではないなら、a_i=iFizzBuzz列の N
項目までに含まれる数の和を求めてください。
制約1 \leq N \leq
10^6入力入力は以下の形式で標準入力から与えられる。N出力FizzBuzz列の N
項目までに含まれる数の和を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc162/submissions/11793890
// 提出ID : 11793890
// 問題ID : abc162_b
// コンテストID : abc162
// ユーザID : xryuseix
// コード長 : 2483
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

  int n;
  cin >> n;
  ll ans = 0;
  for (int i = 1; i <= n; i++) {
    if (i % 3 == 0 || i % 5 == 0)
      continue;
    else
      ans += i;
  }
  fin(ans);
}
