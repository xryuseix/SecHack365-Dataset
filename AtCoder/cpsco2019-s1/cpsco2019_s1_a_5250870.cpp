/*
問題文の引用元：https://atcoder.jp/contests/cpsco2019-s1/tasks/cpsco2019_s1_a
A - AjihonEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 :     はにーま君はプログラミング合宿を開催することにしました。参加者は N
人いて、 N は 3 の倍数です。
競技プログラマの間では「アジ本」と呼ばれる参考書が広く普及しています。事前のアンケートにより、今回の合宿にアジ本を持参した人は
A 人いることがわかっています。                合宿では 3 人ずつのチームを
\dfrac{N}{3} 個作ってチーム戦を行います。        このとき、 3 人のうち少なくとも
1
人がアジ本を持っているようなチームの個数として、ありえる最小の個数と最大の個数を答えてください。
制約    3\le N\le 99    0\le A\le N     N は 3 の倍数    A は整数
入力    入力は以下の形式で標準入力から与えられます。    N\ A
出力
アジ本を持っている人が存在するチームの数として考えられる最小の個数と最大の個数を、この順に空白区切りで
1 行に出力してください。
// ソースコードの引用元 :
https://atcoder.jp/contests/cpsco2019-s1/submissions/5250870
// 提出ID : 5250870
// 問題ID : cpsco2019_s1_a
// コンテストID : cpsco2019-s1
// ユーザID : xryuseix
// コード長 : 1105
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
#include <bits/stdc++.h>
#define ld long double
#define ll long long int
#define ull unsigned long long int
#define rep(i, n) for (i = 0; i < n; i++)
#define fin(ans) cout << (ans) << endl
#define INF INT_MAX
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define vvs vector<vector<string>>
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

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  int n, a;
  cin >> n >> a;
  cout << min(n / 3, (int)ceil((double)a / 3.0)) << " " << min(n / 3, a)
       << endl;

  //////////////////////////////////////////////////////
  return 0;
}
