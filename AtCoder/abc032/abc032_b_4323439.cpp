/*
問題文の引用元：https://atcoder.jp/contests/abc032/tasks/abc032_b
B - 高橋君とパスワードEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 :
高橋君の会社には、秘密の金庫があります。この金庫にはパスワードをかけているのですが、高橋君はそのパスワードを忘れてしまいました。しかし、幸運なことに、手元にはパスワードのヒントが以下のように書かれていました。パスワードは、この紙に書かれている文字列
s の長さ k
の部分文字列(※)のどれかである。高橋君は、ありうるパスワードを全部試せば金庫を開けられる！と喜びました。しかし、文字列
s はとても長い可能性があるし、しかも同じ部分文字列が複数個文字列 s
中に存在する可能性もあります。明らかに、重複したパスワードを繰り返し試す必要はありません。そこで、手動で全てのパスワードを試す前に、試す必要がある異なるパスワードの数がいくつあるかを数えることにしました。あなたの仕事は、文字列
s
の内容が与えられるので、試す必要がある異なるパスワードの数がいくつあるかを高橋君に教えてあげることです。(※)文字列
s の「部分文字列」とは、文字列 s
に含まれるある区間を取り出した文字列のことです。例えば、abc の部分文字列として
a,b,c,ab,bc,abc などが挙げられます。ac や ba
などは部分文字列ではないことに注意してください。入力入力は以下の形式で標準入力から与えられる。sk1
行目には、ヒントの紙に書かれている文字列 s (1≦|s|≦300) が与えられる。s
は英小文字(a-z)のみから成る。|s| は文字列 s の長さを表す。2
行目には、パスワードとしてありうる整数 k (1≦k≦300) が与えられる。 k は |s|
よりも大きいことがある。出力出力は以下の形式で標準出力に行うこと。1
行目に、パスワードとして考えられる文字列の数を出力せよ。末尾の改行を忘れないこと。
// ソースコードの引用元 : https://atcoder.jp/contests/abc032/submissions/4323439
// 提出ID : 4323439
// 問題ID : abc032_b
// コンテストID : abc032
// ユーザID : xryuseix
// コード長 : 865
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

  int i, k;
  string str;
  set<string> s;
  cin >> str >> k;
  if (str.length() < k) {
    cout << 0 << endl;
    return 0;
  } else if (str.length() == k) {
    cout << 1 << endl;
    return 0;
  }
  for (i = 0; i < str.length() - k + 1; i++) {
    s.insert(str.substr(i, k));
  }
  cout << s.size() << endl;

  return 0;
}
