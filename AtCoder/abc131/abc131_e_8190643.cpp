/*
問題文の引用元：https://atcoder.jp/contests/abc131/tasks/abc131_e
E - FriendshipsEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 500 点
問題文 : 以下の条件を満たす N
頂点の無向グラフは存在するでしょうか？グラフは単純かつ連結である。各頂点には 1,
2, ..., N の番号が付けられている。グラフの辺数を M としたとき、各辺には 1, 2,
..., M の番号が付けられていて、辺 i は頂点 u_i と頂点 v_i をつなぐ長さ 1
の辺である。最短距離が 2 であるような頂点対 (i,\ j)\ (i < j) が、ちょうど K
個存在する。条件を満たすグラフが存在するならば 1 つ構築してください。
制約入力は全て整数である。2 \leq N \leq 1000 \leq K \leq \frac{N(N -
1)}{2}入力入力は以下の形式で標準入力から与えられる。N
K出力条件を満たすグラフが存在しなければ -1
を出力せよ。存在するならば、そのようなグラフを 1 つ、以下の形式で出力せよ
(記号の意味は
問題文 : を参照せよ)。Mu_1 v_1:u_M
v_M条件を満たすグラフが複数存在する場合、どれを出力してもよい。
// ソースコードの引用元 : https://atcoder.jp/contests/abc131/submissions/8190643
// 提出ID : 8190643
// 問題ID : abc131_e
// コンテストID : abc131
// ユーザID : xryuseix
// コード長 : 2338
// 実行時間 : 10



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
const int MOD = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 62;

int main(void) {

  int n, k;
  cin >> n >> k;
  if ((n - 1) * (n - 2) / 2 < k) {
    fin(-1);
    return 0;
  }
  vector<vector<int>> g(n);
  for (int i = 1; i < n; i++) {
    g[0].push_back(i);
    g[i].push_back(0);
  }
  int ans = (n - 1) * (n - 2) / 2;
  int pos = 1;
  while (ans > k) {
    // cout<<pos<<" "<<ans<<" "<<k<<endl;
    int next = max(pos + 1, g[pos][g[pos].size() - 1] + 1);
    g[pos].push_back(next);
    g[next].push_back(pos);
    ans--;
    if (g[pos].size() == n - 1)
      pos++;
  }

  vector<pair<int, int>> v;
  for (int i = 0; i < n; i++) {
    for (int j = i; j < g[i].size(); j++) {
      v.push_back(mp(i + 1, g[i][j] + 1));
    }
  }
  cout << v.size() << endl;
  for (int i = 0; i < v.size(); i++) {
    cout << v[i].first << " " << v[i].second << endl;
  }
}
