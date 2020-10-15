/*
問題文の引用元：https://atcoder.jp/contests/code-festival-2014-final/tasks/code_festival_final_c
C - N進数Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 10  以上の整数 N に対し、 N 進数で N と表現できる数字を f(N)
とします。例えば、 f(23) は、2 × 23 + 3 = 49 のように求めることが出来ます。整数
A が与えられます。この数字が、f(k)
のような形で表すことが可能かどうかを調べたいです。整数 A が、 10 以上の整数 k
を用いて、 f(k) の形で表すことが可能であれば、k を出力し、そうでなければ -1
を出力してください。入力入力は以下の形式で標準入力から与えられるA1
行目には、整数 A(1 ≦ A ≦ 10^{16}) が与えられる。出力整数 A が 10 以上の整数 k
を用いて、 f(k) の形で表すことが可能であれば、k を出力し、そうでなければ -1
を出力せよ。出力の末尾には改行をいれること。
// ソースコードの引用元 :
https://atcoder.jp/contests/code-festival-2014-final/submissions/11078397
// 提出ID : 11078397
// 問題ID : code_festival_final_c
// コンテストID : code-festival-2014-final
// ユーザID : xryuseix
// コード長 : 2397
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

ll f(ll i) {
  ll res = 0;
  int k = 0;
  ll t = i;
  while (t > 0) {
    res += pow(i, k) * (t % 10);
    t /= 10;
    k++;
  }
  return res;
}

int main() {

  ll n;
  cin >> n;
  for (int i = 10; i < 10101; i++) {
    if (f(i + 1) == n) {
      fin(i + 1);
      return 0;
    }
  }
  fin(-1);
}