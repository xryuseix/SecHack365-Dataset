/*
問題文の引用元：https://atcoder.jp/contests/abc152/tasks/abc152_d
D - Handstand 2Editorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 400 点
問題文 : 正の整数 N が与えられます。N 以下の正の整数の組 (A,B)
であって、次の条件を満たすものの個数を求めてください。  A,B を先頭に 0
のつかない 10 進数表記で表したときに、 A の末尾の桁が B の先頭の桁に等しく、 A
の先頭の桁が B の末尾の桁に等しい
制約1 \leq N \leq 2 \times
10^5入力はすべて整数である。入力入力は以下の形式で標準入力から与えられる。
N出力答えを出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc152/submissions/10929040
// 提出ID : 10929040
// 問題ID : abc152_d
// コンテストID : abc152
// ユーザID : xryuseix
// コード長 : 2327
// 実行時間 : 3



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
#define endl '\n';
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

  vvll v(10, vll(10, 0));
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    int r = i % 10;
    int t = i;
    while (t >= 10)
      t /= 10;
    int l = t;
    v[l][r]++;
  }
  ll ans = 0;
  for (int i = 1; i <= 9; i++) {
    for (int j = 1; j <= 9; j++) {
      ans += v[i][j] * v[j][i];
    }
  }
  fin(ans);
  // for(int i=1;i<=9;i++){
  //     for(int j=1;j<=9;j++){
  //         cout<<v[i][j]<<" ";
  //     }
  //     cout<<endl;
  // }
}
