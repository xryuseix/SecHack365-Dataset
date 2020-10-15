/*
問題文の引用元：https://atcoder.jp/contests/abc116/tasks/abc116_c
C - Grand Garden
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : 花壇に N 本の花が咲いており、それぞれ 1,2,......,N
と番号が振られています。最初、全ての花の高さは 0 です。数列
h=\{h_1,h_2,h_3,......\}
が入力として与えられます。以下の「水やり」操作を繰り返すことで、すべての k(1
\leqq  k \leqq N) に対して花 k の高さを h_k にしたいです。整数 l,r を指定する。l
\leqq x \leqq r を満たすすべての x に対して、花 x の高さを 1
高くする。条件を満たすための最小の「水やり」操作の回数を求めてください。
制約1 \leqq N  \leqq 1000 \leqq h_i \leqq
100入力はすべて整数である。入力入力は以下の形式で標準入力から与えられます。Nh_1
h_2 h_3 ......
h_N出力条件を満たすような最小の「水やり」操作の回数を出力してください。



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

int main(void) {

  int n;
  cin >> n;
  vi v(n);
  rep(i, n) cin >> v[i];
  ll ans = 0;
  rep(i, n) {
    int t = v[i];
    v[i] -= t;
    ans += t;
    for (int j = i + 1; j < n; j++) {
      if (v[j] <= t) {
        t = v[j];
        // ans+=t;
        v[j] = 0;
      } else {
        // ans+=t;
        v[j] -= t;
      }
    }
  }
  fin(ans);
}
