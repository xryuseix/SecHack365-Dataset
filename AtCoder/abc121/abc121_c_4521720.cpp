/*
問題文の引用元：https://atcoder.jp/contests/abc121/tasks/abc121_c
C - Energy Drink CollectorEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : 栄養ドリンクにレーティング上昇効果があると聞いた高橋くんは、M
本の栄養ドリンクを買い集めることにしました。栄養ドリンクが売られている店は N
軒あり、i 軒目の店では 1 本 A_i 円の栄養ドリンクを B_i
本まで買うことができます。最小で何円あれば M
本の栄養ドリンクを買い集めることができるでしょうか。なお、与えられる入力では、十分なお金があれば
M 本の栄養ドリンクを買い集められることが保証されます。
制約入力は全て整数である。1 \leq N, M \leq 10^51 \leq A_i \leq 10^91 \leq B_i
\leq 10^5B_1 + ... + B_N \geq M入力入力は以下の形式で標準入力から与えられる。N
MA_1 B_1A_2 B_2\vdotsA_N B_N出力M
本の栄養ドリンクを買い集めるのに必要な最小の金額を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc121/submissions/4521720
// 提出ID : 4521720
// 問題ID : abc121_c
// コンテストID : abc121
// ユーザID : xryuseix
// コード長 : 1503
// 実行時間 : 75



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
#include <climits>
#define ld long double
#define ll long long int
#define ull unsigned long long int
#define rep(i, n) for (i = 0; i < (n); i++)
#define end(ans) cout << (ans) << endl
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

void quicksort(ll a[], ll b[], ll first, ll last) {
  ll i, j, x;

  x = a[(first + last) / 2];
  i = first;
  j = last;
  while (1) {
    while (a[i] < x)
      i++;
    while (x < a[j])
      j--;
    if (i >= j)
      break;
    swap(a[i], a[j]);
    swap(b[i], b[j]);
    i++;
    j--;
  }
  if (first < i - 1)
    quicksort(a, b, first, i - 1);
  if (j + 1 < last)
    quicksort(a, b, j + 1, last);
}
int main(void) {

  ll n, m, i;
  cin >> n >> m;
  ll a[n], b[n];
  for (i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
  }
  //	for(i=0;i<n;i++){
  //    	cout<<a[i]<<b[i]<<endl;
  //	}
  quicksort(a, b, 0, n - 1);
  ll ans = 0;
  //    for(i=0;i<n;i++){
  //    	cout<<a[i]<<b[i]<<endl;
  //	}
  for (i = 0; i < n; i++) {
    if (b[i] <= m) {
      m -= b[i];
      ans += a[i] * b[i];
    } else {
      ans += m * a[i];
      m = 0;
    }
    if (m == 0)
      break;
  }
  cout << ans << endl;

  return 0;
}
