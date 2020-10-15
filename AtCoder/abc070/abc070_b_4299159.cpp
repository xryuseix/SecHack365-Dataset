/*
問題文の引用元：https://atcoder.jp/contests/abc070/tasks/abc070_b
B - Two SwitchesEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : Alice と Bob
は、ロボットを制御するためのスイッチを1つずつ持っており、ロボットを動かしています。
Alice はロボットを動かし始めて A
秒後にスイッチを押し始め、ロボットを動かし始めて B 秒後にスイッチを離しました。
Bob はロボットを動かし始めて C 秒後にスイッチを押し始め、ロボットを動かし始めて
D 秒後にスイッチを離しました。  Alice と Bob
が、二人ともスイッチを押していた秒数を求めてください。
制約0≦A<B≦1000≦C<D≦100入力は全て整数である。入力入力は以下の形式で標準入力から与えられる。
A B C D出力Alice と Bob が二人ともスイッチを押していた秒数を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc070/submissions/4299159
// 提出ID : 4299159
// 問題ID : abc070_b
// コンテストID : abc070
// ユーザID : xryuseix
// コード長 : 762
// 実行時間 : 1



*/
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <cctype>
#define ld long double
#define ll long long int
#define ull unsigned long long int
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
const long long INF = 1LL << 60;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int a[101] = {0}, aa, b, c, d, i, ans = 0;
  cin >> aa >> b >> c >> d;
  for (i = aa; i <= b; i++)
    a[i]++;
  for (i = c; i <= d; i++)
    a[i]++;
  for (i = 0; i <= 100; i++)
    if (a[i] == 2)
      ans++;
  ;

  if (ans == 0)
    cout << ans << endl;
  else
    cout << ans - 1 << endl;

  return 0;
}
