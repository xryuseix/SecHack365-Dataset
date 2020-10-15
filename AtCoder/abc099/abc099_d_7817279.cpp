/*
問題文の引用元：https://atcoder.jp/contests/abc099/tasks/abc099_d
D - Good GridEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 400 点
問題文 : N 行 N 列からなるグリッドがあり、上から i 行目の左から j 列目のマスを
(i,j) とします。これらのマスは色 1 から 色 C
までのいずれかの色で塗られていなければならず、はじめに (i,j) は色 c_{i,j}
で塗られています。グリッドが、1 \leq i,j,x,y \leq N を満たす任意の i,j,x,y
に対して以下の条件を満たす場合、良いグリッドであるとします。(i+j) \% 3=(x+y) \%
3 ならば (i,j) の色と (x,y) の色は同じ(i+j) \% 3 \neq (x+y) \% 3 ならば (i,j)
の色と (x,y) の色は異なるただし、X \% Y は X を Y
で割った余りを表すこととします。グリッドが良いグリッドになるように 0
個以上のマスを塗り替えます。あるマスにおいて、塗り替える前の色が X
であり、塗り替えた後の色が Y である場合に感じる、そのマスに対して感じる違和感は
D_{X,Y}
です。すべてのマスに対して感じる違和感の和のとりうる最小値を求めてください。
制約1 \leq N \leq 5003 \leq C \leq 301 \leq D_{i,j} \leq 1000 (i \neq
j),D_{i,j}=0 (i=j)1 \leq c_{i,j} \leq
C入力は全て整数入力入力は以下の形式で標準入力から与えられる。N CD_{1,1} ...
D_{1,C}:D_{C,1} ... D_{C,C}c_{1,1} ... c_{1,N}:c_{N,1} ...
c_{N,N}出力すべてのマスに対して感じる違和感の和のとりうる最小値が x のとき、x
を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc099/submissions/7817279
// 提出ID : 7817279
// 問題ID : abc099_d
// コンテストID : abc099
// ユーザID : xryuseix
// コード長 : 3210
// 実行時間 : 85



/*
                   _ooOoo_
                  o8888888o
                  88" . "88
                  (| -_- |)
                  O\  =  /O
               ____/`---'\____
             .'  \\|     |//  `.
            /  \\|||  :  |||//  \
           /  _||||| -:- |||||-  \
           |   | \\\  -  /// |   |
           | \_|  ''\---/''  |   |
           \  .-\__  `-`  ___/-. /
         ___`. .'  /--.--\  `. . __
      ."" '<  `.___\_<|>_/___.'  >'"".
     | | :  `- \`.;`\ _ /`;.`/ - ` : | |
     \  \ `-.   \_ __\ /__ _/   .-` /  /
======`-.____`-.___\_____/___.-`____.-'======
                   `=---='
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
        fozubaoyou    pass System Test!
        from:https://codeforces.com/contest/472/submission/7996840
*/

* /
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
const ll LLINF = 1LL << 60;

int main(void) {

  int n, C;
  cin >> n >> C;
  vvi d(C, vi(C));
  rep(i, C) rep(j, C) cin >> d[i][j];
  vvi c(n, vi(n));
  rep(i, n) rep(j, n) {
    cin >> c[i][j];
    c[i][j]--;
  }

  vvll sum(3, vll(C, INF));

  for (int k = 0; k <= 2; k++) { // sum[k]
    for (int i = 0; i < C; i++) { // sum[k][i]
      int tmp = 0;
      for (int y = 0; y < n; y++) {
        for (int x = 0; x < n; x++) {
          if ((y + x) % 3 == k && c[y][x] != i) {
            tmp += d[c[y][x]][i];
          }
        }
      }
      sum[k][i] = tmp;
    }
  }

  ll ans = INF;
  // cout<<"--------------"<<endl;
  for (int c1 = 0; c1 < C; c1++) {
    for (int c2 = 0; c2 < C; c2++) {
      if (c1 == c2)
        continue;
      for (int c3 = 0; c3 < C; c3++) {
        if (c1 == c3 || c2 == c3)
          continue;
        ll cost;
        // cout<<sum[0][c1]<<" "<<sum[0][c2]<<" "<<sum[0][c3]<<endl;
        cost = sum[0][c1] + sum[1][c2] + sum[2][c3];
        ans = min(ans, cost);
      }
    }
  }

  fin(ans);
  // cout<<"-----------"<<endl;
  // for(int i=0;i<3;i++){
  // 	for(int j=0;j<C;j++){
  // 		cout<<sum[i][j]<<" ";
  // 	}
  // 	cout<<endl;
  // }
}
