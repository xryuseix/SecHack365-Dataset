/*
問題文の引用元：https://atcoder.jp/contests/abc063/tasks/arc075_a
C - BuggedEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 300 点
問題文 : あなたはコンピュータで試験を受けています。試験は N 問の問題からなり、i
問目の問題の
配点は s_i
です。それぞれの問題に対するあなたの解答は「正解」または「不正解」のいずれかとして判定され、正解した問題の
配点の合計があなたの成績となります。あなたが解答を終えると、解答がその場で採点されて成績が表示される…はずでした。ところが、試験システムに欠陥があり、成績が
10 の倍数の場合は、画面上で成績が 0
と表示されてしまいます。それ以外の場合は、画面に正しい成績が表示されます。この状況で、成績として画面に表示されうる最大の値はいくつでしょうか？
制約入力値はすべて整数である。1 ≤ N ≤ 1001 ≤ s_i ≤
100入力入力は以下の形式で標準入力から与えられる。Ns_1s_2:s_N出力成績として画面に表示されうる最大の値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc063/submissions/4744299
// 提出ID : 4744299
// 問題ID : arc075_a
// コンテストID : abc063
// ユーザID : xryuseix
// コード長 : 1150
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

  int i, n, sum = 0;
  cin >> n;
  int a[n];
  rep(i, n) {
    cin >> a[i];
    sum += a[i];
  }
  if (sum % 10 != 0) {
    cout << sum << endl;
    return 0;
  }
  sort(a, a + n);
  for (i = 0; i < n; i++) {
    if (a[i] % 10 != 0) {
      sum -= a[i];
      break;
    }
  }
  if (sum % 10 != 0)
    cout << sum << endl;
  else
    cout << 0 << endl;

  //////////////////////////////////////////////////////
  return 0;
}
