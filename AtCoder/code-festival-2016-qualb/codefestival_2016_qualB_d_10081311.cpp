/*
問題文の引用元：https://atcoder.jp/contests/code-festival-2016-qualb/tasks/codefestival_2016_qualB_d
D - Greedy customers
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 700 点
問題文 : 高橋商店の前には、N 人の人が 1 列に並んでいます。前から i
人目の人の所持金は正整数 A_i
です。店主の高橋君は、「品物を選んでその価格を表す正の整数 P
を設定し、前の人から順にその品物を見せていく」というステップを繰り返します。各ステップにおいて、各人は、品物を見せられた時、その価格
P が現時点でのその人の所持金以下だった場合その品物を購入し、高橋君の 1
回のステップは終了します。すなわち、所持金が P 以上の最初の人の所持金が P
減少し、次のステップに移ります。高橋君は正整数 P
の値を、ステップごとに独立に決めることができます。高橋君はできるだけ多くの品物を売りたいですが、品物を売った人の所持金が
0
になってしまうと、その人は帰れなくなってしまいます。人が帰れなくなってしまうと高橋君は困ってしまうので、どの人の所持金も
0
にしてはいけません。高橋君に代わって、各人の最初の所持金が与えられたとき、高橋君が最大でいくつの品物を売ることができるかを求めるプログラムを作成してください。
制約1 ≦ N ≦ 1000001 ≦ A_i ≦ 10^9(1 ≦ i ≦
N)入力はすべて整数である入力入力は以下の形式で標準入力から与えられる。NA_1:A_N出力高橋君が売ることのできる商品の最大数を表す整数を出力せよ。



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
  vi v(n);
  rep(i, n) cin >> v[i];
  ll ans = 0;
  int maxa = 0;
  for (int i = 0; i < n; i++) {
    int num = (v[i] - 1) / (maxa + 1);
    ans += num;
    // cout<<i<<" num:"<<num<<" "<<maxa<<endl;
    if (num > 0)
      v[i] = 1;
    maxa = max(maxa, v[i]);
  }
  fin(ans);
}
