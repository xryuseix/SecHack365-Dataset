/*
問題文の引用元：https://atcoder.jp/contests/abc130/tasks/abc130_d
D - Enough ArrayEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 400 点
問題文 : 長さ N の正整数列 A=a_1,a_2,…,a_{N} と整数 K が与えられます。A
の連続する部分列であって、以下の条件を満たすようなものは何個あるでしょうか。(条件)
連続部分列に含まれる全ての要素の値の和は、K
以上である。ただし、ある二つの連続部分列が列として同じでも、取り出された位置が異なるならそれらは別々に数えるものとします。出力が
32bit 整数型に収まらない場合があることに注意してください。
制約1 \leqq a_i \leqq 10^51 \leqq N \leqq 10^51 \leqq K \leqq
10^{10}入力入力は以下の形式で標準入力から与えられます。N Ka_1 a_2 ...
a_N出力条件を満たすような連続部分列の個数を出力してください。
// ソースコードの引用元 : https://atcoder.jp/contests/abc130/submissions/5969243
// 提出ID : 5969243
// 問題ID : abc130_d
// コンテストID : abc130
// ユーザID : xryuseix
// コード長 : 1731
// 実行時間 : 10



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
  ll n, k, i;
  cin >> n >> k;
  vi a(n);
  rep(i, n) cin >> a[i];
  ll ans = 0, sum = 0;
  ll j = 0;
  for (i = 0; i + j < n; i++) {
    if (i == 0)
      sum += a[i + j];
    while (sum < k && i + j < n) {
      // sum+=a[i+j];
      j++;
      sum += a[i + j];
    }
    if (sum >= k)
      ans += n - i - j;

    // cout<<i<<" ";
    // cout<<j<<" ";
    // cout<<sum<<" ";
    // cout<<ans<<endl;

    sum -= a[i];
    j--;
  }
  fin(ans);
  //////////////////////////////////////////////////////
  return 0;
}
