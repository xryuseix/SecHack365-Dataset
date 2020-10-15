/*
問題文の引用元：https://atcoder.jp/contests/abc021/tasks/abc021_b
B - 嘘つきの高橋くんEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : あなたと高橋君は、AtCoder 王国に住んでいます。AtCoder 王国には、N
個の町と、町同士を結ぶ何本かの道路が存在し、道路は双方向に移動可能です。N
個の町はそれぞれ 町 1,町 2,…,町 N
と呼ばれています。高橋君はあなたの家に遊びに行くことにしました。そして、高橋君は町
a から出発して、ちょうど K 回 AtCoder 王国のどこかの町を経由して町 b
にあるあなたの家に到着しました。高橋君は町 a から町 b
まで最短経路で移動してきたと主張していますが、あなたには彼が嘘をついているよう思えます。しかし、あなたは具体的に町同士を結ぶ道路がどのような構成になっているか全く知らないため、高橋君が辿った経路が本当に最短経路なのかどうか判定できません。あなたは高橋君がどの順番で町を経由したかを聞き出すことに成功しました。ただし、この情報には出発/到着地点である町
a と町 b
が含まれません。あなたはこの情報を元に、高橋君が最短経路で移動していた可能性があるかどうかを出力するプログラムを書くことにしました。町
a から町 b への最短経路とは、町 a から町 b
への移動経路において道路を通る回数が最小となるような経路のことを言います。高橋君が辿った経路が最短経路となるような町と道路の構成が
1
つでも存在する場合、最短経路で移動した可能性があると言えます。一方、そのような構成がない場合、その可能性は無いと言えます。入力入力は以下の形式で標準入力から与えられる。Na
bKP_1 P_2 … P_K1 行目には、AtCoder 王国に存在する町の個数を表す整数 N(2≦N≦100)
が与えられる。2 行目には、高橋君が出発する町とあなたの家がある町の番号を表す 2
つの整数 a,b(1≦a,b≦N,a≠b) が空白区切りで与えられる。3
行目には、高橋君の移動において経由した町の個数を表す整数 K (1≦K≦100)
が与えられる。4
行目には、高橋君の移動において経由した町の番号が順番に空白区切りで与えられる。そのうち
i(1≦i≦K) 番目の整数は、町 a を出発した後 i 番目に経由した町の番号 P_i(1≦P_i≦N)
を表す。\{P_i\} の隣接する要素は全て異なる。つまり全ての
j(2≦j≦K)について、P_j≠P_{j-1} が成り立つ。さらに、P_1 ≠ a かつ P_K ≠ b
が成り立つ。出力1 行目に、高橋君が最短経路で移動していた可能性があるならば
YES、その可能性がないならば NO と出力せよ。末尾の改行を忘れないこと。
// ソースコードの引用元 : https://atcoder.jp/contests/abc021/submissions/4347840
// 提出ID : 4347840
// 問題ID : abc021_b
// コンテストID : abc021
// ユーザID : xryuseix
// コード長 : 776
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

  int n, a, b, i;
  set<int> s;
  cin >> n;
  cin >> a >> b;
  s.insert(a);
  s.insert(b);
  cin >> n;
  for (i = 0; i < n; i++) {
    cin >> a;
    s.insert(a);
  }
  if (s.size() == n + 2)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}
