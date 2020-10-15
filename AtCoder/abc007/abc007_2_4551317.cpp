/*
問題文の引用元：https://atcoder.jp/contests/abc007/tasks/abc007_2
B - 辞書式順序Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 文字列 A
が与えられる。小文字アルファベット(a-z)のみを使って辞書順比較したとき文字列 A
より小さいものを1つ何でも良いので出力せよ。ただし、文字列は 1 文字以上 100
文字以下でなければならない。もし存在しない場合は "-1"
を出力せよ。ただし、ある文字列 S=S_1S_2...S_n と T=T_1T_2...T_m
について、辞書順比較した際に S＜T
であるとは、次のどちらか一方の状態が成り立っていることを言う。ある整数 i
(1≦i≦{\rm min}(n,m)) に関して、 1≦j≦i−1 を満たすどの整数 j に関しても S_j=T_j
が成立し、かつ S_i＜T_i が成立する任意の整数 i (1≦i≦{\rm min}(n,m)) に関して、
常に S_i=T_i が成立し、かつ |S|＜|T| である。ただし |X| は文字列 X
の長さを表すものとする。なにやら頭が痛くなる記述だが、言い換えると次の通りである。それぞれの文字列の同じ位置同士を先頭から比較していって、初めて不一致になったら、その文字同士の(アルファベットでの)比較結果が文字列の全体の比較結果である。
例えば、"abcd" と "ax" を比較すると、2 文字目で、'b' となるので、"abcd"
である。もし、比較している途中で片方の文字列が尽きてしまったら、文字列の長さが短い方が小さい。例えば
"ab" < "abc"である。入力入力は以下の形式で標準入力から与えられる。A1
行目には、文字列 A (1 ≦ |A| ≦ 11) が与えられる。|A|は文字列 |A|
の長さを表す。Aは小文字アルファベット(a-z)のみから成る。出力文字列 A
より小さい文字列を 1 つ 1
行に出力せよ。ただし、小文字アルファベット(a-z)のみを用いており、長さは1以上100以下でなければならない。解が複数ある場合はどれを出力しても良い。存在しない場合は、代わりに
"-1" を出力すること。出力の末尾に改行をいれること。
// ソースコードの引用元 : https://atcoder.jp/contests/abc007/submissions/4551317
// 提出ID : 4551317
// 問題ID : abc007_2
// コンテストID : abc007
// ユーザID : xryuseix
// コード長 : 845
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
#define ld long double
#define ll long long int
#define ull unsigned long long int
#define rep(i, n) for (i = 0; i < n; i++)
#define fin(ans) cout << (ans) << endl
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
  if (s == "a")
    cout << -1 << endl;
  else if (s.length() == 1)
    cout << 'a' << endl;
  else
    cout << s[0] << endl;
  return 0;
}
