/*
問題文の引用元：https://atcoder.jp/contests/tenka1-2017-beginner/tasks/tenka1_2017_a
A - Accepted...?
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : すぬけ君はあるプログラミングコンテストのために、6
問の問題を用意しました。りんごさんはすぬけ君の用意した各問題についてそれぞれ、プログラミングコンテストに採用するかどうかを決めました。長さ
6 の文字列 S の i 文字目が 1 ならすぬけ君の用意した i
問目の問題が採用されたことを、0
なら採用されなかったことを表します。すぬけ君が用意した問題の中で、プログラミングコンテストに採用された問題は何問あるでしょうか。
制約S の長さは 6 であるS は 0 と 1
のみからなる入力入力は以下の形式で標準入力から与えられる。S出力すぬけ君が用意した問題のうち、プログラミングコンテストに採用された問題の数を出力せよ。



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

int stringcount(string s, char c) { return count(s.cbegin(), s.cend(), c); }

int main(void) {

  string s;
  cin >> s;
  cout << stringcount(s, '1') << endl;
}
