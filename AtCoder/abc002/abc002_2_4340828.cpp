/*
問題文の引用元：https://atcoder.jp/contests/abc002/tasks/abc002_2
B - 罠Editorial
Time Limit : 2 sec / Memory Limit : 64 MB
問題文 : B問題のリジャッジ（再採点）が終了しました。21:
50B問題のテストケースにミスがあったので、提出されたコードをリジャッジ（再採点）してます。21:
40神の恵みで財産を築いた高橋くんですが、なんとそこには罠がありました。神は、高橋くんの発した言葉から母音
a、i、u、e、o を全て盗んでいったのです。高橋くんが発した言葉を表す文字列 W
が与えられるので、周囲の人が聞く言葉を表す文字列を出力するプログラムを書いてください。入力入力は以下の形式で標準入力から与えられる。W1
行目には、高橋くんの発した言葉を表す文字列 W が与えられる。W の長さ |W| は
1≦|W|≦30 を満たす。W は半角英小文字（a から zまで）のみで構成される。W
には母音以外の文字が少なくとも 1 文字含まれることが保証されている。出力W
から母音を全て除いた文字列を 1
行で出力してください。また、出力の末尾には改行を入れること。
// ソースコードの引用元 : https://atcoder.jp/contests/abc002/submissions/4340828
// 提出ID : 4340828
// 問題ID : abc002_2
// コンテストID : abc002
// ユーザID : xryuseix
// コード長 : 737
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

  string s;
  cin >> s;
  int i;
  for (i = 0; i < s.length(); i++) {
    if (s[i] != 'a' && s[i] != 'i' && s[i] != 'u' && s[i] != 'e' &&
        s[i] != 'o') {
      cout << s[i];
    }
  }
  cout << endl;

  return 0;
}
