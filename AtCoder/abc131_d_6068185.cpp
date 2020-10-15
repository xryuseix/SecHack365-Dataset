/*
引用元：https://atcoder.jp/contests/abc131/tasks/abc131_d
D - MegalomaniaEditorial
// ソースコードの引用元 : https://atcoder.jp/contests/abc131/submissions/6068185
// 提出ID : 6068185
// 問題ID : abc131_d
// コンテストID : abc131
// ユーザID : xryuseix
// コード長 : 1816
// 実行時間 : 52



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
#define rep(i, n) for (i = 0; i < n; i++)
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
  int n, i;
  cin >> n;
  vector<pair<int, pair<int, int>>> vp(n);
  int a, b;
  rep(i, n) {
    cin >> a >> b;
    vp[i] = mp(b, mp(a, i + 1));
  }
  Sort(vp);
  vector<int> v(n + 1); // v[i]は仕事iの終了時間
  int time = 0;
  bool ch = true;
  for (i = 0; i < n; i++) {
    time += vp[i].second.first;
    v[vp[i].second.second] = time;
    if (vp[i].first < time)
      ch = false;
    // cout<<vp[i].first<<" "<<time<<endl;
  }
  if (ch)
    fin("Yes");
  else
    fin("No");
  // for(i=1;i<=n;i++)cout<<v[i]<<" ";
  // cout<<endl;
  //////////////////////////////////////////////////////
  return 0;
}
