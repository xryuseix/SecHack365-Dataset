/*
問題文の引用元：https://atcoder.jp/contests/abc014/tasks/abc014_2
B - 価格の合計Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 :
　あなたは買い物をしていて，商品リストからいくつかの商品を選んだ．そして今，その商品の価格を合計しようとしている．　ところで，とある集合の任意の部分集合を
2
進数を用いて表す方法が存在し，forループで全ての部分集合(組み合わせ)を列挙する際などに用いることができる．n
個の商品があり， 商品0,商品1,..,商品n-1
があるとする．添字が0から始まることに注意せよ．部分集合を表す 10 進整数を X
とし，その 2 進 n 桁表現をb_{n-1}b_{n-2}...b_1b_0とする．b_0 が最下位ビットで
b_{n-1} が最上位ビットである．先頭の0
を許す表現であることに注意せよ．そして，この整数 X の 2
進表現を用いて，ある部分集合を以下のように定義する．b_0=1 ならば集合は商品0
を含み，b_0=0 ならば集合は商品 0 を含まない．b_1=1 ならば集合は商品1
を含み，b_1=0 ならば集合は商品 1 を含まない．...b_{n-1}=1 ならば集合は商品 n-1
を含み，b_{n-1}=0 ならば集合は商品 n-1 を含まない．例えば，n=4,X=5 のとき，
b=0101 であり，部分集合は \{商品0,商品2\} である．簡単にいえば，Xの 2
進表現において，k(0 ≦ k ≦ n-1) 番目のビットが立っていれば k
番目のアイテムを含むということである．あるビットが立っているかどうかは，多くのプログラミング言語で容易に判定できるので，各自調べられたい．　あなたの仕事は，商品の数，それぞれの商品の価格，そして部分集合を表す
10 進整数 X
が与えられるので，部分集合に含まれる商品の価格を合計することである．　※今回の問題には直接関係は無いが，部分集合を上記のように表現することで，大きさ
n の集合の全ての部分集合(空集合を含む)を0 ～ 2^n-1
の連続した整数で表現できるので，全列挙を行う際には応用するとよい．入力入力は以下の形式で標準入力から与えられる。n
Xa_0 a_1 a_2 ... a_{n-1}1 行目には，商品の数 n (1 ≦ n ≦ 20)
と，商品の部分集合を表す 10 進整数 X (0 ≦ X ≦ 2^{n}-1)
が空白区切りで与えられる．2 行目には，商品 0 ～ n-1 の商品の価格
a_0,a_1,...,a_{n-1}(0 ≦ a_0,a_1,...,a_{n-1} ≦ 1,000)
が順番に空白区切りで与えられる．出力部分集合に含まれる商品の価格を合計したものを
1 行に出力せよ．出力の末尾に改行をいれること．
// ソースコードの引用元 : https://atcoder.jp/contests/abc014/submissions/4350044
// 提出ID : 4350044
// 問題ID : abc014_2
// コンテストID : abc014
// ユーザID : xryuseix
// コード長 : 744
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

  int n, x, i, ans = 0, tmp;
  cin >> n >> x;
  int a[n];
  for (i = 0; i < n; i++)
    cin >> a[i];
  tmp = 0;
  while (x > 0) {
    if (x % 2 == 1)
      ans += a[tmp];
    x /= 2;
    tmp++;
  }
  cout << ans << endl;

  return 0;
}
