/*
問題文の引用元：https://atcoder.jp/contests/agc019/tasks/agc019_a
A - Ice Tea StoreEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 300 点
問題文 :
あなたは行きつけの店、インフバリューにアイスティーを買いに来ています。この店では、様々なサイズのボトル入りアイスティーが様々な価格で売られています。具体的な価格は、0.25
リットルサイズが一つ Q 円、0.5 リットルサイズが一つ H 円、1 リットルサイズが一つ
S 円、2 リットルサイズが一つ D
円です。各サイズの在庫は無限にあります。あなたはちょうど N
リットルのアイスティーを買いたいです。これに必要な金額は何円でしょうか？
制約1 \leq Q, H, S, D \leq 10^81 \leq N \leq
10^9入力値はすべて整数である。入力入力は以下の形式で標準入力から与えられる。Q H
S DN出力ちょうど N リットルのアイスティーを買うのに必要な最小の金額を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/agc019/submissions/4541718
// 提出ID : 4541718
// 問題ID : agc019_a
// コンテストID : agc019
// ユーザID : xryuseix
// コード長 : 873
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
#include <stack>
#include <climits>
#define ld long double
#define ll long long int
#define ull unsigned long long int
#define rep(i, n) for (i = 0; i < (n); i++)
//#define end(ans) cout<<(ans)<<endl
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

  ll s, d, q, h, n;
  cin >> q >> h >> s >> d;
  cin >> n;
  s = min(s, min(q * 4, h * 2));
  if (d > s * 2) {
    cout << n *s << endl;
  } else {
    cout << n / 2 * d + n % 2 * s << endl;
    ;
  }

  return 0;
}
