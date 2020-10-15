/*
問題文の引用元：https://atcoder.jp/contests/otemae2019/tasks/otemae2019_a
A - 寝坊だ！ピ太郎！ (You overslept, Pitaro)Editorial
Time Limit : 1 sec / Memory Limit : 256 MB
配点: 100 点問題高校生のピ太郎は毎日徒歩で学校に通っている．いつもは 6
時に起きるが，今日は深夜遅くまで起きていたせいで二度寝をしてしまった．急いで身支度を済ませたが，ピ太郎は普段通りに歩いていると授業に遅刻してしまうのではないかと心配している．学校の授業は今からちょうど
A+0.5 分後に始まる．また，家から学校までは普段通りに歩くと B
分かかる．ピ太郎にこのままだと遅刻してしまうか教えてあげるプログラムを作成せよ．
制約A,B は整数である．0 \leq A \leq 180．0 < B \leq 180．小課題(100 点) 追加の
制約はない．入力入力は以下の形式で標準入力から与えられる．A
B出力標準出力に，ピ太郎が普段通りに歩くと遅刻する場合は 0
と，普段通りに歩いても授業が始まる前に学校に到着する場合は 1 と出力せよ．
// ソースコードの引用元 :
https://atcoder.jp/contests/otemae2019/submissions/7046356
// 提出ID : 7046356
// 問題ID : otemae2019_a
// コンテストID : otemae2019
// ユーザID : xryuseix
// コード長 : 1613
// 実行時間 : 1



*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cctype>
#include <climits>
#include <string>
#include <bitset>
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<ll> vll;
typedef vector<pair<int, int>> vpii;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef vector<vector<string>> vvs;
typedef vector<vector<ll>> vvll;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define fin(ans) cout << (ans) << endl
#define STI(s) atoi(s.c_str())
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
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
const int P = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  double a, b;
  cin >> a >> b;
  if (a + 0.5 > b) {
    fin(1);
  } else
    fin(0);

  //////////////////////////////////////////////////////
  return 0;
}
