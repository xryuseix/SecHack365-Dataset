/*
問題文の引用元：https://atcoder.jp/contests/abc022/tasks/abc022_d
D - Big Bang
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 :
宇宙はビッグバンによって誕生して以来、膨張し続けていることが知られています。天文学者である高橋君はその宇宙の膨張の速度を計測することにしました。高橋君はある
2 つの日について、同じ N
個の星の位置を観測しました。星の位置は座標平面上の点として記録されます。つまり各日の観測結果は座標平面上の
N 個の点からなる点集合になります。2 回の観測の結果を見比べてみると、1
回目の観測結果である点集合に対して以下の 3 つの操作を順に実行すると 2
回目の観測結果である点集合に一致することがわかりました。同じ向きに同じ距離だけ平行移動する。原点を中心に同じ角度だけ回転する。原点を中心に
P 倍 (1 ≦ P) に相似拡大する。つまり点 (a, b) を点 (a×P, b×P)
に移すという操作をすべての点に実行する。ここで P
の値がわかれば膨張速度を求めることができそうです。いざ P
を求めようとした高橋君でしたが、うっかりどの点がどの星に対応するのか記したデータをなくしてしまいました。そこで高橋君は優秀なプログラマーであるあなたに助けを借りることにしました。1
回目と 2 回目の観測結果が与えられるので P
を求めてください。入力入力は以下の形式で標準入力から与えられるNAx_1 Ay_1Ax_2
Ay_2:Ax_N Ay_NBx_1 By_1Bx_2 By_2:Bx_N By_N1 行目には高橋君が観測した星の個数 N
(2 ≦ N ≦ 10^5) が与えられる。2 行目からの N 行のうち i 行目には 1
回目に観測された i 番目の星の位置の x 座標と y 座標の値を表す 2 つの整数 Ax_i,
Ay_i (-15,000 ≦Ax_i, Ay_i ≦ 15,000) が空白区切りで与えられる。N+2 行目からの N
行のうち i 行目には 2 回目に観測された i 番目の星の位置の x 座標と y
座標の値を表す 2 つの整数 Bx_i, By_i (-10^9 ≦Bx_i, By_i ≦ 10^9)
が空白区切りで与えられる。1 回目も 2
回目も、同じ点に複数の星が観測されることはない。1 回目に観測された i 番目の星と
2 回目に観測された i
番目の星が同一の星とは限らない。部分点この問題には部分点が設定されている。1 ≦ N
≦ 3,000を満たすデータセットに正解した場合は 50 点が与えられる。1 ≦ N ≦
10^5を満たすデータセットに正解した場合はさらに 50
点が与えられる。合計で100点となる。出力P の値を 1
行に出力せよ。出力は絶対誤差あるいは相対誤差の少なくとも片方が 10^{-6}
以下であれば許容される。出力の末尾にも改行を入れること。



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
#include <cassert>
#include <climits>
#include <string>
#include <bitset>
#include <cfloat>
#include <random>
#include <iomanip>
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
typedef vector<pair<ll, ll>> vpll;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef vector<vc> vvc;
typedef vector<vs> vvs;
typedef vector<vll> vvll;
typedef map<int, int> mii;
typedef set<int> si;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
#define arep(i, v) for (auto i : v)
#define irep(it, stl) for (auto it = stl.begin(); it != stl.end(); it++)
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define fin(ans) cout << (ans) << '\n'
#define STLL(s) strtoll(s.c_str(), NULL, 10)
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
#define MATHPI acos(-1)
#define fi first
#define se second
constexpr int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
constexpr int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
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
template <class T> inline void dump(T &v) {
  irep(i, v) { cout << *i << ((i == --v.end()) ? '\n' : ' '); }
}
inline string getline() {
  string s;
  getline(cin, s);
  return s;
}
inline void yn(const bool b) { b ? fin("yes") : fin("no"); }
inline void Yn(const bool b) { b ? fin("Yes") : fin("No"); }
inline void YN(const bool b) { b ? fin("YES") : fin("NO"); }
struct io {
  io() {
    ios::sync_with_stdio(false);
    cin.tie(0);
  }
};
const int INF = INT_MAX;
constexpr ll LLINF = 1LL << 60;
constexpr ll MOD = 1000000007;
constexpr double EPS = 1e-9;

int main() {

  double x1 = 0, x2 = 0, y1 = 0, y2 = 0;
  int n;
  cin >> n;
  vpii v(n), w(n);
  rep(i, n) {
    double a, b;
    cin >> a >> b;
    v[i] = mp(a, b);
    x1 += a;
    y1 += b;
  }
  rep(i, n) {
    double a, b;
    cin >> a >> b;
    w[i] = mp(a, b);
    x2 += a;
    y2 += b;
  }

  x1 /= n;
  x2 /= n;
  y1 /= n;
  y2 /= n;
  double disA = 0;
  double disB = 0;
  rep(i, n) {
    chmax(disA, sqrt((v[i].fi - x1) * (v[i].fi - x1) +
                     (v[i].se - y1) * (v[i].se - y1)));
    chmax(disB, sqrt((w[i].fi - x2) * (w[i].fi - x2) +
                     (w[i].se - y2) * (w[i].se - y2)));
  }
  if (disA == 0) {
    double ans = (w[0].se * w[0].se + w[0].fi * w[0].fi) /
                 (v[0].se * v[0].se + v[0].fi * v[0].fi);
    printf("%.6f\n", ans);
  } else {
    printf("%.6f\n", disB / disA);
  }
}
