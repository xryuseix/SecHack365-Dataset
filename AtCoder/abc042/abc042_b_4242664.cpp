/*
問題文の引用元：https://atcoder.jp/contests/abc042/tasks/abc042_b
B - Iroha Loves Strings (ABC Edition)Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : いろはちゃんは 長さ L の文字列を N 個持っており、それぞれ S_1, S_2,
..., S_N
です。それらの文字列を好きな順番で全て結合してできる文字列のうち、もっとも辞書順で小さいものを求めてください。なお、ある文字列
s=s_1s_2s_3...s_n と t=t_1t_2t_3...t_m
について、以下のどちらかを満たすとき、辞書順比較で s<t
であるといいます。ある整数 i(1≦i≦min(n,m)) に関して、 1≦j<i を満たす任意の整数 j
において s_j = t_j が成立し、かつ s_i<t_i が成立する。任意の整数 i(1≦i≦min(n,m))
に関して s_i = t_i が成立し、かつ  n<m が成立する。
制約1 ≦ N, L ≦ 100全ての i (1≦i≦N) に対し、S_i の長さは L に等しい。各 i
について, S_i
は全て半角英小文字のみから成る文字列である。入力入力は以下の形式で標準入力から与えられる。N
LS_1S_2:S_N出力与えられる文字列を好きな順番で全て結合してできる文字列のうち、もっとも辞書順で小さいものを出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc042/submissions/4242664
// 提出ID : 4242664
// 問題ID : abc042_b
// コンテストID : abc042
// ユーザID : xryuseix
// コード長 : 656
// 実行時間 : 1



*/
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
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

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, l, i;
  cin >> n >> l;
  string s[n];
  for (i = 0; i < n; i++)
    cin >> s[i];
  sort(s, s + n);
  for (i = 0; i < n; i++)
    cout << s[i];
  cout << endl;

  return 0;
}
