/*
問題文の引用元：https://atcoder.jp/contests/abc003/tasks/abc003_1
A - AtCoder社の給料Editorial
Time Limit : 2 sec / Memory Limit : 64 MB
問題文 :
AtCoder社の社員である青木さんの給料は以下のように決められます。ある月に、青木さんがタスクをこなした数を
x とします。この月の給料は、1 から x までの整数が 1 面ずつに書かれた x
面ダイスを振って出た目 {}\times{} 1
万円がもらえます。ただし、このダイスは、どの面が出る確率も等しく 1/x
です。青木くんは、暮らしていくのに十分な給料が得られるかどうかが心配で、平均いくら程度給料がもらえるか調べたいです。毎月、青木くんはちょうど
N
個のタスクをこなすこととし、毎月の給料の平均値を求めるプログラムを書いてください。A問題では、提出した結果、全てのテストに対する判定がWAまたはREになってしまった場合のみ、質問タブにて可能な限りのトラブルシューティングを受け付けます。提出結果のURLを添えて、お気軽にご質問ください。また、ページ下部、「よくある質問」も、併せてご活用ください。入力入力は以下の形式で標準入力から与えられる。N
1 行目には、整数で、青木くんが毎月こなすタスクの数 N\ (4 ≦ N ≦ 100)
が与えられる。出力青木くんがもらえる毎月の給料（単位は円）の平均値を 1
行で出力せよ。絶対誤差、または、相対誤差が 10^{-6}
以下であれば許容される。また、出力の末尾には改行を入れること。
// ソースコードの引用元 : https://atcoder.jp/contests/abc003/submissions/4320680
// 提出ID : 4320680
// 問題ID : abc003_1
// コンテストID : abc003
// ユーザID : xryuseix
// コード長 : 633
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

  int a, b;
  cin >> a;
  cout << a *(a + 1) / 2 * 10000 / a << endl;

  return 0;
}
