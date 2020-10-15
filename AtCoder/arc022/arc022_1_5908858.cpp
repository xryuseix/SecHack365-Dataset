/*
問題文の引用元：https://atcoder.jp/contests/arc022/tasks/arc022_1
A - スーパーICT高校生Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 :
ある高校にはスーパーICT高校生が通っています。なぜ彼がそう呼ばれているのかはその高校の生徒の誰も知りません。手がかりはICTという文字列だけです。けれども、ICTが何の略称なのか分かりません。生徒たちは一晩考えぬいてICTの本来の意味であると思われる文字列を思いつきました。しかし眠たい頭で考えたので、その文字列からいくつか文字を省いてICTになるか自信がありません。生徒たちが考えた文字列
S
が与えられるので、それからいくつか文字を省いてICTという文字列が作れるかどうか判定してください。入力入力は以下の形式で標準入力から与えられる。S1
行目には、生徒たちが考えた文字列 S(1≦|S|≦100)
が与えられる。ただし|S|はSの文字数のことである。S
は大文字、小文字アルファベットだけからなる。出力S
からいくつか文字を省いて文字列ICTが作れるならYES、作れないならNOと1行に出力せよ。出力の末尾に改行を入れること。なお省いてできる文字列の
大文字小文字は区別しない 。
// ソースコードの引用元 : https://atcoder.jp/contests/arc022/submissions/5908858
// 提出ID : 5908858
// 問題ID : arc022_1
// コンテストID : arc022
// ユーザID : xryuseix
// コード長 : 1698
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
  string s, t = "";
  int i;
  cin >> s;
  rep(i, s.length()) {
    s[i] = tolower(s[i]);
    if (s[i] == 'i' || s[i] == 'c' || s[i] == 't')
      t += s[i];
  }
  char ict[4] = {'i', 'c', 't', '#'};
  int phase = 0;
  bool ch = false;
  rep(i, t.size()) {
    if (t[i] == ict[phase]) {
      phase++;
      if (phase == 3)
        ch = true;
    }
    if (ch)
      break;
  }
  if (ch)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  //////////////////////////////////////////////////////
  return 0;
}
