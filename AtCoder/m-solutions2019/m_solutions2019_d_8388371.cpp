/*
問題文の引用元：https://atcoder.jp/contests/m-solutions2019/tasks/m_solutions2019_d
D - Maximum Sum of MinimumEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB  var hostname = location.host;  var
taskname = location.pathname.split('/')[2];  if( hostname ==
"m-solutions2019.contest.atcoder.jp" ){  location.href =
"https://atcoder.jp/contests/m-solutions2019/tasks/"+taskname;  }
配点 : 500 点
問題文 : N 個の頂点 1,2,\ldots,N からなる木 T と正の整数 c_1,c_2,\ldots,c_N
が与えられます。i(1 \leq i \leq N-1) 番目の辺は頂点 a_i と頂点 b_i
をつなぐ辺です。T
の各頂点に正の整数を書き込んだとき、以下のようにしてスコアを計算します。各辺に、2
つの端点に書き込まれた整数のうち小さい方を書き込む。各辺に書き込まれた整数の総和をスコアとする。T
の各頂点に c_1,c_2,\ldots,c_N を 1
つずつ書き込んだときのスコアの最大値を求め、それを達成する正の整数の書き込み方を
1 つ構成してください。c_1,c_2,\ldots,c_N
に複数回現れる整数があるときは、その整数はその回数だけ使わなければならないことに注意してください。
制約1 \leq N \leq 100001 \leq a_i,b_i \leq N1 \leq c_i \leq
10^5与えられるグラフは木である入力入力は以下の形式で標準入力から与えられる。Na_1
b_1:a_{N-1} b_{N-1}c_1 \ldots c_N出力次の形式で出力せよ。Md_1 \ldots d_NM
はスコアの最大値を表す。d_i は頂点 i
に書き込むべき整数を表す。d_1,d_2,\ldots,d_N は c_1,c_2,\ldots,c_N
の並べ替えでなければならない。最大のスコアを達成する方法が複数個あるときは、そのうちのどれを出力してもよい。
// ソースコードの引用元 :
https://atcoder.jp/contests/m-solutions2019/submissions/8388371
// 提出ID : 8388371
// 問題ID : m_solutions2019_d
// コンテストID : m-solutions2019
// ユーザID : xryuseix
// コード長 : 2377
// 実行時間 : 12



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
const int MOD = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 62;

int num = 0;

void dfs(vi &score, vi &c, vvi &G, int pos) {
  score[pos] = c[num];
  for (int i = 0; i < G[pos].size(); i++) {
    if (score[G[pos][i]] == -1) {
      num++;
      dfs(score, c, G, G[pos][i]);
    }
  }
  return;
}

int main(void) {

  int n;
  cin >> n;
  vvi G(n);
  vi l(n - 1), r(n - 1);
  rep(i, n - 1) {
    int a, b;
    cin >> a >> b;
    G[a - 1].push_back(b - 1);
    G[b - 1].push_back(a - 1);
    l[i] = a - 1;
    r[i] = b - 1;
  }
  vi c(n);
  rep(i, n) cin >> c[i];
  Rort(c);
  vi score(n, -1);

  dfs(score, c, G, 0);
  ll ans = 0;
  for (int i = 0; i < n - 1; i++) {
    ans += min(score[l[i]], score[r[i]]);
  }
  fin(ans);
  for (int i = 0; i < n; i++) {
    if (i == 0)
      cout << score[i];
    else
      cout << " " << score[i];
  }
  cout << endl;
}
