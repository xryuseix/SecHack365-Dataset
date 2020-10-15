/*
問題文の引用元：https://atcoder.jp/contests/abc094/tasks/arc095_a
C - Many MediansEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 300 点
問題文 : l が奇数のとき，l 個の数 a_1, a_2, ..., a_l の中央値とは，a_1, a_2,
..., a_l の中で \frac{l+1}{2} 番目に大きい値のことを言います．N 個の数 X_1, X_2,
..., X_N が与えられます．ここで，N は偶数です．i = 1, 2, ..., N に対して，X_1,
X_2, ..., X_N から X_i のみを除いたもの，すなわち X_1, X_2, ..., X_{i-1},
X_{i+1}, ..., X_N の中央値を B_i とします．i = 1, 2, ..., N に対して，B_i
を求めてください．
制約2 \leq N \leq 200000N は偶数1 \leq X_i \leq
10^9入力はすべて整数入力入力は以下の形式で標準入力から与えられる。NX_1 X_2 ...
X_N出力N 行出力せよ．i 行目には B_i を出力せよ．
// ソースコードの引用元 : https://atcoder.jp/contests/abc094/submissions/5868204
// 提出ID : 5868204
// 問題ID : arc095_a
// コンテストID : abc094
// ユーザID : xryuseix
// コード長 : 1679
// 実行時間 : 463



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
  vector<int> v(n), w(n);
  rep(i, n) {
    cin >> v[i];
    w[i] = v[i];
  }
  int cen = n / 2;
  sort(w.begin(), w.end());
  map<int, int> m;
  rep(i, n) {
    if (w[i] < w[cen] || w[i] > w[cen]) {
      // cout<<w[i]<<endl;
      m[w[i]] = w[cen];
    }
    if (w[i] >= w[cen] && w[i - 1] < w[cen]) {
      cen--;
      // cout<<w[i]<<endl;
      m[w[i]] = w[cen];
    }
  }
  rep(i, n) cout << m[v[i]] << endl;
  //////////////////////////////////////////////////////
  return 0;
}
