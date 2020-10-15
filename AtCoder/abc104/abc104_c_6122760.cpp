/*
問題文の引用元：https://atcoder.jp/contests/abc104/tasks/abc104_c
C - All GreenEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : プログラミングコンペティションサイト AtCode
は、アルゴリズムの問題集を提供しています。それぞれの問題には、難易度に応じて点数が付けられています。現在、1
以上 D 以下のそれぞれの整数 i に対して、100i 点を付けられた問題が p_i
問存在します。これらの p_1 + … + p_D 問が AtCode
に収録された問題のすべてです。AtCode のユーザーは 総合スコア
と呼ばれる値を持ちます。ユーザーの総合スコアは、以下の 2
つの要素の和です。基本スコア: ユーザーが解いた問題すべての
配点の合計です。コンプリートボーナス: 100i 点を付けられた p_i
問の問題すべてを解いたユーザーは、基本スコアと別にコンプリートボーナス c_i
点を獲得します (1 ≤ i ≤ D)。AtCode
の新たなユーザーとなった高橋くんは、まだ問題を 1
問も解いていません。彼の目標は、総合スコアを G
点以上にすることです。このためには、少なくとも何問の問題を解く必要があるでしょうか？
制約1 ≤ D ≤ 101 ≤ p_i ≤ 100100 ≤ c_i ≤ 10^6100 ≤
G入力中のすべての値は整数である。c_i, G はすべて 100 の倍数である。総合スコアを
G 点以上にすることは可能である。入力入力は以下の形式で標準入力から与えられる。D
Gp_1 c_1:p_D c_D出力総合スコアを G
点以上にするために解く必要のある最小の問題数を出力せよ。なお、この目標は必ず達成可能である（
制約を参照のこと）。
// ソースコードの引用元 : https://atcoder.jp/contests/abc104/submissions/6122760
// 提出ID : 6122760
// 問題ID : abc104_c
// コンテストID : abc104
// ユーザID : xryuseix
// コード長 : 2765
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
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<pair<int, int>> vpii;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef vector<vector<string>> vvs;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define fin(ans) cout << (ans) << endl
#define P 1000000007
#define STI(s) atoi(s.c_str()) // string to int
#define mp(p, q) make_pair(p, q)
#define Sort(a) sort(a.begin(), a.end())
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
const int INF = INT_MAX;
const long long LLINF = 1LL << 60;
// g++ -std=c++1z temp.cpp
//./a.out

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  int d, g;
  cin >> d >> g;
  vi p(d), c(d);
  rep(i, d) cin >> p[i] >> c[i];
  //貪欲解法
  int tmp = g;
  int place = d - 1;
  int greedy = 0;
  while (tmp > 0) {
    if (p[place] * (place + 1) * 100 + c[place] > tmp) {
      while (tmp > 0) {
        tmp -= (place + 1) * 100;
        greedy++;
      }
    } else {
      tmp -= p[place] * (place + 1) * 100 + c[place];
      greedy += p[place];
      place--;
    }
  }
  ll ans = greedy;

  //ここからbit全探索
  for (int bit = 0; bit < (1 << d); ++bit) {
    /* bit で表される集合の処理を書く */

    /* きちんとできていることを確認してみる */
    // bit の表す集合を求める
    tmp = g;
    ll bitnum = 0;
    vector<int> S;
    for (int i = 0; i < d; ++i) {
      if (bit & (1 << i)) { // i が bit に入るかどうか
        S.push_back(i);
      }
    }

    for (int i = 0; i < S.size(); i++) {
      tmp -= p[S[i]] * (S[i] + 1) * 100 + c[S[i]];
      bitnum += p[S[i]];
    }
    if (tmp <= 0)
      ans = min(ans, bitnum); /*
cout<<tmp<<" "<<ans<<" "<<bitnum<<endl;

// bit の表す集合の出力
cout<<bit<<": {";
for(int  i=0;i<(int)S.size();++i) {
    cout<<S[i]<< " ";
}
cout <<"}"<< endl;*/
  }
  cout << ans << endl;

  //////////////////////////////////////////////////////
  return 0;
}
