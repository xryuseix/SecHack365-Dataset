/*
引用元：https://atcoder.jp/contests/abc132/tasks/abc132_e
E - Hopscotch AddictEditorial
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
