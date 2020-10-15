/*
問題文の引用元：https://atcoder.jp/contests/abc054/tasks/abc054_a
A - One Card PokerEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 :
AliceとBobは、2人で1枚ポーカーを行います。1枚ポーカーは、トランプを用いて行う2人ゲームです。
今回使用するトランプでは、各カードに 1 から 13 までの数が書かれています。
カードの強さは、カードに書かれている数で決まり，強さの基準は以下の通りです。弱 2
< 3 < 4 < 5 < 6 < 7 < 8 < 9 < 10 < 11 < 12 < 13 < 1 強
1枚ポーカーは以下の手順で行います。
各プレイヤーは、トランプからカードを1枚選んで、自分の手札とします。
両プレイヤーは、手札を見せ合います。強いカードを持っているプレイヤーが勝ちです。
なお、両プレイヤーの持っているカードの強さが同じ場合は引き分けです。
2人の対戦を眺めていたあなたは、AliceとBobの手札を知ることができます。Aliceが持っているカードに書かれている数は
A 、Bobが持っているカードカードに書かれている数は B
です。2人の代わりに、勝敗を判定するプログラムを作ってください。
制約1≦A≦13  1≦B≦13  A,B は整数である。
入力入力は以下の形式で標準入力から与えられる。A
B出力Aliceが勝つならAliceを、Bobが勝つならBobを、引き分けならDrawを出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc054/submissions/4198660
// 提出ID : 4198660
// 問題ID : abc054_a
// コンテストID : abc054
// ユーザID : xryuseix
// コード長 : 378
// 実行時間 : 1



*/
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int a, b;
  cin >> a >> b;
  if (a == 1)
    a += 13;
  if (b == 1)
    b += 13;
  if (a > b)
    cout << "Alice" << endl;
  else if (a < b)
    cout << "Bob" << endl;
  else
    cout << "Draw" << endl;

  return 0;
}
