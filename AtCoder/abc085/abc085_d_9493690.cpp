/*
問題文の引用元：https://atcoder.jp/contests/abc085/tasks/abc085_d
D - Katana Thrower
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 400 点
問題文 : あなたが散歩していると、突然一体の魔物が出現しました。幸い、あなたは N
本の刀、刀 1、刀 2、…、刀 N
を持っていて、次の二種類の攻撃を自由な順番で行うことができます。持っている刀のうち一本を振る。刀
i (1 ≤ i ≤ N) を振ると、魔物は a_i
ポイントのダメージを受ける。同じ刀を何度振ることもできる。持っている刀のうち一本を投げつける。刀
i (1 ≤ i ≤ N) を投げつけると、魔物は b_i
ポイントのダメージを受け、あなたはその刀を失う。すなわち、あなたは以後その刀を振ることも投げつけることもできなくなる。魔物は、受けたダメージの合計が
H
ポイント以上になると消滅します。魔物を消滅させるには、最小で合計何回の攻撃が必要でしょうか。
制約1 ≤ N ≤ 10^51 ≤ H ≤ 10^91 ≤ a_i ≤ b_i ≤
10^9入力値はすべて整数である。入力入力は以下の形式で標準入力から与えられる。N
Ha_1 b_1:a_N b_N出力魔物を消滅させるために必要な最小の合計攻撃回数を出力せよ。



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

  int n, h;
  cin >> n >> h;
  vpii v;

  rep(i, n) {
    int a, b;
    cin >> a >> b;
    v.push_back(mp(a, 0));
    v.push_back(mp(b, 1));
  }
  Rort(v);
  int ans = 0;
  int pos = 0;
  while (h > 0) {
    if (v[pos].second == 0) {
      int tata = ceil(h / (double)v[pos].first);
      ans += tata;
      h = 0;
      continue;
    } else {
      ans++;
      h -= v[pos].first;
      pos++;
    }
  }
  fin(ans);
}
