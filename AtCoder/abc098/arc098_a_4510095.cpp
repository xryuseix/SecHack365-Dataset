/*
問題文の引用元：https://atcoder.jp/contests/abc098/tasks/arc098_a
C - AttentionEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : N
人の人が東西方向に一列に並んでいます。それぞれの人は、東または西を向いています。誰がどの方向を向いているかは長さ
N の文字列 S によって与えられます。西から i 番目に並んでいる人は、S_i = E
なら東を、S_i = W なら西を向いています。あなたは、N 人のうち誰か 1
人をリーダーとして任命します。そして、リーダー以外の全員に、リーダーの方向を向くように命令します。このとき、リーダーはどちらの方向を向いていても構いません。並んでいる人は、向く方向を変えるのを嫌っています。そのためあなたは、向く方向を変える人数が最小になるようにリーダーを選びたいです。向く方向を変える人数の最小値を求めてください。
制約2 \leq N \leq 3 \times 10^5|S| = NS_i は E または W
である入力入力は以下の形式で標準入力から与えられる。NS出力向く方向を変える人数の最小値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc098/submissions/4510095
// 提出ID : 4510095
// 問題ID : arc098_a
// コンテストID : abc098
// ユーザID : xryuseix
// コード長 : 1120
// 実行時間 : 20



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

int main(void) {

  int i, n;
  cin >> n;
  char c;
  int s[n];
  rep(i, n) {
    cin >> c;
    if (c == 'W')
      s[i] = -1;
    else
      s[i] = 1;
  }
  int t = 0, maxt = -INT_MAX, maxi = 0;
  rep(i, n) {
    t += s[i];
    if (t > maxt) {
      maxt = t;
      maxi = i;
    } else if (t == maxt) {
      if (abs(n / 2 - maxi) > abs(n / 2 - i))
        maxi = i;
    }
  }
  int ans = 0;
  for (i = 0; i < maxi; i++)
    if (s[i] == -1)
      ans++;
  for (i = maxi + 1; i < n; i++)
    if (s[i] == 1)
      ans++;

  //    cout<<maxi<<" "<<maxt<<endl;
  end(ans);

  return 0;
}
