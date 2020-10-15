/*
問題文の引用元：https://atcoder.jp/contests/arc034/tasks/arc034_1
A - 首席Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : N
人の人が高橋大学の入学試験を受けた。試験には「国語」「数学」「理科」「英語」「塗り絵」の
5 科目がある。各受験生について、その人の「国語」「数学」「理科」「英語」の 4
科目の得点の合計に、「塗り絵」の得点の 110 / 900
倍を加えたものがその人の最終得点となる。各受験生の各試験の得点が与えられる。N
人のうち最も最終得点が高い受験生の最終得点を求めよ。入力入力は以下の形式で標準入力から与えられる。Na_1
b_1 c_1 d_1 e_1a_2 b_2 c_2 d_2 e_2:a_N b_N c_N d_N e_N1
行目には、高橋大学の受験生の数を表す 1 個の整数 N (2 ≦ N ≦ 3049) が与えられる。2
行目から N + 1 行目までの N 行には、各受験生の各試験の得点が与えられる。i + 1
行目には、i
番目の受験生の「国語」「数学」「理科」「英語」「塗り絵」の得点をそれぞれ表す 5
個の整数 a_i, b_i, c_i, d_i, e_i (各 1 ≦ i ≦ N に対し 0 ≦ a_i ≦ 80, 0 ≦ b_i,
c_i, d_i ≦ 120, 731 ≦ e_i ≦ 900) がスペース区切りで与えられる。出力N
人のうち最も最終得点が高い受験生の最終得点を 1
行目に出力せよ。審判の出力との絶対誤差が 0.0001
以下であるとき正答とみなされる。末尾の改行を忘れないこと。
// ソースコードの引用元 : https://atcoder.jp/contests/arc034/submissions/5909884
// 提出ID : 5909884
// 問題ID : arc034_1
// コンテストID : arc034
// ユーザID : xryuseix
// コード長 : 1618
// 実行時間 : 2



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
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vpii vector<pair<int, int>>
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define vvs vector<vector<string>>
#define P 1000000007
#define STI(s) atoi(s.c_str()) // string to int
#define mp(p, q) make_pair(p, q)
#define Sort(a) sort(a.begin(), a.end())
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
//|\_
// g++ -std=c++1z temp.cpp
//./a.out

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////
  int i, n;
  cin >> n;
  vvi g(n, vector<int>(5, 0));
  rep(i, n) cin >> g[i][0] >> g[i][1] >> g[i][2] >> g[i][3] >> g[i][4];
  double ans[n];
  rep(i, n) {
    int j;
    ans[i] = 0;
    rep(j, 4) ans[i] += g[i][j];
    // cout<<ans[i]<<endl;
    ans[i] += (double)g[i][4] * 110.0 / 900;
  }
  sort(ans, ans + n);
  printf("%.7f\n", ans[n - 1]);
  //////////////////////////////////////////////////////
  return 0;
}
