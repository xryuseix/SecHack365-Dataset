/*
問題文の引用元：https://atcoder.jp/contests/abc135/tasks/abc135_b
B - 0 or 1 SwapEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : {1,\ 2,\ ...,\ N} を並び替えた数列 p = {p_1,\ p_2,\ ...,\ p_N}
があります。あなたは一度だけ、整数 \ i,\ j \ (1 \leq i < j \leq N) を選んで \
p_i\  と \ p_j\
を入れ替える操作を行うことができます。操作を行わないことも可能です。p
を昇順にすることができるなら YES を、できないならば NO を出力してください。
制約入力は全て整数である。2 \leq N \leq 50p は {1,\ 2,\ ...,\ N}
を並び替えた数列である。入力入力は以下の形式で標準入力から与えられる。Np_1 p_2
... p_N出力p を昇順にすることができるなら YES を、できないならば NO を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc135/submissions/6561153
// 提出ID : 6561153
// 問題ID : abc135_b
// コンテストID : abc135
// ユーザID : xryuseix
// コード長 : 1816
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
// g++ -std=c++1z temp.cpp
//./a.out

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  int n;
  cin >> n;
  vi a(n), b(n);
  rep(i, n) {
    cin >> a[i];
    b[i] = a[i];
  }
  Sort(b);
  int wr = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] != b[i])
      wr++;
  }
  if (wr <= 2)
    cout << "YES" << endl;
  else
    fin("NO");

  //////////////////////////////////////////////////////
  return 0;
}
