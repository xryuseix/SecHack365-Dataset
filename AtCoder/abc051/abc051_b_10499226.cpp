/*
問題文の引用元：https://atcoder.jp/contests/abc051/tasks/abc051_b
B - Sum of Three IntegersEditorial
Time Limit : 2 sec / Memory Limit : 256 MBScore : 200 pointsProblem StatementYou
are given two integers K and S.Three variable X, Y and Z takes integer values
satisfying 0≤X,Y,Z≤K.How many different assignments of values to X, Y and Z are
there such that X + Y + Z = S?  Constraints2≤K≤2500  0≤S≤3K  K and S are
integers.  InputThe input is given from Standard Input in the following format:K
SOutputPrint the number of the triples of X, Y and Z that satisfy the
condition.Sample Input 12 2Sample Output 16There are six triples of X, Y and Z
that satisfy the condition:X = 0, Y = 0, Z = 2  X = 0, Y = 2, Z = 0  X = 2, Y =
0, Z = 0  X = 0, Y = 1, Z = 1  X = 1, Y = 0, Z = 1  X = 1, Y = 1, Z = 0Sample
Input 25 15Sample Output 21The maximum value of X + Y + Z is 15, achieved by one
triple of X, Y and Z.
配点 : 200 点
問題文 : 2 つの整数 K,S が与えられます。3 つの変数 X,Y,Z があり、0≦X,Y,Z≦K
を満たす整数の値を取ります。X + Y + Z = S を満たす X,Y,Z
への値の割り当ては何通りありますか。
制約2≦K≦2500  0≦S≦3K  K,S は整数である。
入力入力は以下の形式で標準入力から与えられる。  K S出力
問題文 : の条件を満たす X,Y,Z の組が何通りあるか出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc051/submissions/10499226
// 提出ID : 10499226
// 問題ID : abc051_b
// コンテストID : abc051
// ユーザID : xryuseix
// コード長 : 2066
// 実行時間 : 9



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

  int k, s;
  cin >> k >> s;
  ll ans = 0;
  for (int i = 0; i <= k; i++) {
    for (int j = 0; j <= k; j++) {
      int z = s - i - j;
      if (z < 0)
        continue;
      if (z > k)
        continue;
      ans++;
    }
  }
  fin(ans);
}
