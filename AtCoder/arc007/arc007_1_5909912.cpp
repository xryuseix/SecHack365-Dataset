/*
問題文の引用元：https://atcoder.jp/contests/arc007/tasks/arc007_1
A - 帰ってきた器物損壊！高橋君Editorial
Time Limit : 2 sec / Memory Limit : 64 MB
問題文 : 　高橋君はある日、コンピューターのキーボードの中の 1
つのキーが壊れていることに気づきました。　壊れたキーは押しても文字が出力されません。　力が強いことで有名な高橋君なので、キーを強く叩きすぎたのでしょう。　しかし、高橋君は小さいことは気にしない性格なので、そのキーボードを壊れたまま使うことにしました。　高橋君がタイピングする文字列が与えられるので、壊れたキーボードを用いてタイピングした場合の出力結果を答えなさい。入力入力は以下の形式で標準入力から与えられる。Xs入力は
2 行ある。1 行目には、壊れたキーを表す文字 X が与えられる。X
は英字の小文字(a-z)のいずれかである。2 行目にはタイピングする文字列を表す 1
文字以上 50
文字以下の文字列が与えられる。文字列は英語の小文字(a-z)のみで成り立っている。出力壊れたキーでの入力は出力されない状態で文字列をタイピングした場合に、出力される文字列を標準出力に
1
行で出力せよ。なお、最後には改行を出力せよ。もし何も出力されない場合は改行のみを出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/arc007/submissions/5909912
// 提出ID : 5909912
// 問題ID : arc007_1
// コンテストID : arc007
// ユーザID : xryuseix
// コード長 : 1413
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
#define ld long double
#define ll long long int
#define ull unsigned long long int
#define rep(i, n) for (i = 0; i < n; i++)
#define fin(ans) cout << (ans) << endl
#define INF INT_MAX
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vpii vector<pair<int, int>>
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define vvs vector<vector<string>>
#define P 1000000007
#define STI(s) atoi(s.c_str()) // string to int
#define mp(p, q) make_pair(p, q)
#define Sort(a) sort(a.begin(), a.end())
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
//|\_
// g++ -std=c++1z temp.cpp
//./a.out

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////
  string s;
  char x;
  cin >> x >> s;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == x)
      continue;
    else
      cout << s[i];
  }
  cout << endl;
  //////////////////////////////////////////////////////
  return 0;
}
