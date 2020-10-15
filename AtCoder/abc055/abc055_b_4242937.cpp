/*
問題文の引用元：https://atcoder.jp/contests/abc055/tasks/abc055_b
B - Training CampEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : すぬけくんはトレーニングが好きなので N
回だけトレーニングすることにしました。すぬけくんのトレーニング開始前のパワーは 1
です。すぬけくんが i 回目のトレーニングを終えるとパワーが i
倍されます。すぬけくんが N
回トレーニングをしたあとのパワーを求めなさい。ただし、答えの値は非常に大きな値になることがあるので
10^{9}+7 で割ったあまりを出力してください。
制約1 ≦ N ≦ 10^{5}入力入力は以下の形式で標準入力から与えられる。N出力答えを
10^{9}+7 で割ったあまりを出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc055/submissions/4242937
// 提出ID : 4242937
// 問題ID : abc055_b
// コンテストID : abc055
// ユーザID : xryuseix
// コード長 : 656
// 実行時間 : 2



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

  ll i, ans = 1;
  int n;
  cin >> n;
  for (i = 2; i <= n; i++) {
    ans *= i;
    ans %= 1000000007;
    //		cout<<ans<<endl;
  }
  cout << ans << endl;

  return 0;
}
