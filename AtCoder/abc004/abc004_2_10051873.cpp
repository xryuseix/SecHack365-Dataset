/*
問題文の引用元：https://atcoder.jp/contests/abc004/tasks/abc004_2
B - 回転
Time Limit : 2 sec / Memory Limit : 64 MB
問題文 :             高橋君は 4 x 4 マスの盤面を見つけました。        各マスには
.ox のいずれかの文字が書かれています。
彼はこの盤面を回転させた後、どういった状態になるのか気になりました。
盤面を正面から見たときの状態が与えられるので、180
度回転させた後の盤面を出力してください。        入力
入力は以下の形式で標準入力から与えられる。c_{0,0} c_{0,1} c_{0,2} c_{0,3}c_{1,0}
c_{1,1} c_{1,2} c_{1,3}c_{2,0} c_{2,1} c_{2,2} c_{2,3}c_{3,0} c_{3,1} c_{3,2}
c_{3,3}        1 行目から 4
行目にわたって、盤面の初期状態が半角スペース区切りで与えられる。
c_{i,j} (0≦i, j≦3) は 盤面のマスを意味し、 .ox から構成される。
出力            180
度回転させた後の盤面を入力と同じフォーマットで出力してください。また、出力の末尾には改行を入れること。



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

  // int n,m;
  // cin>>n>>m;
  // vvi v(n);
  // rep(i,m){
  //     int a,b;
  //     cin>>a>>b;
  //     a--;b--;
  //     v[a].pb(b);
  //     v[b].pb(a);
  // }
  // rep(i,n){
  //     fin(v[i].size());
  // }
  vvc v(4, vc(4));
  rep(i, 4) {
    rep(j, 4) { cin >> v[i][j]; }
  }
  for (int i = 3; i >= 0; i--) {
    for (int j = 3; j >= 0; j--) {
      cout << v[i][j];
      if (j > 0)
        cout << ' ';
    }
    cout << endl;
  }
  cout << endl;
}
