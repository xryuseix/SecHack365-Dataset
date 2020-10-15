/*
問題文の引用元：https://atcoder.jp/contests/abc089/tasks/abc089_c
C - March
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 300 点
問題文 : N 人の人がいて、i 番目の人の名前は S_i
です。この中から、以下の条件を満たすように 3 人を選びたいです。全ての人の名前が
M,A,R,C,H
のどれかから始まっている同じ文字から始まる名前を持つ人が複数いないこれらの条件を満たすように
3
人を選ぶ方法が何通りあるか、求めてください。ただし、選ぶ順番は考えません。答えが
32 bit整数型に収まらない場合に注意してください。
制約1 \leq N \leq 10^5S_i は英大文字からなる1 \leq |S_i| \leq 10S_i \neq S_j (i
\neq
j)入力入力は以下の形式で標準入力から与えられる。NS_1:S_N出力与えられた条件を満たすように
3 人を選ぶ方法が x 通りのとき、x を出力せよ。



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
#define STI(s) atoi(s.c_str())
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

int main(void) {

  int n;
  cin >> n;
  vll v(5, 0);
  rep(i, n) {
    string s;
    cin >> s;
    if (s[0] == 'M')
      v[0]++;
    else if (s[0] == 'A')
      v[1]++;
    else if (s[0] == 'R')
      v[2]++;
    else if (s[0] == 'C')
      v[3]++;
    else if (s[0] == 'H')
      v[4]++;
  }
  ll ans = 0;
  for (int i = 0; i < 5; i++) {
    for (int j = i + 1; j < 5; j++) {
      for (int k = j + 1; k < 5; k++) {
        ans += v[i] * v[j] * v[k];
      }
    }
  }
  fin(ans);
}
