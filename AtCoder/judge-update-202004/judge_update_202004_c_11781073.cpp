/*
問題文の引用元：https://atcoder.jp/contests/judge-update-202004/tasks/judge_update_202004_c
C - Numbering BlocksEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : 積み木の山が 3 つ並んでおり、それぞれの山には a_1 \geq a_2 \geq a_3
個の積み木が積まれています。全部で N = a_1 + a_2 + a_3
個の積み木がありますが、これらに 1 から N までの整数をちょうど 1
つずつ書き込みます。ただし、次の条件を全て満たす必要があります。左から i
個目の山の下から j 個目の積み木に書かれた整数を X_{i, j} で表す (1 \leq i \leq
3, 1 \leq j \leq a_i) とき、X_{i, j} > X_{i, j-1} (1 \leq i \leq 3, 1 < j \leq
a_i)X_{i, j} > X_{i-1, j} (1 < i \leq 3, 1 \leq j \leq
a_i)この条件を満たす整数の書き込み方の個数を求めてください。
制約3 \geq a_1 \geq a_2 \geq a_3 \geq
1入力は全て整数である入力入力は以下の形式で標準入力から与えられる。a_1 a_2
a_3出力条件を満たす整数の書き込み方の個数を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/judge-update-202004/submissions/11781073
// 提出ID : 11781073
// 問題ID : judge_update_202004_c
// コンテストID : judge-update-202004
// ユーザID : xryuseix
// コード長 : 2520
// 実行時間 : 10



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

int a, b, c;

int dfs(int x, int y, int z) {
  if (x == a && y == b && z == c)
    return 1;
  int ans = 0;
  if (x + 1 <= a)
    ans += dfs(x + 1, y, z);
  if (y + 1 <= b && x >= y + 1)
    ans += dfs(x, y + 1, z);
  if (z + 1 <= c && y >= z + 1)
    ans += dfs(x, y, z + 1);
  return ans;
}
int main() {

  cin >> a >> b >> c;
  fin(dfs(0, 0, 0));
}
