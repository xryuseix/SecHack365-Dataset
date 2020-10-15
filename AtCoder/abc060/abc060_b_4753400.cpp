/*
問題文の引用元：https://atcoder.jp/contests/abc060/tasks/abc060_b
B - Choose IntegersEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 :
あなたは、正の整数をいくつか選び、それらの総和を求めます。選ぶ数の上限や、選ぶ整数の個数に制限はありません。どんなに大きな整数を選んでもよいですし、整数を
5000 兆個選んでもよいです。ただし、選ぶ数はすべて A
の倍数でなくてはいけません。また、少なくとも 1
つは整数を選ばなくてはいけません。そして総和を B で割ったあまりが C
となるようにしたいです。こうなるように整数を選ぶことが出来るか判定してください。出来るならば
YES、そうでないならば NO を出力してください。
制約1 ≦ A ≦ 1001 ≦ B ≦ 1000 ≦ C <
B入力入力は以下の形式で標準入力から与えられる。A B C出力YES か NO を出力する。
// ソースコードの引用元 : https://atcoder.jp/contests/abc060/submissions/4753400
// 提出ID : 4753400
// 問題ID : abc060_b
// コンテストID : abc060
// ユーザID : xryuseix
// コード長 : 1005
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
#define INF INT_MAX;
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

  int a, b, c, i;
  cin >> a >> b >> c;
  for (i = 1; i < 10000; i++) {
    if (a * i % b == c) {
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;

  //////////////////////////////////////////////////////
  return 0;
}
