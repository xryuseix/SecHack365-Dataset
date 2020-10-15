/*
問題文の引用元：https://atcoder.jp/contests/abc029/tasks/abc029_c
C - Brute-force AttackEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 :
あなたはスーパーハッカーです。高橋君を攻撃対象に定めたあなたは、高橋君のパソコンのパスワードに関して次の事実を突き止めました。長さは
N 文字である。a, b, c
以外の文字は含まれない。高橋君のパソコンのパスワードの候補として考えられる文字列をすべて列挙してしまいましょう。入力入力は以下の形式で標準入力から与えられる。N1
行目にパスワードの長さ N (1 ≦ N ≦ 8) が与えられる。出力標準出力に、
問題文 :
中の二つの条件をともに満たす文字列すべてを一行に一個ずつ辞書順に出力せよ。「辞書順」に関しては出力例2の注釈を見よ。最後の文字列の後ろにも改行を入れること。大文字と小文字は区別される。
// ソースコードの引用元 : https://atcoder.jp/contests/abc029/submissions/4551519
// 提出ID : 4551519
// 問題ID : abc029_c
// コンテストID : abc029
// ユーザID : xryuseix
// コード長 : 1040
// 実行時間 : 14



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

void add(int n, string s) {
  if (s.length() > n)
    return;
  if (s.length() == n)
    cout << s << endl;
  add(n, s + 'a');
  add(n, s + 'b');
  add(n, s + 'c');
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  int n;
  cin >> n;
  string s = "";
  add(n, s);

  //////////////////////////////////////////////////////
  return 0;
}