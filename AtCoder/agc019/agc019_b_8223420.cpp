/*
問題文の引用元：https://atcoder.jp/contests/agc019/tasks/agc019_b
B - Reverse and CompareEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 500 点
問題文 : 英小文字からなる文字列 A = A_1 A_2 ... A_n があります。あなたは 1 \leq
i \leq j \leq n であるような任意の二つの添字 i, j を選び、A のうち部分文字列 A_i
A_{i+1} ... A_j
を反転することができます。この操作は一回まで行うことができます。これによって得られる文字列は何通りあるでしょうか？
制約1 \leq |A| \leq 200,000A
は英小文字からなる。入力入力は以下の形式で標準入力から与えられる。A出力A
のうち任意の部分文字列を一回まで反転することによって、何通りの文字列が得られるか出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/agc019/submissions/8223420
// 提出ID : 8223420
// 問題ID : agc019_b
// コンテストID : agc019
// ユーザID : xryuseix
// コード長 : 1839
// 実行時間 : 13



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
const int MOD = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 62;

int main(void) {

  string s;
  map<char, ll> m;
  cin >> s;
  for (int i = 0; i < s.size(); i++) {
    m[s[i]]++;
  }
  ll sum = 0;
  for (auto it = m.begin(); it != m.end(); it++) {
    sum += (it->second) * ((it->second) - 1) / 2;
  }
  ll n = (ll)s.size();
  cout << n *(n - 1) / 2 - sum + 1 << endl;
}
