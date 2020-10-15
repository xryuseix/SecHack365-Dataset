/*
問題文の引用元：https://atcoder.jp/contests/abc005/tasks/abc005_1
A - おいしいたこ焼きの作り方Editorial
Time Limit : 2 sec / Memory Limit : 64 MB
問題文 :
高橋君はたこ焼き屋をはじめることにしました。たこ焼きを１つ作るのに必要な小麦粉の量xグラムと、高橋くんが今持っている小麦粉の量yグラムが与えられるので高橋くんが最大でいくつたこ焼きを作れるか出力して下さい。A問題では、提出した結果、全てのテストに対する判定がWAまたはREになってしまった場合のみ、質問タブにて可能な限りのトラブルシューティングを受け付けます。提出結果のURLを添えて、お気軽にご質問ください。よくある質問も、併せてご活用ください。入力入力は以下の形式で標準入力から与えられる。x　yたこ焼きを１つ作るのに必要な小麦粉の量を表す整数x(1≦x≦100)と、高橋くんが今持っている小麦粉の量を表す整数y(1≦y≦100)が半角スペース区切りで与えられる。出力高橋くんが最大でいくつたこ焼きを作れるか出力して下さい。また、出力の末尾には改行を入れて下さい。
// ソースコードの引用元 : https://atcoder.jp/contests/abc005/submissions/4320641
// 提出ID : 4320641
// 問題ID : abc005_1
// コンテストID : abc005
// ユーザID : xryuseix
// コード長 : 622
// 実行時間 : 4



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
  cin >> a >> b;
  cout << b / a << endl;

  return 0;
}