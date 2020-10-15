/*
問題文の引用元：https://atcoder.jp/contests/arc053/tasks/arc053_b
B - 回文分割Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 高橋君は文字列 S を持っています。S
は英小文字のみからなります。まず、高橋君は S
の文字を任意の順番に並べ替え、文字列 S' を作ります。次に、高橋君は S'
を任意の位置で分割し、何個かの文字列 s_1，s_2，...，s_N を作ります（N
は任意）。ただし、各 s_i は回文でなければなりません。各 s_i の長さの最小値を X
とします。高橋君は X をできるだけ大きくしようとしています。X
の最大値を求めてください。
制約1≦|S|≦10^5S
は英小文字のみからなる。入力入力は以下の形式で標準入力から与えられる。S出力X
の最大値を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/arc053/submissions/12233899
// 提出ID : 12233899
// 問題ID : arc053_b
// コンテストID : arc053
// ユーザID : xryuseix
// コード長 : 2600
// 実行時間 : 7



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
#include <iomanip>
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
typedef vector<pair<ll, ll>> vpll;
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
// #define endl '\n';
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
template <class T> inline void dump(T &v) {
  irep(i, v) { cout << *i << ((i == --v.end()) ? '\n' : ' '); }
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

  map<char, int> m;
  string s;
  cin >> s;
  rep(i, s.size()) m[s[i]]++;
  int one = 0, two = 0;
  irep(i, m) {
    one += i->second % 2;
    two += i->second / 2;
  }
  if (one > 0)
    cout << 1 + two / one * 2 << endl;
  else
    fin(two * 2);
}
