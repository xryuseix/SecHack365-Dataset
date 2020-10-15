/*
問題文の引用元：https://atcoder.jp/contests/caddi2018b/tasks/caddi2018_a
C - Product and GCDEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : N 個の 1 以上の整数 a_1, a_2, ..., a_N があります．a_1, a_2, ..., a_N
の値はわかりませんが，a_1 \times a_2 \times ... \times a_N = P
がわかっています．a_1, a_2, ..., a_N
の最大公約数として考えられるもののうち，最も大きいものを求めてください．
制約1 \leq N \leq 10^{12}1 \leq P \leq
10^{12}入力入力は以下の形式で標準入力から与えられる．N P出力答えを出力せよ．
// ソースコードの引用元 :
https://atcoder.jp/contests/caddi2018b/submissions/4012581
// 提出ID : 4012581
// 問題ID : caddi2018_a
// コンテストID : caddi2018b
// ユーザID : xryuseix
// コード長 : 320
// 実行時間 : 38



*/
#include <iostream>
#include <math.h>
using namespace std;
int main(void) {
  long ans = 0;
  long long n = 0, i, N, P;
  cin >> N >> P;
  if (N == 1) {
    cout << P << endl;
    return 0;
  }
  for (i = 1; n < P && n >= 0; i++) {
    n = powl(i, N);
    //		cout<<n<<" "<<i<<" "<<P<<" "<<ans<<endl;
    if (P % n == 0)
      ans = i;
  }
  cout << ans << endl;
  return 0;
}