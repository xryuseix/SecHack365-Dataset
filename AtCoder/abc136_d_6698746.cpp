/*
引用元：https://atcoder.jp/contests/abc136/tasks/abc136_d
D - Gathering ChildrenEditorial
// ソースコードの引用元 : https://atcoder.jp/contests/abc136/submissions/6698746
// 提出ID : 6698746
// 問題ID : abc136_d
// コンテストID : abc136
// ユーザID : xryuseix
// コード長 : 2678
// 実行時間 : 11



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

  string s;
  cin >> s;
  int n = s.length();
  vi ans(n, 0);
  vi rl(n, INF);
  vi point;
  vi minp(n);
  for (int i = 0; i < n - 1; i++) {
    if (s[i] == 'R' && s[i + 1] == 'L') {
      rl[i] = 0;
      rl[i + 1] = 0;
      minp[i] = i;
      minp[i + 1] = i + 1;
      point.push_back(i);
    }
  }
  for (int i = 0; i < point.size(); i++) {
    int t = point[i] - 1;
    while (t >= 0 && rl[t] > rl[t + 1] && s[t] == 'R') { // left
      rl[t] = rl[t + 1] + 1;
      minp[t] = point[i];
      t--;
    }
    t = point[i] + 2;
    while (t < n && rl[t - 1] + 1 < rl[t] && s[t] == 'L') {
      rl[t] = rl[t - 1] + 1;
      minp[t] = point[i] + 1;
      t++;
    }
  }
  // rep(i,n)cout<<rl[i]<<" ";
  // cout<<endl;
  // rep(i,n)cout<<minp[i]<<" ";
  // cout<<endl;
  for (int i = 0; i < n; i++) {
    if (rl[i] % 2 == 0) {
      ans[minp[i]]++;
    } else {
      if (s[i] == 'R') {
        ans[minp[i] + 1]++;
      } else {
        ans[minp[i] - 1]++;
      }
    }
  }
  rep(i, n - 1) cout << ans[i] << " ";
  cout << ans[n - 1] << endl;

  //////////////////////////////////////////////////////
  return 0;
}
