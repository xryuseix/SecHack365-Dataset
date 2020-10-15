/*
問題文の引用元：https://atcoder.jp/contests/abc138/tasks/abc138_d
D - KiEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 400 点
問題文 : 1 から N までの番号がついた N
個の頂点を持つ根付き木が与えられます。この木の根は頂点 1 で、i 番目の辺 (1 \leq
i \leq N - 1) は頂点 a_i と頂点 b_i
を結びます。各頂点にはカウンターが設置されており、はじめすべての頂点のカウンターの値は
0 です。これから、以下のような Q 回の操作が行われます。操作 j (1 \leq j \leq Q):
頂点 p_j を根とする部分木に含まれるすべての頂点のカウンターの値に x_j
を足す。すべての操作のあとの各頂点のカウンターの値を求めてください。
制約2 \leq N \leq 2 \times 10^51 \leq Q \leq 2 \times 10^51 \leq a_i < b_i \leq
N1 \leq p_j \leq N1 \leq x_j \leq
10^4与えられるグラフは木である。入力中の値はすべて整数である。入力入力は以下の形式で標準入力から与えられる。N
Qa_1 b_1:a_{N-1} b_{N-1}p_1 x_1:p_Q
x_Q出力すべての操作のあとの各頂点のカウンターの値を、頂点 1, 2, \ldots, N
の順に空白区切りで出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc138/submissions/7014503
// 提出ID : 7014503
// 問題ID : abc138_d
// コンテストID : abc138
// ユーザID : xryuseix
// コード長 : 2165
// 実行時間 : 430



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
#include <climits>
#include <string>
#include <bitset>
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<ll> vll;
typedef vector<pair<int, int>> vpii;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef vector<vector<string>> vvs;
typedef vector<vector<ll>> vvll;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define fin(ans) cout << (ans) << endl
#define STI(s) atoi(s.c_str())
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
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
const int P = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;

vi to[200005];
vi ans;
vi pass;

int dfs(int pos, int p = -1) {
  // cout<<"pos:"<<pos<<endl;
  pass[pos] = true;
  for (int i = 0; i < to[pos].size(); i++) {
    if (pass[to[pos][i]] == true)
      continue;
    ans[to[pos][i]] += ans[pos];
    dfs(to[pos][i], pos);
  }
  return 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  int n, q;
  cin >> n >> q;
  int a, b;
  rep(i, n - 1) {
    cin >> a >> b;
    to[a - 1].push_back(b - 1);
    to[b - 1].push_back(a - 1);
  }
  int p, x;
  ans.resize(n);
  pass.resize(n, false);
  rep(i, q) {
    cin >> p >> x;
    ans[p - 1] += x;
  }
  dfs(0);
  for (int i = 0; i < n; i++) {
    cout << ans[i] << endl;
  }

  //////////////////////////////////////////////////////
  return 0;
}
