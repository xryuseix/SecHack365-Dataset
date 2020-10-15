/*
問題文の引用元：https://atcoder.jp/contests/abc130/tasks/abc130_a
A - RoundingEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : X, A は 0 以上 9 以下の整数です。X が A 未満の時 0、A 以上の時 10
を出力してください。
制約0 \leq X, A \leq 9入力は全て整数である
入力入力は以下の形式で標準入力から与えられる。X A出力X が A 未満の時 0、A
以上の時 10 を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc130/submissions/5954759
// 提出ID : 5954759
// 問題ID : abc130_a
// コンテストID : abc130
// ユーザID : xryuseix
// コード長 : 1538
// 実行時間 : 1



*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cctype>
#include <climits>
#include <bitset>
#define ld long double
#define ll long long int
#define ull unsigned long long int
#define rep(i, n) for (i = 0; i < n; i++)
#define fin(ans) cout << (ans) << endl
#define INF INT_MAX
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vpii vector<pair<int, int>>
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define vvs vector<vector<string>>
#define P 1000000007
#define STI(s) atoi(s.c_str()) // string to int
#define mp(p, q) make_pair(p, q)
#define Sort(a) sort(a.begin(), a.end())
using namespace std;
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
const long long LLINF = 1LL << 60;
// set<int>::iterator it;
//|\_
// g++ -std=c++1z temp.cpp
//./a.out

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////
  /* int n,x,i;
  cin>>n>>x;
  int l[n];
  rep(i,n)cin>>l[i];
  int ans=0,place=0;
  rep(i,n){
      if(x>=place)ans++;
      place+=l[i];
  }
  fin(ans);
  int x,a;
  cin>>x>>a;*/
  int a, x;
  cin >> x >> a;
  if (a <= x)
    fin(10);
  else
    fin(0);
  //////////////////////////////////////////////////////
  return 0;
}
