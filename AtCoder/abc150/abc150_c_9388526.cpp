/*
問題文の引用元：https://atcoder.jp/contests/abc150/tasks/abc150_c
C - Count Order
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : 大きさ N の順列 ((1,~2,~...,~N) を並び替えてできる数列) P,~Q
があります。大きさ N の順列は N! 通り考えられます。このうち、P が辞書順で a
番目に小さく、Q が辞書順で b 番目に小さいとして、|a - b| を求めてください。注記2
つの数列 X,~Y について、ある整数 k が存在して X_i = Y_i~(1 \leq i < k) かつ X_k
< Y_k が成り立つとき、X は Y より辞書順で小さいと定義されます。
制約2 \leq N \leq 8P,~Q は大きさ N
の順列である。入力は全て整数である。入力入力は以下の形式で標準入力から与えられる。NP_1
P_2 ... P_NQ_1 Q_2 ... Q_N出力|a - b| を出力せよ。28314



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
  }
};
const ll MOD = 1000000007;
const double EPS = 1e-9;
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;

int main(void) {

  int a = INF, b = INF;
  int n;
  cin >> n;
  vi v(n);
  rep(i, n) v[i] = i + 1;
  vi p(n), q(n);
  rep(i, n) cin >> p[i];
  rep(i, n) cin >> q[i];
  int count = 1;
  do {
    if (v == p)
      a = count;
    if (v == q)
      b = count;
    count++;
  } while (next_permutation(v.begin(), v.end()));

  fin(abs(a - b));
}
