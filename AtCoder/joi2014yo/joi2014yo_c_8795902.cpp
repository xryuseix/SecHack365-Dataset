/*
問題文の引用元：https://atcoder.jp/contests/joi2014yo/tasks/joi2014yo_c
C - 超都観光 (Super Metropolis)Editorial
Time Limit : 10 sec / Memory Limit : 256 MB
配点: 100 点問題JOI 君は，IOI
国にある超都という都市の観光ツアーを計画することになった．超都は，南北方向にまっすぐに伸びる
W 本の道路と，東西方向にまっすぐに伸びる H
本の道路により，碁盤の目の形に区分けされている．南北方向の W
本の道路には，西から順に 1, 2, ... , W の番号が付けられている．また，東西方向の
H 本の道路には，南から順 に 1, 2, ... , H の番号が付けられている．西から i 番目
の南北方向の道路と，南から j 番目の東西方向の道路との交差点を (i, j)
で表す．さらに，下図のように，各交差点からは１つ北東の交差点への道がある（最も北の道路上の交差点と最も東の道路上の交差点を除く）．
また，１つ南西の交差点への道もある（最も南の道路上の交差点と最も西の道路上の交差点を除く）．
すなわち，交差点 (i, j) からは，もし交差点 (i - 1, j), (i + 1, j), (i, j - 1),
(i, j + 1) があるときは，それら
の交差点へ１本の道を使って行くことが出来る．それに加え，もし交差点 (i - 1, j -
1), (i + 1, j + 1)
があるときは，それらの交差点へも１本の道を使って行くことが出来る．JOI
君はツアーの計画として既に N
個の観光スポットをどのような順番で訪れるかを決めている． i 番目 (1 \leq i \leq
N) に 訪れる観光スポットは交差点 (X_i, Y_i) にある． JOI 君は，ツアーに
かかる時間をできるだけ短くするために，通らなければならない道の本数を少なくし
たい．
観光スポットを事前に決めた順番で訪れるために通らなければならない道の本数の合計の最小値を求めるプログラムを作成せよ．ただし，ツアーの開始地点は交差点
(X_1, Y_1) である．また，ツア ーの途中で超都の外へ移動してはならないものとする．
また，JOI
君は，観光スポットのある交差点を，観光スポットを訪れずに通過することもできる．（予選競技実施後に追記）
「道の本数の合計」についての補足．ツアーの途中で同じ道を 2
回以上通ることもできる．その場合，「道
の本数の合計」としては，その道については通った回数だけ重複して数えるものとす
る．入力入力は 1 + N 行からなる．1 行目には，空白を区切りとして 3 つの整数 W, H,
N (2 \leq W \leq 10000, 2 \leq H \leq 10000, 1 \leq N \leq 1000)
が書かれている．続く N 行のうちの i 行目 (1 \leq i \leq N) には， 2 つの整数
X_i, Y_i (1 \leq Xi \leq W, 1 \leq Yi \leq H)
が空白を区切りとして書かれている．これは， i
番目に訪れる観光スポットのある交差点が (X_i, Y_i) であることを表
す．出力観光スポットを順番に訪れるために通る道の本数の合計の最小値を 1
行で出力せよ．
// ソースコードの引用元 :
https://atcoder.jp/contests/joi2014yo/submissions/8795902
// 提出ID : 8795902
// 問題ID : joi2014yo_c
// コンテストID : joi2014yo
// ユーザID : xryuseix
// コード長 : 2045
// 実行時間 : 2



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

int route(pair<int, int> a, pair<int, int> b) {
  if (a.first > b.first)
    swap(a, b);
  int ans = abs(a.first - b.first) + abs(a.second - b.second);
  if (a.second <= b.second) {
    ans -= min(abs(a.first - b.first), abs(a.second - b.second));
  }
  return ans;
}

int main(void) {

  int w, h, n;
  cin >> w >> h >> n;
  vpii v(n);
  rep(i, n) {
    itn a, b;
    cin >> a >> b;
    v[i] = mp(a, b);
  }
  ll ans = 0;
  rep(i, n - 1) { ans += route(v[i], v[i + 1]); }
  fin(ans);
}
