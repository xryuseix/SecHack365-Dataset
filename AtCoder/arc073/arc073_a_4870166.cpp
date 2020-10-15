/*
問題文の引用元：https://atcoder.jp/contests/arc073/tasks/arc073_a
C - SentouEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 300 点
問題文 : とある銭湯には、スイッチを押すと T
秒間お湯が出るシャワーがあります。なお、お湯が出ているときにスイッチを押すと、そのタイミングから
T 秒間お湯が出つづけます。お湯の出る時間が T
秒間延長されるわけではないことに注意してください。このシャワーの前を、N
人の人がスイッチを押して通り過ぎていきます。i 人目の人は、1
人目の人がスイッチを押した t_i
秒後にスイッチを押します。お湯が出る時間の総和は何秒かを求めてください。
制約1 ≦ N ≦ 200,0001 ≦ T ≦ 10^90 = t_1 < t_2 < t_3 < , ..., < t_{N-1} < t_N ≦
10^9T, t_i はすべて整数である入力入力は以下の形式で標準入力から与えられる。N
Tt_1 t_2 ... t_N出力お湯が出る時間の総和を X 秒として、X を出力する。
// ソースコードの引用元 : https://atcoder.jp/contests/arc073/submissions/4870166
// 提出ID : 4870166
// 問題ID : arc073_a
// コンテストID : arc073
// ユーザID : xryuseix
// コード長 : 1107
// 実行時間 : 21



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
#define INF INT_MAX
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

  ll i, n, t, a, ans = 0, j;
  cin >> n >> t;
  vector<ll> v(n);
  rep(i, n) cin >> v[i];
  rep(i, n) {
    j = i + 1;
    while (j < n && v[j] - v[j - 1] <= t) {
      j++;
    }
    j--;
    //		cout<<v[j]<<endl;
    ans += v[j] + t - v[i];
    i += j - i;
  }
  fin(ans);

  //////////////////////////////////////////////////////
  return 0;
}
