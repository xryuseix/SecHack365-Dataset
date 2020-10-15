/*
問題文の引用元：https://atcoder.jp/contests/panasonic2020/tasks/panasonic2020_d
D - String EquivalenceEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 400 点
問題文 : この問題では、英小文字からなる文字列のみを考えます。文字列 s, t
は以下の条件を満たすとき 同型 であるといいます。|s| = |t| である。任意の i, j
に対し次のいずれかが成立する。s_i = s_j かつ t_i = t_js_i \neq s_j かつ t_i \neq
t_jたとえば、abcac と zyxzx は同型ですが、abcac と ppppp
は同型ではありません。文字列 s は以下の条件を満たすとき 標準形
であるといいます。任意の s と同型な文字列 t に対し、s \leq t
が成立する。ただしここで \leq は辞書順での比較を表す。たとえば、abcac
は標準形ですが、zyxzx はそれより辞書順で小さい　abcac
と同型のため標準形ではありません。整数 N が与えられます。長さ N
の標準形の文字列を全て、辞書順で昇順で出力してください。
制約1 \leq N \leq
10入力は全て整数である。入力入力は以下の形式で標準入力から与えられる。N出力長さ
N の標準形の文字列が K 個あり、辞書順で w_1, \ldots, w_K
であるとする。このとき以下の形式で出力せよ。w_1:w_K
// ソースコードの引用元 :
https://atcoder.jp/contests/panasonic2020/submissions/11736328
// 提出ID : 11736328
// 問題ID : panasonic2020_d
// コンテストID : panasonic2020
// ユーザID : xryuseix
// コード長 : 2450
// 実行時間 : 20



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
#define endl '\n';
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

int n;
void dfs(string s, char m) {
  if (s.size() == n)
    fin(s);
  else {
    for (char i = 'a'; i <= m + 1; i++) {
      dfs(s + (char)i, max(i, m));
    }
  }
}

int main() {

  cin >> n;
  dfs("a", 'a');
}
