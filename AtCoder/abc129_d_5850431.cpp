/*
引用元：https://atcoder.jp/contests/abc129/tasks/abc129_d
D - LampEditorial
// ソースコードの引用元 : https://atcoder.jp/contests/abc129/submissions/5850431
// 提出ID : 5850431
// 問題ID : abc129_d
// コンテストID : abc129
// ユーザID : xryuseix
// コード長 : 2669
// 実行時間 : 157



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
  int h, w, i, j;
  cin >> h >> w;
  vector<vector<char>> v(h + 2, vector<char>(w + 2, '%'));
  vector<vector<pair<int, int>>> ans(
      h + 2, vector<pair<int, int>>(w + 2, make_pair(0, 0)));
  for (i = 1; i <= h; i++) {
    for (j = 1; j <= w; j++)
      cin >> v[i][j];
  }
  for (i = 1; i <= h; i++) { // yoko
    for (j = 1; j <= w; j++) {
      if (v[i][j] == '#')
        continue;
      else {
        int sum = 0;
        int t = 0;
        while (v[i][j + t] == '.') {
          sum++;
          t++;
        }
        for (t = 0; t < sum; t++) {
          ans[i][j + t].second = sum;
        }
        j += sum;
      }
    }
  }
  for (i = 1; i <= w; i++) { // tate
    for (j = 1; j <= h; j++) {
      if (v[j][i] == '#')
        continue;
      else {
        int sum = 0;
        int t = 0;
        while (v[j + t][i] == '.') {
          sum++;
          t++;
        }
        for (t = 0; t < sum; t++) {
          ans[j + t][i].first = sum;
        }
        j += sum;
      }
    }
  }
  int maxans = 0;
  for (i = 1; i <= h; i++) {
    for (j = 1; j <= w; j++) {
      maxans = max(maxans, ans[i][j].first + ans[i][j].second - 1);
    }
  }
  fin(maxans); /*
   for(i=1;i<=h;i++){
       for(j=1;j<=w;j++){
           cout<<"("<<ans[i][j].first<<" "<<ans[i][j].second<<") ";
       }
       cout<<endl;
   }*/
  //////////////////////////////////////////////////////
  return 0;
}
