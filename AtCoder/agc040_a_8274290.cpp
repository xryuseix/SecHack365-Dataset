/*
引用元：https://atcoder.jp/contests/agc040/tasks/agc040_a
A - ><Editorial
// ソースコードの引用元 : https://atcoder.jp/contests/agc040/submissions/8274290
// 提出ID : 8274290
// 問題ID : agc040_a
// コンテストID : agc040
// ユーザID : xryuseix
// コード長 : 2253
// 実行時間 : 25



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
#define fin(ans) cout << (ans) << endl
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
  };
};
const int MOD = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 62;

int main(void) {

  string s;
  cin >> s;
  vll v(s.size() + 1, -1);
  vi point;
  if (s[0] == '<')
    point.push_back(0);
  if (s[s.size() - 1] == '>')
    point.push_back(s.size());
  for (int i = 0; i < s.size() - 1; i++) {
    if (s[i] == '>' && s[i + 1] == '<')
      point.push_back(i + 1);
  }
  for (int i = 0; i < point.size(); i++) {
    v[point[i]] = 0;
  }
  for (int I = 0; I < point.size(); I++) {
    int start = point[I];
    //左
    for (int i = start; i > 0; i--) {
      if (s[i - 1] == '>')
        v[i - 1] = max(v[i - 1], v[i] + 1);
      else {
        break;
      }
    }
    //右
    for (int i = start; i < v.size() - 1; i++) {
      if (s[i] == '<') {
        v[i + 1] = max(v[i + 1], v[i] + 1);
      } else {
        break;
      }
    }
  }
  ll sum = 0;
  for (int i = 0; i < v.size(); i++) {
    sum += v[i];
  }
  fin(sum);
}
