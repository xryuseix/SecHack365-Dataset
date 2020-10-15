/*
問題文の引用元：https://atcoder.jp/contests/keyence2019/tasks/keyence2019_a
A - BeginningEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : 4 個の数字 N_1, N_2, N_3, N_4 が与えられます．これらを並べ替えて 1974
という数字の列を作ることが出来るかを判定してください．
制約0 \leq N_1, N_2, N_3, N_4 \leq 9N_1, N_2, N_3, N_4
は整数入力入力は以下の形式で標準入力から与えられる．N_1 N_2 N_3 N_4出力N_1, N_2,
N_3, N_4 を並べ替えて 1974 という数字の列を作ることが出来るなら YES
を，出来ないなら NO を出力せよ．
// ソースコードの引用元 :
https://atcoder.jp/contests/keyence2019/submissions/4001486
// 提出ID : 4001486
// 問題ID : keyence2019_a
// コンテストID : keyence2019
// ユーザID : xryuseix
// コード長 : 451
// 実行時間 : 1



*/
#include <iostream>
using namespace std;
int main(void) {
  int array[4] = {1, 9, 7, 4};
  int i, n, j, co = 0;
  for (i = 0; i < 4; i++) {
    cin >> n;
    if (n != 1 && n != 7 && n != 9 && n != 4) {
      co = 0;
      break;
    }
    for (j = 0; j < 4; j++) {
      if (array[j] == n) {
        array[j] = 0;
        //				cout<<array[0]<<array[1]<<array[2]<<array[3]<<endl;
        co++;
        break;
      }
    }
  }
  if (array[0] + array[3] + array[2] + array[1] == 0)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}