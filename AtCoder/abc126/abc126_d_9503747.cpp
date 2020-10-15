/*
問題文の引用元：https://atcoder.jp/contests/abc126/tasks/abc126_d
D - Even Relation
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 400 点
問題文 : N 頂点の木があります。この木の i 番目の辺は頂点 u_i と頂点 v_i
を結んでおり、その長さは w_i
です。あなたは以下の条件を満たすように、この木の頂点を白と黒の 2
色で塗り分けたいです
(すべての頂点を同じ色で塗っても構いません)。同じ色に塗られた任意の 2
頂点について、その距離が偶数である。条件を満たす塗り分け方を 1
つ見つけて出力してください。この問題の
制約下では、そのような塗り分け方が必ず 1 つは存在することが証明できます。
制約入力は全て整数である。1 \leq N \leq 10^51 \leq u_i < v_i \leq N1 \leq w_i
\leq 10^9入力入力は以下の形式で標準入力から与えられる。Nu_1 v_1 w_1u_2 v_2
w_2...u_{N - 1} v_{N - 1} w_{N -
1}出力題意の条件を満たすような頂点の塗り分け方を N 行に分けて出力せよ。i
行目には、頂点 i を白く塗る場合は 0 を、黒く塗る場合は 1
を出力せよ。条件を満たす塗り分け方が複数存在する場合、どれを出力してもよい。



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

vector<vector<pair<int, int>>> g(101010);
vi ans(101010, -1);
vb used(101010, false);

void dfs(int n, int s) {
  // cout<<"n;"<<n<<endl;
  rep(i, g[n].size()) {
    if (used[g[n][i].first])
      continue;
    used[g[n][i].first] = 1;
    if (g[n][i].second % 2 == 0) {
      ans[g[n][i].first] = s;
      dfs(g[n][i].first, s);
    } else {
      ans[g[n][i].first] = 1 - s;
      dfs(g[n][i].first, 1 - s);
    }
  }
}

int main(void) {

  int n;
  cin >> n;
  rep(i, n - 1) {
    int u, v, w;
    cin >> u >> v >> w;
    u--;
    v--;
    g[u].pb(mp(v, w));
    g[v].pb(mp(u, w));
  }
  used[0] = 1;
  ans[0] = 0;
  dfs(0, 0);
  rep(i, n) fin(ans[i]);
}
