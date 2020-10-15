/*
引用元：https://atcoder.jp/contests/agc011/tasks/agc011_b
B - Colorful CreaturesEditorial
// ソースコードの引用元 : https://atcoder.jp/contests/agc011/submissions/7094437
// 提出ID : 7094437
// 問題ID : agc011_b
// コンテストID : agc011
// ユーザID : xryuseix
// コード長 : 2345
// 実行時間 : 19



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
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
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
#define fin(ans) cout << (ans) << endl
#define STI(s) atoi(s.c_str())
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
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
const int P = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  int n;
  cin >> n;
  vll v(n), csum;
  vector<bool> b(n, false);
  rep(i, n) cin >> v[i];
  Sort(v);

  csum.push_back(0);
  rep(i, n) { csum.push_back(csum[i] + v[i]); }
  int ans = 0;
  for (int i = 1; i <= n; i++) {
    // cout<<csum[i]*2<<" "<<v[n-1]<<endl;
    if (csum[i] * 2 >= v[n - 1]) {
      b[n - 1] = true;
    }
  }
  for (int i = n - 1; i >= 0; i--) {
    if (!b[i]) {
      if (csum[i + 1] * 2 >= v[i + 1] && b[i + 1]) {
        b[i] = true;
      }
    }
  }
  rep(i, n) if (b[i]) ans++;
  fin(ans);
  // rep(i,csum.size()){
  //     cout<<csum[i]<<" ";
  // }
  // cout<<endl;
  // rep(i,v.size()){
  //     cout<<v[i]<<" ";
  // }
  // cout<<endl;
  // rep(i,b.size()){
  //     cout<<b[i]<<" ";
  // }
  // cout<<endl;

  //////////////////////////////////////////////////////
  return 0;
}
