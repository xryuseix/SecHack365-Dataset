/*
問題文の引用元：https://atcoder.jp/contests/pakencamp-2018-day3/tasks/pakencamp_2018_day3_a
A - ネクスト・クリスマスEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点: 100 点
問題文 : 今日は 2018 年 12 月 25 日。 クリスマス当日です。これにちなんで、Y 年 M
月 D
日が何年後のクリスマスかどうかを計算するプログラムを書きなさい。ただし、そもそもクリスマスではない場合は
NOT CHRISTMAS DAY と出力しなさい。
制約Y は 2018 以上 2299 以下の整数M は 1 以上 12 以下の整数D は 1 以上 31
以下の整数Y 年 M 月 D
日は、グレゴリオ暦において存在する日付である。入力入力は以下の形式で標準入力から与えられる.
Y M D出力Y 年 M 月 D 日が何年後のクリスマスであるか、1
行に出力して下さい。ただし、そもそもその日がクリスマスではない場合、NOT
CHRISTMAS DAY と出力しなさい。
// ソースコードの引用元 :
https://atcoder.jp/contests/pakencamp-2018-day3/submissions/5544742
// 提出ID : 5544742
// 問題ID : pakencamp_2018_day3_a
// コンテストID : pakencamp-2018-day3
// ユーザID : xryuseix
// コード長 : 1282
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
#include <bitset>
#include <bits/stdc++.h>
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

  int a, b, c;
  cin >> a >> b >> c;
  if (b == 12 && c == 25) {
    cout << a - 2018 << endl;
  } else {
    fin("NOT CHRISTMAS DAY");
  }

  //////////////////////////////////////////////////////
  return 0;
}