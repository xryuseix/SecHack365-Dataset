/*
問題文の引用元：https://atcoder.jp/contests/abc099/tasks/abc099_c
C - Strange BankEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 300 点
問題文 :
ある銀行では、お金の引き出しを難しくするために、一回の操作で引き出せる金額が以下のいずれかとなっています。1
円6 円、6^2(=36) 円、6^3(=216) 円、...9 円、9^2(=81) 円、9^3(=729)
円、...この銀行からちょうど N
円を引き出すには少なくとも何回の操作が必要か求めてください。ただし、一度引き出したお金を再び預け入れてはならないとします。
制約1 \leq N \leq 100000N
は整数入力入力は以下の形式で標準入力から与えられる。N出力この銀行からちょうど N
円を引き出すのに少なくとも x 回の操作が必要な時、x を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc099/submissions/11887799
// 提出ID : 11887799
// 問題ID : abc099_c
// コンテストID : abc099
// ユーザID : xryuseix
// コード長 : 2847
// 実行時間 : 12



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
#include <random>
#include <iomanip>
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
typedef map<int, int> mii;
typedef set<int> si;
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
#define itn int
// #define endl '\n';
#define fi first
#define se second
#define NONVOID [[nodiscard]]
const int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
const int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
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
template <class T> inline void dump(T &v) {
  irep(i, v) { cout << *i << ((i == --v.end()) ? '\n' : ' '); }
}
inline string getline() {
  string s;
  getline(cin, s);
  return s;
}
inline void yn(const bool b) { b ? fin("yes") : fin("no"); }
inline void Yn(const bool b) { b ? fin("Yes") : fin("No"); }
inline void YN(const bool b) { b ? fin("YES") : fin("NO"); }
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

  vi dp(101010, INF);
  vi coin(1, 1);
  rep(i, 30) {
    ll t = pow(6, i);
    if (t <= dp.size())
      coin.pb(t);
    else
      break;
  }
  rep(i, 30) {
    ll t = pow(9, i);
    if (t <= dp.size())
      coin.pb(t);
    else
      break;
  }
  Sort(coin);
  dp[0] = 0;
  for (int i = 0; i < dp.size(); i++) {
    for (int j = 0; j < coin.size(); j++) {
      if (i + coin[j] < dp.size())
        chmin(dp[i + coin[j]], dp[i] + 1);
      else
        break;
    }
  }
  int n;
  cin >> n;
  fin(dp[n]);
}
