/*
問題文の引用元：https://atcoder.jp/contests/abc082/tasks/abc082_b
B - Two AnagramsEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : 英小文字のみからなる文字列 s, t が与えられます。あなたは、s
の文字を好きな順に並べ替え、文字列 s' を作ります。また、t
の文字を好きな順に並べ替え、文字列 t' を作ります。このとき、辞書順で s' < t'
となるようにできるか判定してください。注釈長さ N の文字列 a = a_1 a_2 ... a_N
および長さ M の文字列 b = b_1 b_2 ... b_M について、辞書順で a < b
であるとは、次の 2 つの条件のいずれかが成り立つことをいう;N < M かつ a_1 = b_1,
a_2 = b_2, ..., a_N = b_N である。ある i (1 \leq i \leq N, M) が存在して、a_1 =
b_1, a_2 = b_2, ..., a_{i - 1} = b_{i - 1} かつ a_i < b_i である。
ただし、文字どうしはアルファベット順で比較される。例えば、xy < xya
であり、atcoder < atlas である。
制約s, t の長さは 1 以上 100 以下である。s, t
は英小文字のみからなる。入力入力は以下の形式で標準入力から与えられる。st出力辞書順で
s' < t' となるようにできるならば Yes を、できないならば No を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc082/submissions/4733891
// 提出ID : 4733891
// 問題ID : abc082_b
// コンテストID : abc082
// ユーザID : xryuseix
// コード長 : 1183
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
  //////////////////////////////////////////////////////

  string s, t;
  int i;
  cin >> s >> t;
  int an = s.length(), bn = t.length();
  int a[an], b[bn];
  for (i = 0; i < an; i++)
    a[i] = s[i];
  for (i = 0; i < bn; i++)
    b[i] = t[i];
  sort(a, a + an);
  sort(b, b + bn);
  s = t = "";
  for (i = 0; i < an; i++)
    s += a[i];
  for (i = bn - 1; i >= 0; i--)
    t += b[i];
  if (s < t)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  //////////////////////////////////////////////////////
  return 0;
}
