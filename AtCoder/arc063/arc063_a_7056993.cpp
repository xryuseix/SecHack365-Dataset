/*
問題文の引用元：https://atcoder.jp/contests/arc063/tasks/arc063_a
C - 1D ReversiEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 300 点
問題文 :
きつねの次郎と三郎が一次元リバーシで遊んでいます。一次元リバーシでは、盤面には白か黒の石が一列に並んだ状態となっており、列の右端か左端に新たに石を打っていきます。通常のリバーシと同じように、たとえば白の石を打つことで黒の石を挟むと、挟まれた黒の石は白い石に変わります。ゲームの途中で三郎に急用ができて帰ってしまうことになりました。このとき、盤面の状態は文字列
S で表されます。石は |S| (文字列の長さ) 個並んでおり、左から i (1 ≦ i ≦ |S|)
個目の石の色は、S の i 文字目が B のとき黒、W
のとき白です。次郎は現在の盤面に対して、できるだけ少ない個数の石を新たに打つことで全ての石を同じ色にしようと考えました。最小で何個の石を打てばよいかを求めてください。
制約1 ≦ |S| ≦ 10^5S に含まれる文字は B または W
のいずれかである入力入力は以下の形式で標準入力から与えられる。S出力全ての石を同じ色にするために打つ必要のある石の個数の最小値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/arc063/submissions/7056993
// 提出ID : 7056993
// 問題ID : arc063_a
// コンテストID : arc063
// ユーザID : xryuseix
// コード長 : 984
// 実行時間 : 2



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

  string s;
  cin >> s;
  int i, ans = 0;
  for (i = 0; i < s.length() - 1; i++)
    if (s[i] != s[i + 1])
      ans++;
  cout << ans << endl;

  //////////////////////////////////////////////////////
  return 0;
}
