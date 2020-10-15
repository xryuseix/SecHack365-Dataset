/*
問題文の引用元：https://atcoder.jp/contests/abc159/tasks/abc159_b
B - String PalindromeEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : 長さが奇数である文字列 S が以下の条件をすべて満たすとき、S
は「強い回文」であるといいます。S は回文である。N を S の長さとするとき、S の 1
文字目から (N-1)/2 文字目まで(両端含む)からなる文字列は回文である。S の (N+3)/2
文字目から N 文字目まで(両端含む)からなる文字列は回文である。S
が強い回文かどうかを判定してください。
制約S は英小文字のみからなるS の長さは 3 以上 99
以下の奇数入力入力は以下の形式で標準入力から与えられる。S出力S が強い回文ならば
Yes 、強い回文でないならば No と出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc159/submissions/11090692
// 提出ID : 11090692
// 問題ID : abc159_b
// コンテストID : abc159
// ユーザID : xryuseix
// コード長 : 2529
// 実行時間 : 1



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

bool kai(string s) {
  bool ch = 1;
  rep(i, s.size() / 2) if (s[i] != s[s.size() - 1 - i]) ch = 0;
  return ch;
}

int main() {

  // double l;
  // cin>>l;
  // printf("%.6f\n",(l/3.0)*(l/3.0)*(l/3.0));
  string s;
  cin >> s;
  bool ch = 1;
  ch &= kai(s);
  // fin(ch);
  ch &= kai(s.substr(0, ceil((s.size() - 1) / 2.0)));
  // fin(ch);
  ch &= kai(s.substr(ceil((s.size() + 1) / 2.0)));
  // fin(s.substr( ceil((s.size()+1)/2.0) ));
  Yn(ch);
}
