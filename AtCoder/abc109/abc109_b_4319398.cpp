/*
問題文の引用元：https://atcoder.jp/contests/abc109/tasks/abc109_b
B - ShiritoriEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : 高橋くんは今日も 1
人でしりとりの練習をしています。しりとりとは以下のルールで遊ばれるゲームです。はじめ、好きな単語を発言する以降、次の条件を満たす単語を発言することを繰り返すその単語はまだ発言していない単語であるその単語の先頭の文字は直前に発言した単語の末尾の文字と一致する高橋くんは、10
秒間にできるだけ多くの単語を発言する練習をしています。高橋くんが発言した単語の個数
N と i 番目に発言した単語 W_i
が与えられるので、どの発言もしりとりのルールを守っていたかを判定してください。
制約N は 2 \leq N \leq 100 を満たす整数であるW_i は英小文字からなる長さ 1 以上
10
以下の文字列である入力入力は以下の形式で標準入力から与えられる。NW_1W_2:W_N出力高橋くんのどの発言もしりとりのルールを守っていたなら
Yes、そうでなければ No を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc109/submissions/4319398
// 提出ID : 4319398
// 問題ID : abc109_b
// コンテストID : abc109
// ユーザID : xryuseix
// コード長 : 873
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

  string str, t;
  set<string> s;
  int i, n;
  set<string>::iterator it;
  cin >> n;
  for (i = 0; i < n; i++) {
    cin >> str;
    if (i != 0 && str[0] != t[t.length() - 1]) {
      cout << "No" << endl;
      return 0;
    }
    s.insert(str);
    t = str;
  }
  if (s.size() != n) {
    cout << "No" << endl;
    return 0;
  }
  cout << "Yes" << endl;

  return 0;
}
