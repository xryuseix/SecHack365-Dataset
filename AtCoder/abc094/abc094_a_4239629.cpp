/*
問題文の引用元：https://atcoder.jp/contests/abc094/tasks/abc094_a
A - Cats and DogsEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : 猫と犬が合わせて A + B 匹います．このうち A
匹は猫であることがわかっていますが，残りの B
匹は猫と犬のどちらであるかわかっていません．この A + B 匹の中に，猫がちょうど X
匹いるということはありうるかどうか判定してください．
制約1 \leq A \leq 1001 \leq B \leq 1001 \leq X \leq
200入力はすべて整数入力入力は以下の形式で標準入力から与えられる。A B
X出力猫がちょうど X 匹いるということがありうるならば YES を，ありえないならば NO
を出力せよ．
// ソースコードの引用元 : https://atcoder.jp/contests/abc094/submissions/4239629
// 提出ID : 4239629
// 問題ID : abc094_a
// コンテストID : abc094
// ユーザID : xryuseix
// コード長 : 533
// 実行時間 : 1



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

  int a, b, x;
  cin >> a >> b >> x;
  if (a <= x && a + b >= x)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}
