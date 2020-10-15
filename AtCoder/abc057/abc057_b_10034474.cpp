/*
問題文の引用元：https://atcoder.jp/contests/abc057/tasks/abc057_b
B - Checkpoints
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : xy 平面があり、その上に N 人の学生がいて、M
個のチェックポイントがあります。i 番目の学生がいる座標は (a_i,b_i) (1≦i≦N)
であり、番号 j のチェックポイントの座標は (c_j,d_j) (1≦j≦M) です。
これから合図があり、各学生はマンハッタン距離で一番近いチェックポイントに集合しなければなりません。
2つの地点 (x_1,y_1) と (x_2,y_2) 間のマンハッタン距離は |x_1-x_2|+|y_1-y_2|
で表されます。ここで、|x| は x
の絶対値を表します。ただし、一番近いチェックポイントが複数ある場合には、番号が最も小さいチェックポイントに移動することとします。合図の後に、各学生がどのチェックポイントに移動するかを求めてください。
制約1≦N,M≦50-10^8≦a_i,b_i,c_j,d_j≦10^8 入力は全て整数である。
入力入力は以下の形式で標準入力から与えられる。N Ma_1 b_1:  a_N b_Nc_1 d_1:  c_M
d_M出力解答を N 行に出力せよ。i (1 ≦i≦N) 番目の行には、i
番目の学生が訪れるチェックポイントの番号を出力せよ。



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

  int n, m;
  cin >> n >> m;
  vpii v(n);
  int a, b;
  rep(i, n) {
    cin >> a >> b;
    v[i] = mp(a, b);
  }
  vpii w(m);
  rep(i, m) {
    cin >> a >> b;
    w[i] = mp(a, b);
  }
  rep(i, n) {
    int ans = 1;
    int dis = INF;
    rep(j, m) {
      int dist = abs(v[i].second - w[j].second) + abs(v[i].first - w[j].first);
      if (dis > dist) {
        dis = dist;
        ans = j + 1;
      } else if (dis == dist) {
        ans = min(ans, j + 1);
      }
    }
    fin(ans);
  }
}
