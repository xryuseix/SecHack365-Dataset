/*
問題文の引用元：https://atcoder.jp/contests/judge-update-202004/tasks/judge_update_202004_b
B - Picking BallsEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : 赤か青で塗られた N
個のボールが入った袋があります。また、それぞれのボールには整数が書かれています。i
個目のボールには整数 X_i が書かれており、色は C_i が R のとき赤、B
のとき青です。高橋君は、袋の中にボールが残っている間、次の手順を繰り返して袋からボールを取り出します。袋の中に赤のボールがあるとき、残っている赤のボールのうち最小の整数が書かれたボールを袋から取り出す。そうでないとき、残っている青のボールのうち最小の整数が書かれたボールを袋から取り出す。高橋君が各手順で取り出したボールに書かれていた整数を求めてください。
制約1 \leq N \leq 1001 \leq X_i \leq 10000C_i は R または BX_i \neq X_j (i \neq
j)N, X_i は全て整数入力入力は以下の形式で標準入力から与えられる。NX_1 C_1X_2
C_2:X_N C_N出力高橋君が各手順で取り出したボールに書かれていた整数を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/judge-update-202004/submissions/11780368
// 提出ID : 11780368
// 問題ID : judge_update_202004_b
// コンテストID : judge-update-202004
// ユーザID : xryuseix
// コード長 : 2482
// 実行時間 : 4



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

int main() {

  int n;
  cin >> n;
  vi v, w;
  rep(i, n) {
    int N;
    char c;
    cin >> N >> c;
    if (c == 'B')
      w.pb(N);
    else
      v.pb(N);
  }
  Sort(v);
  Sort(w);
  rep(i, v.size()) fin(v[i]);
  rep(i, w.size()) fin(w[i]);
}