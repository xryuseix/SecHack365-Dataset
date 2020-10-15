/*
問題文の引用元：https://atcoder.jp/contests/agc003/tasks/agc003_b
B - Simplified mahjongEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 400 点
問題文 : 高橋君は 1 から N
までの整数のうちのどれかが書かれたカードをたくさん持っています。高橋君は整数 i
が書かれたカードを A_i 枚持っています。2
枚のカードについて、それらに書かれた整数の差の絶対値が 1
以下のとき、これらをペアにすることができます。高橋君は、同じカードが複数のペアに使われないように、できるだけ多くのペアを作りたいです。高橋君が作れるペアの個数の最大値を求めてください。
制約1 ≦ N ≦ 10^50 ≦ A_i ≦ 10^9 (1 ≦ i ≦
N)入力はすべて整数である。入力入力は以下の形式で標準入力から与えられる。NA_1:A_N出力高橋君が作れるペアの個数の最大値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/agc003/submissions/7187858
// 提出ID : 7187858
// 問題ID : agc003_b
// コンテストID : agc003
// ユーザID : xryuseix
// コード長 : 1804
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

  int n;
  cin >> n;
  vi a(n);
  ll ans = 0;
  rep(i, n) cin >> a[i];
  rep(i, n) {
    int t = 0;
    t = a[i] / 2;
    a[i] -= t * 2;
    ans += t;
    if (a[i] == 1 && i + 1 < n && a[i + 1] > 0) {
      ans++;
      a[i + 1]--;
    }
  }
  fin(ans);

  //////////////////////////////////////////////////////
  return 0;
}
