/*
問題文の引用元：https://atcoder.jp/contests/dp/tasks/dp_l
L - Deque
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : 太郎君と次郎君が次のゲームで勝負します。最初に、数列 a = (a_1, a_2,
\ldots, a_N) が与えられます。a
が空になるまで、二人は次の操作を交互に行います。先手は太郎君です。a
の先頭要素または末尾要素を取り除く。 取り除いた要素を x
とすると、操作を行った人は x 点を得る。ゲーム終了時の太郎君の総得点を
X、次郎君の総得点を Y とします。太郎君は X - Y を最大化しようとし、次郎君は X -
Y を最小化しようとします。二人が最適に行動すると仮定したとき、X - Y
を求めてください。
制約入力はすべて整数である。1 \leq N \leq 30001 \leq a_i \leq
10^9入力入力は以下の形式で標準入力から与えられる。Na_1 a_2 \ldots
a_N出力二人が最適に行動すると仮定したとき、X - Y を出力せよ。



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

ll dp[2][3010][3010];

ll rec(vi &v, int l, int r, bool turn) {

  ll res = -LLINF * ((!turn) ? 1 : -1);
  if (dp[turn][l][r] != 0) {
    res = dp[turn][l][r];
  } else if (l == r) {
    res = v[l] * ((!turn) ? 1 : -1);
  } else {
    if (!turn) {
      if (l <= r - 1) {
        chmax(res, rec(v, l, r - 1, 1 - turn) + v[r] * ((!turn) ? 1 : -1));
      }
      if (l + 1 <= r) {
        chmax(res, rec(v, l + 1, r, 1 - turn) + v[l] * ((!turn) ? 1 : -1));
      }
    } else {
      if (l <= r - 1) {
        chmin(res, rec(v, l, r - 1, 1 - turn) - v[r]);
      }
      if (l + 1 <= r) {
        chmin(res, rec(v, l + 1, r, 1 - turn) - v[l]);
      }
    }
  }
  // cout<<turn<<" "<<l<<" "<<r<<" "<<res<<endl;

  return dp[turn][l][r] = res;
}

int main(void) {

  int n;
  cin >> n;
  rep(i, 3010) rep(j, 3010) {
    dp[0][i][j] = 0;
    dp[1][i][j] = 0;
  }
  vi v(n);
  rep(i, n) cin >> v[i];

  ll ans = rec(v, 0, n - 1, 0);

  fin(ans);
}