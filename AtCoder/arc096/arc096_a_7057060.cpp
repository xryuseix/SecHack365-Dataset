/*
問題文の引用元：https://atcoder.jp/contests/arc096/tasks/arc096_a
C - Half and HalfEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 300 点
問題文 : ファーストフードチェーン「ピザアット」のメニューは「A ピザ」「B
ピザ」「AB ピザ」の 3 種類です。A ピザと B
ピザは全く異なるピザで、これらをそれぞれ半分に切って組み合わせたものが AB
ピザです。A ピザ、B ピザ、AB ピザ 1 枚あたりの値段はそれぞれ A 円、B 円、C
円です。中橋くんは、今夜のパーティーのために A ピザ X 枚と B ピザ Y
枚を用意する必要があります。これらのピザを入手する方法は、A ピザや B
ピザを直接買うか、AB ピザ 2 枚を買って A ピザ 1 枚と B ピザ 1
枚に組み替える以外にはありません。このためには最小で何円が必要でしょうか？なお、ピザの組み替えにより、必要な量を超えたピザが発生しても構いません。
制約1 ≤ A, B, C ≤ 50001 ≤ X, Y ≤
10^5入力中のすべての値は整数である。入力入力は以下の形式で標準入力から与えられる。A
B C X Y出力X 枚の A ピザと Y 枚の B
ピザを用意するために必要な最小の金額を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/arc096/submissions/7057060
// 提出ID : 7057060
// 問題ID : arc096_a
// コンテストID : arc096
// ユーザID : xryuseix
// コード長 : 1124
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

  ll a, b, ab = 0, A, B, C, t;
  cin >> A >> B >> C >> a >> b;
  if (A + B >= C * 2) {
    ab += min(a, b) * 2;
    t = min(a, b);
    a -= t;
    b -= t;
  }
  //	cout<<a<<" "<<b<<" "<<ab<<endl;
  ll ans = a * A + b * B + ab * C;
  //	cout<<ans<<endl;
  if (max(a, b) * 2 * C + ab * C < ans) {
    ans = max(a, b) * 2 * C + ab * C;
  }
  cout << ans << endl;

  //////////////////////////////////////////////////////
  return 0;
}
