/*
問題文の引用元：https://atcoder.jp/contests/abc101/tasks/abc101_a
A - Eating Symbols EasyEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : 高橋君は，いつも頭の中に整数を 1
つ思い浮かべています．はじめ，高橋君が思い浮かべている整数は 0
です．これから，高橋君は + または - の記号を，あわせて 4
つ食べようとしています．高橋君が + を食べると，思い浮かべている整数は 1
大きくなります．一方，高橋君が - を食べると，思い浮かべている整数は 1
小さくなります．高橋君が食べようとしている記号は，文字列 S で与えられます．S の
i 文字目は，高橋君が i
番目に食べる記号です．すべての記号を食べ終わった後，高橋君が思い浮かべている整数を求めてください．
制約S の長さは 4S の各文字は + または
-入力入力は以下の形式で標準入力から与えられる．S出力すべての記号を食べ終わった後，高橋君が思い浮かべている整数を出力せよ．
// ソースコードの引用元 : https://atcoder.jp/contests/abc101/submissions/4239744
// 提出ID : 4239744
// 問題ID : abc101_a
// コンテストID : abc101
// ユーザID : xryuseix
// コード長 : 566
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

  int i, ans = 0;
  string s;
  cin >> s;
  for (i = 0; i < 4; i++) {
    if (s[i] == '+')
      ans++;
    else
      ans--;
  }
  cout << ans << endl;

  return 0;
}
