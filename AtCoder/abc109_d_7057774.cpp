/*
引用元：https://atcoder.jp/contests/abc109/tasks/abc109_d
D - Make Them EvenEditorial
// ソースコードの引用元 : https://atcoder.jp/contests/abc109/submissions/7057774
// 提出ID : 7057774
// 問題ID : abc109_d
// コンテストID : abc109
// ユーザID : xryuseix
// コード長 : 2395
// 実行時間 : 263



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

  int h, w;
  cin >> h >> w;
  vvi v(h, vi(w));
  rep(i, h) rep(j, w) cin >> v[i][j];
  vvi ans;
  for (int i = 0; i < h - 1; i++) {
    for (int j = 0; j < w; j++) {
      if (v[i][j] % 2 == 1) {
        v[i + 1][j]++;
        vi t;
        t.push_back(i + 1);
        t.push_back(j + 1);
        t.push_back(i + 2);
        t.push_back(j + 1);
        ans.push_back(t);
      }
    }
  }
  for (int i = 0; i < w - 1; i++) {
    if (v[h - 1][i] % 2 == 1) {
      v[h - 1][i + 1]++;
      vi t;
      t.push_back(h);
      t.push_back(i + 1);
      t.push_back(h);
      t.push_back(i + 2);
      ans.push_back(t);
    }
  }
  cout << ans.size() << endl;
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i][0] << " " << ans[i][1] << " " << ans[i][2] << " "
         << ans[i][3] << endl;
  }

  //////////////////////////////////////////////////////
  return 0;
}
