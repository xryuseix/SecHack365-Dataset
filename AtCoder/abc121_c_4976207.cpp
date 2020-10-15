/*
引用元：https://atcoder.jp/contests/abc121/tasks/abc121_c
C - Energy Drink CollectorEditorial
// ソースコードの引用元 : https://atcoder.jp/contests/abc121/submissions/4976207
// 提出ID : 4976207
// 問題ID : abc121_c
// コンテストID : abc121
// ユーザID : xryuseix
// コード長 : 1503
// 実行時間 : 76



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
