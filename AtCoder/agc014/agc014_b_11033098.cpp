/*
問題文の引用元：https://atcoder.jp/contests/agc014/tasks/agc014_b
B - Unplanned QueriesEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 500 点
問題文 :
高橋君は木の問題が苦手です。そこで、青木君は高橋君の練習相手になってあげることにしました。まず、高橋君は
N 頂点からなる木を用意し、頂点に 1 から N の番号を付けました。そして、各辺に 0
と書きました。次に、青木君は高橋君に M 個のクエリを与えました。i
個目のクエリは以下のような内容です。頂点 a_i と頂点 b_i
を結ぶパス上の辺すべてに対して、書かれている数を 1
増やす。全てのクエリを終えた後、高橋君は青木君にどの辺を見ても書かれている数が偶数になったと伝えました。しかし、青木君は最初に高橋君が用意していた木を確認していなかったので、高橋君が正しくクエリを処理できたか分かりませんでした。青木君を助けるために、高橋くんの言う性質を満たす木が存在するかどうかを判定してください。
制約2 ≦ N ≦ 10^51 ≦ M ≦ 10^51 ≦ a_i,b_i ≦ Na_i ≠
b_i入力入力は以下の形式で標準入力から与えられる。N Ma_1 b_1:a_M
b_M出力高橋くんの言う性質を満たす木が存在するならば YES を、存在しないならば NO
を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/agc014/submissions/11033098
// 提出ID : 11033098
// 問題ID : agc014_b
// コンテストID : agc014
// ユーザID : xryuseix
// コード長 : 2223
// 実行時間 : 58



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
inline void yn(const bool b) { b ? fin("Yes") : fin("No"); }
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
  int n, m;
  cin >> n >> m;
  vi v(n, 0);
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    v[a - 1]++;
    v[b - 1]++;
  }
  bool ch = 1;
  rep(i, n) if (v[i] % 2 != 0) ch = 0;
  YN(ch);
}
