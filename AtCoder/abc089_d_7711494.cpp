/*
引用元：https://atcoder.jp/contests/abc089/tasks/abc089_d
D - Practical Skill TestEditorial
// ソースコードの引用元 : https://atcoder.jp/contests/abc089/submissions/7711494
// 提出ID : 7711494
// 問題ID : abc089_d
// コンテストID : abc089
// ユーザID : xryuseix
// コード長 : 2864
// 実行時間 : 269



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
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
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

  int h, w, d;
  cin >> h >> w >> d;
  vvi a(h, vi(w, 0));
  rep(i, h) rep(j, w) cin >> a[i][j];

  map<int, pair<int, int>> m;
  rep(i, h) rep(j, w) { m[a[i][j]] = mp(i, j); }
  vvi dis(d), csum(d, vi(1, 0));
  for (int i = 1; i <= d; i++) {
    int t = i;
    while (t + d <= h * w) {
      dis[i - 1].push_back(abs(m[t + d].first - m[t].first) +
                           abs(m[t + d].second - m[t].second));
      t += d;
    }
  }
  // cout<<"\n-----"<<endl;
  // for(int i=0;i<dis.size();i++){
  //     for(int j=0;j<dis[i].size();j++){
  //         cout<<dis[i][j]<<" ";
  //     }
  //     cout<<endl;
  // }
  // cout<<"-----"<<endl;
  for (int i = 0; i < d; i++) {
    for (int j = 0; j < dis[i].size(); j++) {
      csum[i].push_back(csum[i][j] + dis[i][j]);
    }
  }
  // cout<<"\n-----"<<endl;
  // for(int i=0;i<csum.size();i++){
  //     for(int j=0;j<csum[i].size();j++){
  //         cout<<csum[i][j]<<" ";
  //     }
  //     cout<<endl;
  // }
  // cout<<"-----"<<endl;

  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    int l, r;
    cin >> l >> r;
    int h = (l - 1) % d;
    cout << csum[h][(r - h - 1) / d] - csum[h][(l - h - 1) / d] << endl;
  }
  // sum[1][3]-csum[1][1]
  // csum[2%3+1][2/3-1]-csum[2%3+1][2/3-1]

  //////////////////////////////////////////////////////
  return 0;
}
