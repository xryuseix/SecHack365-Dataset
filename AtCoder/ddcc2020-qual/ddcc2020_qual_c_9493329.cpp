/*
問題文の引用元：https://atcoder.jp/contests/ddcc2020-qual/tasks/ddcc2020_qual_c
C - Strawberry Cakes
Time Limit : 2 sec / Memory Limit : 1024 MB
配点: 400 点
問題文 : chokudai さんは，DDCC 2020
本戦で参加者に配る長方形のケーキを用意しました．このケーキは，H - 1
本の横方向の切れ目と W - 1 本の縦方向の切れ目により，H \times W
個の区画に等分されています．これらの区画のうち K 個には，それぞれイチゴが 1
個乗っています．  イチゴの位置は，H \times W 個の文字 s_{i, j} (1 \leq i \leq H,
1 \leq j \leq W) によって与えられます．s_{i, j} が # のとき，上から i
行目，左から j 列目の区画にイチゴが乗っており，s_{i, j} が .
のとき乗っていません．# はちょうど K 個出現します．さて，chokudai
さんはこのケーキを切れ目に沿って K
個のピースに切り分け，参加者に配布したいです．ただし，すべてのピースは以下の条件を満たさなければなりません．形状は長方形である．ちょうど
1
個のイチゴを含む．例えば，次のような例が考えられます．条件を満たすケーキの切り分け方を
1
つ求めてください．このような切り分け方は，イチゴの個数や位置にかかわらず必ず存在することが示せます．
制約1 \leq H \leq 3001 \leq W \leq 3001 \leq K \leq H \times Ws_{i, j} は #
または .# は s にちょうど K
個出現する入力入力は以下の形式で標準入力から与えられます.  H W Ks_{1, 1} s_{1,
2} \cdots s_{1, W}s_{2, 1} s_{2, 2} \cdots s_{2, W}:s_{H, 1} s_{H, 2} \cdots
s_{H, W}出力切り分け後の K 個のピースに任意の順で 1, 2, 3, \dots, K
の番号を付け，上から i 行目，左から j 列目の区画が属するピースの番号を a_{i, j}
として，次の形式で出力してください．  a_{1, 1} \ a_{1, 2} \ \cdots \ a_{1,
W}a_{2, 1} \ a_{2, 2} \ \cdots \ a_{2, W}:a_{H, 1} \ a_{H, 2} \ \cdots \ a_{H,
W}複数の切り分け方が考えられる場合，そのうちのどれを出力しても構いません．



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

int main(void) {

  int h, w, k;
  cin >> h >> w >> k;

  vector<string> s(h);
  vvi v(h, vi(w, 0));
  rep(i, h) cin >> s[i];
  int num = 1;
  for (int i = 0; i < h; i++) {
    rep(j, w) {
      if (s[i][j] == '#') {
        v[i][j] = num;
        num++;
      }
    }
  }

  for (int i = 1; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (!v[i][j]) {
        v[i][j] = v[i - 1][j];
      }
    }
  }
  for (int i = h - 2; i >= 0; i--) {
    for (int j = 0; j < w; j++) {
      if (!v[i][j]) {
        v[i][j] = v[i + 1][j];
      }
    }
  }

  for (int i = 1; i < w; i++) {
    for (int j = 0; j < h; j++) {
      if (!v[j][i]) {
        v[j][i] = v[j][i - 1];
      }
    }
  }
  for (int i = w - 2; i >= 0; i--) {
    for (int j = 0; j < h; j++) {
      if (!v[j][i]) {
        v[j][i] = v[j][i + 1];
      }
    }
  }

  rep(i, h) {
    rep(j, w) {
      if (j == 0)
        cout << v[i][0];
      else
        cout << " " << v[i][j];
    }
    cout << endl;
  }
}