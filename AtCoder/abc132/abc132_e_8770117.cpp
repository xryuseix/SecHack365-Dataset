/*
問題文の引用元：https://atcoder.jp/contests/abc132/tasks/abc132_e
E - Hopscotch AddictEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 500 点
問題文 : ケンくんはけんけんぱが大好きです。今日は有向グラフ G
の上でけんけんぱをすることにしました。G は 1 から N で番号付けされた N
頂点および M 辺からなり、i 番目の辺は頂点 u_i から頂点 v_i
に接続しています。ケンくんははじめ頂点 S にいて、頂点 T
までけんけんぱで移動したいです。1
回のけんけんぱでは、「自分の今いる頂点から出ている辺を 1
つ選んで、その辺が接続する頂点に移動する」という操作をちょうど 3
回連続で行います。ケンくんが頂点 T
に移動することができるか、また移動できるなら最小何回のけんけんぱで頂点 T
まで移動することができるかを答えてください。けんけんぱの操作の途中で頂点 T
に訪れても、「頂点 T に移動できた」とは見なさないことに注意してください。
制約2 \leq N \leq 10^50 \leq M \leq \min(10^5, N (N-1))1 \leq u_i, v_i \leq N(1
\leq i \leq M)u_i \neq v_i (1 \leq i \leq M)i \neq j ならば (u_i, v_i) \neq
(u_j, v_j)1 \leq S, T \leq NS \neq
T入力入力は以下の形式で標準入力から与えられる。N Mu_1 v_1:u_M v_MS
T出力何回けんけんぱを繰り返しても頂点 S から頂点 T へ移動できない場合には、-1
を出力せよ。移動できる場合には、移動するのに必要なけんけんぱの最小回数を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc132/submissions/8770117
// 提出ID : 8770117
// 問題ID : abc132_e
// コンテストID : abc132
// ユーザID : xryuseix
// コード長 : 2433
// 実行時間 : 84



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
#define fin(ans) cout << (ans) << endl
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
  };
};
const ll MOD = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 62;

int dist[100010][3];

int main(void) {

  int n, m;
  cin >> n >> m;
  vvi v(n);
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    v[a].push_back(b);
  }
  int sv, tv;
  cin >> sv >> tv;
  sv--;
  tv--;
  rep(i, n) rep(h, 3) dist[i][h] = INF;
  dist[sv][0] = 0;
  queue<pair<int, int>> q;
  q.push(mp(sv, 0));
  while (!q.empty()) {
    int a = q.front().first;  //場所
    int b = q.front().second; //状態
    q.pop();
    for (int i = 0; i < v[a].size(); i++) {
      if (dist[v[a][i]][(b + 1) % 3] != INF)
        continue;
      q.push(mp(v[a][i], (b + 1) % 3));
      dist[v[a][i]][(b + 1) % 3] = dist[a][b] + 1;
    }
  }
  int ans = dist[tv][0];
  ans /= 3;
  if (ans == INF / 3)
    ans = -1;
  if (sv != tv && ans == 0)
    ans = -1;
  fin(ans);

  // rep(i,n){rep(j,3){
  //     cout<<dist[i][j]<<" ";
  // }cout<<endl;
  // }
}
