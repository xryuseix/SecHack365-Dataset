/*
問題文の引用元：https://atcoder.jp/contests/abc111/tasks/abc111_a
A - AtCoder Beginner Contest 999Editorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : 猫のすぬけは文字を書く練習をしています。すぬけは今日、数字の 1 と 9
を書く練習をしていたのですが、間違えて  1 と 9
をあべこべに書いてしまいました。すぬけが書いた 3 桁の整数 n が与えられます。n
に含まれる 1 という桁をそれぞれ 9 に、9 という桁をそれぞれ 1
に置き換えて得られる整数を出力してください。
制約111 \leq n \leq 999n は各桁が 1 か 9
である整数入力入力は以下の形式で標準入力から与えられる。n出力n の各桁の 1 と 9
を入れ替えた整数を出力してください。
// ソースコードの引用元 : https://atcoder.jp/contests/abc111/submissions/4239829
// 提出ID : 4239829
// 問題ID : abc111_a
// コンテストID : abc111
// ユーザID : xryuseix
// コード長 : 603
// 実行時間 : 2



*/
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <set>
#include <cctype>
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

  string a;
  cin >> a;
  if (a[0] == '1')
    a[0] = '9';
  else
    a[0] = '1';
  if (a[1] == '1')
    a[1] = '9';
  else
    a[1] = '1';
  if (a[2] == '1')
    a[2] = '9';
  else
    a[2] = '1';
  cout << a << endl;

  return 0;
}
