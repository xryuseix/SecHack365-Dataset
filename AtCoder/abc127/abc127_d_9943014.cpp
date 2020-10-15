/*
問題文の引用元：https://atcoder.jp/contests/abc127/tasks/abc127_d
D - Integer Cards
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 400 点
問題文 : N 枚のカードがあり、i 番目のカードには整数 A_i
が書かれています。あなたは、j = 1, 2, ..., M について順に以下の操作を 1
回ずつ行います。操作: カードを B_j 枚まで選ぶ(0
枚でもよい)。選んだカードに書かれている整数をそれぞれ C_j に書き換える。M
回の操作終了後に N 枚のカードに書かれた整数の合計の最大値を求めてください。
制約入力は全て整数である。1 \leq N \leq 10^51 \leq M \leq 10^51 \leq A_i, C_i
\leq 10^91 \leq B_i \leq N入力入力は以下の形式で標準入力から与えられる。N MA_1
A_2 ... A_NB_1 C_1B_2 C_2\vdotsB_M C_M出力M 回の操作終了後に N
枚のカードに書かれた整数の合計の最大値を出力せよ。



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

int main(void) {

  ll n, m;
  cin >> n >> m;
  priority_queue<pair<ll, ll>> q;

  rep(i, n) {
    ll a;
    cin >> a;
    q.push(mp(a, 1));
  }
  rep(i, m) {
    ll a, b;
    cin >> a >> b;
    q.push(mp(b, a));
  }
  ll rest = n;
  ll ans = 0;
  while (rest > 0) {
    auto p = q.top();
    q.pop();
    // cout<<p.first<<" "<<p.second<<endl;
    if (p.second <= rest) {
      rest -= p.second;
      ans += p.second * p.first;
    } else {
      ans += rest * p.first;
      rest = 0;
    }
  }
  fin(ans);
}
