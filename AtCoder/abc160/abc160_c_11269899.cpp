/*
問題文の引用元：https://atcoder.jp/contests/abc160/tasks/abc160_c
C - Traveling Salesman around LakeEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : 1 周 K メートルの円形の湖があり、その周りに N 軒の家があります。i
番目の家は、湖の北端から時計回りに A_i
メートルの位置にあります。家の間の移動は、湖の周りに沿ってのみ行えます。いずれかの家から出発して
N 軒すべての家を訪ねるための最短移動距離を求めてください。
制約2 \leq K \leq 10^62 \leq N \leq 2 \times 10^50 \leq A_1 < ... < A_N <
K入力中のすべての値は整数である。入力入力は以下の形式で標準入力から与えられる。K
NA_1 A_2 ... A_N出力いずれかの家から出発して N
軒すべての家を訪ねるための最短移動距離を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc160/submissions/11269899
// 提出ID : 11269899
// 問題ID : abc160_c
// コンテストID : abc160
// ユーザID : xryuseix
// コード長 : 2283
// 実行時間 : 74



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

  int n, k;
  cin >> k >> n;
  vi v(n);
  rep(i, n) cin >> v[i];
  vi sum;
  rep(i, n - 1) sum.pb(v[i + 1] - v[i]);
  sum.pb(v[0] + (k - v[n - 1]));
  Sort(sum);
  fin(k - sum[sum.size() - 1]);
}
