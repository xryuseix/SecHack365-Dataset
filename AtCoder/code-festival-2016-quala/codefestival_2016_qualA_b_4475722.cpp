/*
問題文の引用元：https://atcoder.jp/contests/code-festival-2016-quala/tasks/codefestival_2016_qualA_b
B - Friendly RabbitsEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : N 匹のうさぎがいます。うさぎには 1 から N まで番号が振られています。各
1≤i≤N について、うさぎ i はうさぎ a_i
が好きです。ただし、自分自身が好きなうさぎはいません。すなわち、a_i≠i
です。うさぎ i とうさぎ j のペア (i，j) (i＜j) が次の条件を満たすとき、ペア
(i，j) は仲良しであるといいます。うさぎ i はうさぎ j が好きであり、うさぎ j
はうさぎ i が好きである。仲良しなペアの個数を求めてください。
制約2≤N≤10^51≤a_i≤Na_i≠i入力入力は以下の形式で標準入力から与えられる。Na_1 a_2
... a_N出力仲良しなペアの個数を出力してください。
// ソースコードの引用元 :
https://atcoder.jp/contests/code-festival-2016-quala/submissions/4475722
// 提出ID : 4475722
// 問題ID : codefestival_2016_qualA_b
// コンテストID : code-festival-2016-quala
// ユーザID : xryuseix
// コード長 : 787
// 実行時間 : 9



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

  int k, i, ans = 0, n;
  cin >> n;
  int a[n];
  for (i = 0; i < n; i++)
    cin >> a[i];
  for (i = 0; i < n; i++) {
    //		cout<<a[a[i]-1]<<" "<<a[i]<<" "<<i+1<<endl;
    if (a[a[i] - 1] == i + 1)
      ans++;
  }
  ans /= 2;
  cout << ans << endl;

  return 0;
}
