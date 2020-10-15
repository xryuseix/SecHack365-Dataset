/*
引用元：https://atcoder.jp/contests/abc136/tasks/abc136_d
D - Gathering ChildrenEditorial
// ソースコードの引用元 :
https://atcoder.jp/contests/abc136/submissions/10535345
// 提出ID : 10535345
// 問題ID : abc136_d
// コンテストID : abc136
// ユーザID : xryuseix
// コード長 : 2945
// 実行時間 : 16



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
#include <cassert>
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
#define irep(it, stl) for (auto it = stl.begin(); it != stl.end(); it++)
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define fin(ans) cout << (ans) << '\n'
#define STLL(s) strtoll(s.c_str(), NULL, 10)
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
#define MATHPI acos(-1)
#define itn int;
int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
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
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;
const ll MOD = 1000000007;
const double EPS = 1e-9;

int main() {
  string s;
  cin >> s;
  int n = s.size();
  vi len(s.size(), INF);
  rep(i, n - 1) {
    if (s[i] == 'R' && s[i + 1] == 'L') {
      len[i] = 0;
      len[i + 1] = 0;
      for (int j = i - 1; j >= 0 && j < n && s[j] == 'R'; j--) {
        if (len[j] <= i - j)
          break;
        len[j] = i - j;
      }
      i++;
      for (int j = i + 1; j >= 0 && j < n && s[j] == 'L'; j++) {
        if (len[j] <= j - i) {
          break;
        }
        len[j] = j - i;
      }
    } else
      continue;
  }
  vi ans(n, 0);
  rep(i, n) {
    if (s[i] == 'R') {
      if (len[i] % 2 == 1) {
        ans[i + len[i] + 1]++;
      } else {
        ans[i + len[i]]++;
      }
    } else {
      if (len[i] % 2 == 1) {
        ans[i - len[i] - 1]++;
      } else {
        ans[i - len[i]]++;
      }
    }
  }
  rep(i, n) {
    if (!i)
      cout << ans[0];
    else
      cout << " " << ans[i];
  }
  cout << endl;
  // rep(i,n){
  //     if(!i)cout<<len[0];
  //     else cout<<" "<<len[i];
  // }
  // cout<<endl;
}
