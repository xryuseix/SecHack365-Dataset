/*
問題文の引用元：https://atcoder.jp/contests/abc161/tasks/abc161_b
B - Popular VoteEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : N 種類の商品に対して人気投票を行いました。商品 i は A_i
票を得ています。この中から人気商品 M 個を選びます。ただし、得票数が総投票数の
\dfrac{1}{4M} 未満であるような商品は選べません。人気商品 M 個を選べるなら
Yes、選べないなら No を出力してください。
制約1 \leq M \leq N \leq 1001 \leq A_i \leq 1000A_i
は相異なる入力は全て整数入力入力は以下の形式で標準入力から与えられる。N MA_1 ...
A_N出力人気商品 M 個を選べるなら Yes、選べないなら No を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc161/submissions/11496069
// 提出ID : 11496069
// 問題ID : abc161_b
// コンテストID : abc161
// ユーザID : xryuseix
// コード長 : 2475
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

  // int x,y,z;
  // cin>>x>>y>>z;
  // swap(x,y);
  // swap(x,z);
  // cout<<x<<" "<<y<<" "<<z<<endl;
  int n, m;
  cin >> n >> m;
  vi v(n);
  rep(i, n) cin >> v[i];
  int sum = 0;
  rep(i, n) sum += v[i];
  int ans = 0;
  rep(i, n) {
    if ((double)sum / 4.0 / m > v[i])
      continue;
    ans++;
  }
  if (ans >= m)
    fin("Yes");
  else
    fin("No");
}
