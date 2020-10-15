/*
問題文の引用元：https://atcoder.jp/contests/abc116/tasks/abc116_b
B - Collatz ProblemEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : 数列 a=\{a_1,a_2,a_3,......\} は、以下のようにして定まります。初項 s
は入力で与えられる。関数 f(n) を以下のように定める: n が偶数なら f(n) = n/2、n
が奇数なら f(n) = 3n+1。i = 1 のとき a_i = s、i > 1 のとき a_i = f(a_{i-1})
である。このとき、次の条件を満たす最小の整数 m を求めてください。a_m = a_n (m >
n) を満たす整数 n が存在する。
制約1 \leqq s \leqq 100入力はすべて整数である。a
のすべての要素、および条件を満たす最小の m は 1000000
以下となることが保証される。入力入力は以下の形式で標準入力から与えられます。s出力条件を満たす最小の整数
m を出力してください。
// ソースコードの引用元 : https://atcoder.jp/contests/abc116/submissions/4056381
// 提出ID : 4056381
// 問題ID : abc116_b
// コンテストID : abc116
// ユーザID : xryuseix
// コード長 : 457
// 実行時間 : 1



*/
#include <iostream>
#include <string>
#include <algorithm>
#include <list>
#include <cmath>
#include <vector>
#include <cstdio>
using namespace std;
int fn(int n) { return (n % 2 == 0) ? n / 2 : 3 * n + 1; }
int main(void) {
  int i, j, s, a[10000];
  cin >> s;
  bool ch = true;
  a[0] = s;
  for (i = 1; ch == true; i++) {
    int tmp = fn(a[i - 1]);
    for (j = 0; j < i; j++) {
      if (a[j] == tmp) {
        ch = false;
        break;
      }
    }
    if (ch)
      a[i] = tmp;
  }
  cout << i << endl;

  return 0;
}
