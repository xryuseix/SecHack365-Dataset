/*
問題文の引用元：https://atcoder.jp/contests/arc045/tasks/arc045_a
A - スペース高橋君Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 :
スペース高橋君は今日も銀河の平和を守っています。スペース高橋君は銀河の治安を悪化させているスペース青木君と踊りで勝負することにしました。具体的な方法を説明します。スペース青木君は
Left、Right、AtCoder、の三種類の単語からなる言葉を発します。スペース高橋君は
Left と聞いたら <、Right と聞いたら >、AtCoder と聞いたら A
と答えます。あなたの仕事は、スペース高橋君をサポートするためのプログラムを書くことです。スペース青木君の発した言葉が与えられるので、スペース高橋君の発する言葉を表示するプログラムを作ってください。入力入力は以下の形式で標準入力から与えられる。S1
行目には文字列 S が与えられる。S
には半角スペースが含まれることもあることに注意せよ。S の長さは 1 文字以上 100
文字以下である。S は、3 種類の単語 (Left、Right、AtCoder) いくつかを半角スペース
1 つでつないだものである。出力出力は標準出力に行い、末尾に改行を入れること。S
について、Left を <、Rightを>、AtCoder を A
に置換したものを一行に出力せよ。行の最後に余分な空白を入れないように注意すること。
// ソースコードの引用元 : https://atcoder.jp/contests/arc045/submissions/5395471
// 提出ID : 5395471
// 問題ID : arc045_a
// コンテストID : arc045
// ユーザID : xryuseix
// コード長 : 1666
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
#include <bits/stdc++.h>
#define ld long double
#define ll long long int
#define ull unsigned long long int
#define rep(i, n) for (i = 0; i < n; i++)
#define fin(ans) cout << (ans) << endl
#define INF INT_MAX
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define vvs vector<vector<string>>
#define P 1000000007
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
const long long LLINF = 1LL << 60;
// set<int>::iterator it;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  string s[150];
  int j, i;
  rep(i, 150) s[i] = "";
  string t = "";
  char c;
  while (1) {
    scanf("%c", &c);
    if (c == '\n')
      break;
    //	cout<<c<<endl;
    t += c;
  }
  j = 0;
  // cout<<s[0]<<" "<<s[1]<<" "<<s[2]<<endl;
  rep(i, t.length()) {
    if (t[i] == ' ') {
      j++;
      continue;
    } else {
      //		cout<<s[j]<<" "<<t[i]<<endl;
      s[j] += t[i];
    }
  }
  if (s[0] == "Right") {
    cout << ">";
  } else if (s[0] == "Left") {
    cout << "<";
  } else {
    cout << "A";
  }
  i = 1;
  while (s[i] != "") {
    if (s[i] == "Right") {
      cout << " "
           << ">";
    } else if (s[i] == "Left") {
      cout << " "
           << "<";
    } else {
      cout << " "
           << "A";
    }
    i++;
  }
  cout << endl;

  //////////////////////////////////////////////////////
  return 0;
}
