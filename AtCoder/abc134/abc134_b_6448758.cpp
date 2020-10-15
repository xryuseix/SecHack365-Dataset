/*
問題文の引用元：https://atcoder.jp/contests/abc134/tasks/abc134_b
B - Golden AppleEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : 一列に並んだ N
本の林檎の木のうちいずれかに黄金の林檎が実ると言われています。そこで、何人かの監視員を配置してどの林檎の木もいずれかの監視員に監視された状態にしたいです。それぞれの監視員は
N 本の木のうちいずれかに配置します。便宜上、これらの木に 1 から N
までの番号をつけます。番号 i の木に配置された監視員は、番号が i-D 以上 i+D
以下のすべての林檎の木を監視します。条件を満たすために少なくとも何人の監視員を配置する必要があるか求めてください。
制約入力は全て整数である。1 \leq N \leq 201 \leq D \leq
20入力入力は以下の形式で標準入力から与えられる。N
D出力条件を満たすために配置する必要のある監視員の人数の最小値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc134/submissions/6448758
// 提出ID : 6448758
// 問題ID : abc134_b
// コンテストID : abc134
// ユーザID : xryuseix
// コード長 : 1545
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
  double n, d;
  cin >> n >> d;
  cout << ceil(n / (d * 2 + 1)) << endl;

  //////////////////////////////////////////////////////
  return 0;
}
