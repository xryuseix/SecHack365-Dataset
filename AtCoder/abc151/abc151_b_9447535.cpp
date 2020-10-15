/*
問題文の引用元：https://atcoder.jp/contests/abc151/tasks/abc151_b
B - Achieve the Goal
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : 高橋君は N 科目のテストを受けます。各テストは K
点満点であり、点数はそれぞれ 0 以上の整数です。高橋君は N-1
科目のテストを既に受けており、i 番目の科目のテストの点数は A_i
点でした。高橋君の目標は、N 科目のテストの平均点を M
点以上にすることです。高橋君が目標を達成するためには、最後のテストで最低何点取る必要があるか出力してください。達成不可能である場合は、代わりに
-1 を出力してください。
制約2 \leq N \leq 1001 \leq K \leq 1001 \leq M \leq K0 \leq A_i \leq
K入力中のすべての値は整数である。入力入力は以下の形式で標準入力から与えられる。N
K MA_1 A_2 ... A_{N-1}出力最後のテストでの必要最低点または -1 を出力せよ。



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
  }
};
const ll MOD = 1000000007;
const double EPS = 1e-9;
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;

int main(void) {

  int n, k, m;
  cin >> n >> k >> m;
  int sum = 0;
  rep(i, n - 1) {
    int d;
    cin >> d;
    sum += d;
  }
  int need = m * n - sum;

  if (need <= k)
    cout << max(need, 0) << endl;
  else
    fin(-1);
}