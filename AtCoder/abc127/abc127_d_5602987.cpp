/*
問題文の引用元：https://atcoder.jp/contests/abc127/tasks/abc127_d
D - Integer CardsEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 400 点
問題文 : N 枚のカードがあり、i 番目のカードには整数 A_i
が書かれています。あなたは、j = 1, 2, ..., M について順に以下の操作を 1
回ずつ行います。操作: カードを B_j 枚まで選ぶ(0
枚でもよい)。選んだカードに書かれている整数をそれぞれ C_j に書き換える。M
回の操作終了後に N 枚のカードに書かれた整数の合計の最大値を求めてください。
制約入力は全て整数である。1 \leq N \leq 10^51 \leq M \leq 10^51 \leq A_i, C_i
\leq 10^91 \leq B_i \leq N入力入力は以下の形式で標準入力から与えられる。N MA_1
A_2 ... A_NB_1 C_1B_2 C_2\vdotsB_M C_M出力M 回の操作終了後に N
枚のカードに書かれた整数の合計の最大値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc127/submissions/5602987
// 提出ID : 5602987
// 問題ID : abc127_d
// コンテストID : abc127
// ユーザID : xryuseix
// コード長 : 1821
// 実行時間 : 43



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

  vector<pair<int, int>> v;
  vector<int> w;
  int n, m, i, a, b, c;
  cin >> n >> m;
  rep(i, n) {
    cin >> a;
    w.push_back(a);
  }
  rep(i, m) {
    cin >> b >> c;
    v.push_back(make_pair(c, b));
  }
  sort(v.rbegin(), v.rend());
  sort(w.rbegin(), w.rend());
  int p = 0, q = 0;
  ll ans = 0;
  for (i = 0; i < n; i++) {
    if (v.size() <= p || w.size() <= q) {
      if (v.size() <= p) {
        ans += w[q];
        q++;
      } else {
        ans += v[p].first;
        v[p].second--;
        if (v[p].second <= 0)
          p++;
      }
    } else {
      if (v[p].second > 0 && v[p].first > w[q]) {
        ans += v[p].first;
        v[p].second--;
        if (v[p].second <= 0)
          p++;
      } else {
        ans += w[q];
        q++;
      }
    }
  }
  fin(ans);

  //////////////////////////////////////////////////////
  return 0;
}
