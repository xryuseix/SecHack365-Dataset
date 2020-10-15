/*
問題文の引用元：https://atcoder.jp/contests/agc034/tasks/agc034_b
B - ABCEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 600 点
問題文 : A,B,C からなる文字列 s が与えられます。すぬけ君は s
に対して次の操作をできるだけ多く行おうとしています。s
の連続した部分文字列であって ABC であるようなものをひとつ選び、 BCA
に書き換える。操作回数の最大値を求めてください。
制約1 ≦ |s| ≦ 200000s の各文字は A,B,C
のいずれか入力入力は以下の形式で標準入力から与えられる。s出力操作回数の最大値を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/agc034/submissions/11663784
// 提出ID : 11663784
// 問題ID : agc034_b
// コンテストID : agc034
// ユーザID : xryuseix
// コード長 : 2662
// 実行時間 : 18



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
#define endl '\n';
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

  string s = "", t;
  cin >> t;
  rep(i, t.size()) {
    if (i < t.size() - 1 && t[i] == 'B' && t[i + 1] == 'C')
      s += 'D', i++;
    else
      s += t[i];
  }
  ll ans = 0;
  vll csum(1, 0);
  for (int i = s.size() - 1; i >= 0; i--) {
    if (s[i] == 'D')
      csum.pb(csum[csum.size() - 1] + 1);
    else if (s[i] == 'A')
      csum.pb(csum[csum.size() - 1]);
    else
      csum.pb(0);
  }
  reverse(all(csum));
  rep(i, s.size()) if (s[i] == 'A') ans += csum[i];
  fin(ans);
}