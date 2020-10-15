/*
問題文の引用元：https://atcoder.jp/contests/abc161/tasks/abc161_d
D - Lunlun NumberEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 400 点
問題文 : 正の整数 X が以下の条件を満たすとき、 X はルンルン数であると言います。
X を(leading zeroなしで)十進数表記した際に、隣り合うどの 2
つの桁の値についても、差の絶対値が 1 以下例えば、 1234 , 1 , 334
などはルンルン数ですが、 31415 , 119 , 13579 などはルンルン数ではありません。
正の整数 K が与えられます。小さい方から K 番目のルンルン数を求めてください。
制約1 \leq K \leq
10^5入力はすべて整数である。入力入力は以下の形式で標準入力から与えられる。
K出力答えを出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc161/submissions/11517225
// 提出ID : 11517225
// 問題ID : abc161_d
// コンテストID : abc161
// ユーザID : xryuseix
// コード長 : 2505
// 実行時間 : 127



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

set<ll> s;

void dfs(ll num, int len) {
  s.insert(num);
  for (int i = max(num % 10 - 1, 0LL); i <= min(num % 10 + 1, 9LL); i++) {
    if (len + 1 <= 10) {
      dfs(num * 10 + i, len + 1);
    }
  }
}

int main() {

  ll k;
  cin >> k;
  rep(i, 10) dfs(i, 0);

  int pos = 1;
  s.erase(s.find(0));
  irep(i, s) {
    if (pos == k) {
      fin(*i);
      break;
    }
    pos++;
  }
}