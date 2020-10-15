/*
引用元：https://atcoder.jp/contests/abc104/tasks/abc104_c
C - All GreenEditorial
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
