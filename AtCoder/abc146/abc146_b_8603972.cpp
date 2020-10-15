/*
問題文の引用元：https://atcoder.jp/contests/abc146/tasks/abc146_b
B - ROT NEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : 英大文字のみからなる文字列 S があります。また、整数 N が与えられます。S
の各文字を、アルファベット順で N
個後の文字に置き換えた文字列を出力してください。ただしアルファベット順で Z の 1
個後の文字は A とみなします。
制約0 \leq N \leq 261 \leq |S| \leq 10^4S
は英大文字のみからなる入力入力は以下の形式で標準入力から与えられる。NS出力S
の各文字を、アルファベット順で N 個後の文字に置き換えた文字列を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc146/submissions/8603972
// 提出ID : 8603972
// 問題ID : abc146_b
// コンテストID : abc146
// ユーザID : xryuseix
// コード長 : 1695
// 実行時間 : 2



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
const ll MOD = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 62;

int main(void) {

  int n;
  string s;
  cin >> n >> s;
  rep(i, s.size()) { s[i] = (s[i] - 'A' + n + 26) % 26 + 'A'; }
  fin(s);
}
