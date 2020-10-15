/*
問題文の引用元：https://atcoder.jp/contests/agc026/tasks/agc026_a
A - Colorful Slimes 2Editorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : 高橋君は異世界に住んでいます。この世界のスライムの色は 10000
色存在し，色 1, 2, ..., 10000 と呼ぶことにします。高橋君は N
匹のスライムを飼っており，スライムは左右に一列に並んでいます。左から i
匹目のスライムの色は a_i
です。もし同じ色どうしのスライムが隣り合っていると，そのスライムたちは合体してしまいます。高橋君は小さいスライムのほうが好きなので，魔法でスライムの色を何匹か変えることにしました。高橋君は魔法を唱えることで，どれか
1 匹のスライムの色を，10000
色のうち好きな色に変えることが出来ます。どのスライムたちも合体しないようにするには，最小で何回魔法を唱える必要があるでしょうか？
制約2 \leq N \leq 1001 \leq a_i \leq
N入力される値は全て整数である入力入力は以下の形式で標準入力から与えられる。Na_1
a_2 ... a_N出力高橋君が唱える必要のある魔法の最小回数を出力して下さい。
// ソースコードの引用元 : https://atcoder.jp/contests/agc026/submissions/4404213
// 提出ID : 4404213
// 問題ID : agc026_a
// コンテストID : agc026
// ユーザID : xryuseix
// コード長 : 733
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

  int i, n, ans = 0;
  cin >> n;
  int a[n];
  for (i = 0; i < n; i++)
    cin >> a[i];
  for (i = 0; i < n - 1; i++) {
    if (a[i] == a[i + 1])
      a[i + 1] = 1000 + i, ans++;
  }
  cout << ans << endl;

  return 0;
}
