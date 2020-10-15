/*
問題文の引用元：https://atcoder.jp/contests/arc019/tasks/arc019_1
A - お買い物クライシスEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 私は今 ARC ゲームズという会社の Ancient Royal Coders
という、冒険しながら競技プログラミングの知識が身につくロールプレイングゲームをプレーしている真っ最中である。といってもまだゲームは始まったばかりで、これから最初のダンジョンへ向かうところだ。とりあえず薬草をいくつか購入するために街にあるショップへ行っておこう。ショップへ到着し薬草を購入しようとして値段を確認すると、これがなんだか奇妙だ。画面には
1Z0 ゴールド と値段が表示されているが、これは本当に 120
なのだろうか……？他のアイテムもよく見てみると、なんと一部の数字が似たようなアルファベットに置き換わっているではないか！これでは、値段が
36
進数として解釈されてしまい法外な金額を要求されかねない！なるほどなるほど、ぼったくりを回避するためにはこの奇妙な表記を数字のみからなる正しい表記に戻すためのプログラムを書かないといけないというわけか。序盤からなかなか骨のあるゲームだ。調べてみたところ、置き換わっている文字の種類は以下のようなものがあるらしい。O
→ 0D → 0I → 1Z → 2S → 5B →
8さて、早速そのためのプログラムを書くこととしよう。入力入力は以下の形式で標準入力から与えられる。S1
行目には、画面に表示されている値段 S が書かれている。S は 1 文字以上 8
文字以下の文字列で、 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, O, D, I, Z, S, B の 16
種類の文字からなる。S の先頭の文字は 0, O, D
のいずれでもない。出力画面に表示されている値段を、数字のみからなる正しい表記に直したときの金額を
1 行に出力せよ。出力の末尾にも改行をいれること。
// ソースコードの引用元 : https://atcoder.jp/contests/arc019/submissions/6114970
// 提出ID : 6114970
// 問題ID : arc019_1
// コンテストID : arc019
// ユーザID : xryuseix
// コード長 : 1693
// 実行時間 : 1



*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cctype>
#include <climits>
#include <bitset>
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<pair<int, int>> vpii;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef vector<vector<string>> vvs;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define fin(ans) cout << (ans) << endl
#define P 1000000007
#define STI(s) atoi(s.c_str()) // string to int
#define mp(p, q) make_pair(p, q)
#define Sort(a) sort(a.begin(), a.end())
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
const int INF = INT_MAX;
const long long LLINF = 1LL << 60;
// g++ -std=c++1z temp.cpp
//./a.out

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  string s;
  cin >> s;
  int i;
  rep(i, s.length()) {
    if (s[i] == 'O' || s[i] == 'D') {
      s[i] = '0';
    } else if (s[i] == 'I') {
      s[i] = '1';
    } else if (s[i] == 'Z') {
      s[i] = '2';
    } else if (s[i] == 'S') {
      s[i] = '5';
    } else if (s[i] == 'B') {
      s[i] = '8';
    }
  }
  cout << s << endl;

  //////////////////////////////////////////////////////
  return 0;
}
