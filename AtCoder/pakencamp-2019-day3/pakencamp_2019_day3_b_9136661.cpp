/*
問題文の引用元：https://atcoder.jp/contests/pakencamp-2019-day3/tasks/pakencamp_2019_day3_b
B - 多数決Editorial
Time Limit : 1 sec / Memory Limit : 1024 MB﻿
配点: 100 点
問題文 :
ある日，パ研のイメージカラーを「黒」にするか「白」にするか決めるために，投票が行われることになりました．
N 人の投票者は，どちらをイメージカラーをすべきか投票しました．より具体的には，i
番目の投票者はイメージカラー S_i に投票しました．ただし，S_i が black
の場合「黒」に投票したことを表し，white の場合「白」に投票したことを表します．
イメージカラーは多数決によって，投票した人数が多い方に決まります．
パ研のイメージカラーが何色になるかを求めるプログラムを書いてください．
制約すべての入力データは，以下の
制約を満たす．  N は 1 以上 99 以下の奇数S_i は black と white
のどちらか一方部分点この問題はいくつかの小課題に分けられ，その小課題のすべてのテストケースに正解した場合に「この小課題に正解した」とみなされます．提出したソースコードの得点は，正解した小課題の点数の合計となります．
(50 点) N = 1 である．(50 点) 追加の
制約はない．入力入力は以下の形式で標準入力から与えられます．  NS_1S_2S_3
:S_N出力パ研のイメージカラーが黒になるなら black，白になるなら white と，1
行で出力してください．
// ソースコードの引用元 :
https://atcoder.jp/contests/pakencamp-2019-day3/submissions/9136661
// 提出ID : 9136661
// 問題ID : pakencamp_2019_day3_b
// コンテストID : pakencamp-2019-day3
// ユーザID : xryuseix
// コード長 : 1827
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
#include <cfloat>
#include <unordered_set>
#pragma GCC optimize("Ofast")
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef vector<double> vd;
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
#define fin(ans) cout << (ans) << '\n'
#define STI(s) atoi(s.c_str())
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
#define MATHPI acos(-1)
#define itn int
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
struct io {
  io() {
    ios::sync_with_stdio(false);
    cin.tie(0);
  }
};
const ll MOD = 1000000007;
const double EPS = 1e-9;
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;

int main(void) {

  int b = 0, w = 0;
  int n;
  cin >> n;
  rep(i, n) {
    string s;
    cin >> s;
    if (s == "black")
      b++;
    else
      w++;
  }
  if (b < w)
    fin("white");
  else
    fin("black");
}
