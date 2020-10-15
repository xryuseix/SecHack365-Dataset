/*
問題文の引用元：https://atcoder.jp/contests/wupc2019/tasks/wupc2019_a
A - WAsedACEditorial
Time Limit : 2 sec / Memory Limit : 1024
MBMathJax.Hub.Config({messageStyle:"none",tex2jax:{skipTags:["script","noscript","style","textarea","code"],inlineMath:[['\\(','\\)']]}});
配点 : \(100\) 点
問題文 : WUPC 2019の開催を記念して、カトーくんは文字列 \(s\)
をプレゼントとしてもらいました。しかしながら、カトーくんは WA
という文字列が嫌いなので、 WA
という文字列がなくなるまで以下の行動をすることにしました。    文字列 \(s\)
を先頭から見ていき、連続する2文字が WA である場合、これを AC
という文字列に置換する。
1回の置換を行った場合、文字列の先頭から再び上記の行動を行い、置換が行われなかった場合、終了する。カトーくんが行動を終了したときの文字列を答えよ。
制約\(1 \leq |s| \leq
10^5\)入力される文字列は英大文字のみで構成される。入力入力は以下の形式で標準入力から与えられる。\(s\)出力カトーくんが行動を終了したときの文字列を1行に出力してください。
// ソースコードの引用元 :
https://atcoder.jp/contests/wupc2019/submissions/4534840
// 提出ID : 4534840
// 問題ID : wupc2019_a
// コンテストID : wupc2019
// ユーザID : xryuseix
// コード長 : 921
// 実行時間 : 2



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
#include <stack>
#include <climits>
#define ld long double
#define ll long long int
#define ull unsigned long long int
#define rep(i, n) for (i = 0; i < (n); i++)
//#define end(ans) cout<<(ans)<<endl
#define INF INT_MAX;
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

  string s;
  cin >> s;
  int i;
  for (i = s.length() - 2; i >= 0; i--) {
    //    	cout<<s[i]<<" "<<s[i+1]<<endl;
    if (s[i] == 'W' && s[i + 1] == 'A') {
      s[i] = 'A';
      s[i + 1] = 'C';
    }
  }
  cout << s << endl;

  return 0;
}