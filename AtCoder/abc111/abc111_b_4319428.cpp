/*
問題文の引用元：https://atcoder.jp/contests/abc111/tasks/abc111_b
B - AtCoder Beginner Contest 111Editorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : 黒橋君は，AtCoder Beginner Contest (ABC)
にまだ参加したことがありません．次に行われる ABC は第 N
回です．黒橋君は，初めて参加する ABC を第 x 回としたときに，x
の十進法表記でのすべての桁の数字が同じであるようにしたいです．黒橋君が初めて参加する
ABC としてふさわしいもののうち，最も早いものは第何回でしょうか？
制約100 \leq N \leq 999N
は整数入力入力は以下の形式で標準入力から与えられる．N出力黒橋君が初めて参加する
ABC としてふさわしいもののうち，最も早いものは第何回かを出力せよ．
// ソースコードの引用元 : https://atcoder.jp/contests/abc111/submissions/4319428
// 提出ID : 4319428
// 問題ID : abc111_b
// コンテストID : abc111
// ユーザID : xryuseix
// コード長 : 748
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
// set<int>::iterator it;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int i, n;
  cin >> n;
  for (i = n; i < 1000; i++) {
    //		cout<<i/100<<" "<<i/10%10<<" "<<i%10<<endl;
    if (i / 100 == i % 10 && i / 10 % 10 == i % 10) {
      cout << i << endl;
      return 0;
    }
  }

  return 0;
}
