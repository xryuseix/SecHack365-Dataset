/*
問題文の引用元：https://atcoder.jp/contests/abc178/tasks/abc178_e
E - Dist MaxEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 500 点
問題文 : 二次元平面上に N 個の点があり、i 番目の点の座標は (x_i,y_i)
です。同じ座標に複数の点があることもあります。異なる二点間のマンハッタン距離として考えられる最大の値はいくつでしょうか。ただし、二点
(x_i,y_i) と (x_j,y_j) のマンハッタン距離は |x_i-x_j|+|y_i-y_j|
のことをいいます。
制約2 \leq N \leq 2 \times 10^51 \leq x_i,y_i \leq
10^9入力はすべて整数入力入力は以下の形式で標準入力から与えられる。Nx_1 y_1x_2
y_2:x_N y_N出力答えを出力せよ。



*/
#include <algorithm>
#include <bitset>
#include <cassert>
#include <cctype>
#include <cfloat>
#include <climits>
#include <cmath>
#include <cstdio>
#include <deque>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <string>
#include <unordered_set>
#include <vector>
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
#define rep(i, n) for (ll i = 0; i < (n); ++i)
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
// #include <atcoder/all>
// using namespace atcoder;
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
  irep(i, v) { cout << (*i) << ((i == --v.end()) ? '\n' : ' '); }
}
template <class T, class U> inline void dump(map<T, U> &v) {
  irep(i, v) { cout << i->first << " " << i->second << '\n'; }
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
constexpr ll LLINF = 1LL << 61;
constexpr ll MOD = 1000000007;
// constexpr ld EPS = 1e-11;

/* --------------------   ここまでテンプレ   -------------------- */

// from :
// https://keiorogiken.wordpress.com/2017/12/14/%E3%82%AD%E3%83%A3%E3%83%AA%E3%83%91%E3%83%BC%E6%B3%95%E3%81%A3%E3%81%A6%E9%9F%BF%E3%81%8D%E3%81%8C%E3%81%AA%E3%82%93%E3%81%8B%E5%A5%BD%E3%81%8D/
#define det(x1, y1, x2, y2) ((x1) * (y2) - (x2) * (y1))
#define max(x, y) ((x) > (y) ? (x) : (y))

typedef struct {
  double x;
  double y;
} Point;

int compare(Point arg1, Point arg2) {
  double p1 = arg1.x - arg2.x, p2 = arg1.y - arg2.y;
  if (p1 > 0 || (p1 == 0 && p2 > 0)) {
    return 1;
  } else if (p1 < 0 || (p1 == 0 && p2 < 0)) {
    return -1;
  } else {
    return 0;
  }
}

void qsort1(int left, int right, vector<Point> &p) {
  int i = left, j = right;
  Point pivot = p[(left + right) / 2];
  if (left >= right)
    return;
  do {
    while (compare(pivot, p[i]) == 1)
      i++;
    while (compare(pivot, p[j]) == -1)
      j--;
    if (i <= j) {
      Point temp = p[i];
      p[i] = p[j];
      p[j] = temp;
      i++;
      j--;
    }
  } while (i <= j);
  qsort1(left, j, p);
  qsort1(i, right, p);
}

int convex_hull(vector<Point> &qs, vector<Point> &ps, int size) {
  int i, t, k = 0;
  qsort1(0, size - 1, ps);
  for (i = 0; i < size; i++) {
    while (k > 1 &&
           det(qs[k - 1].x - qs[k - 2].x, qs[k - 1].y - qs[k - 2].y,
               ps[i].x - qs[k - 1].x, ps[i].y - qs[k - 1].y) <= 0) {
      k--;
    }
    qs[k++] = ps[i];
  }
  for (i = size - 2, t = k; i >= 0; i--) {
    while (k > t &&
           det(qs[k - 1].x - qs[k - 2].x, qs[k - 1].y - qs[k - 2].y,
               ps[i].x - qs[k - 1].x, ps[i].y - qs[k - 1].y) <= 0) {
      k--;
    }
    qs[k++] = ps[i];
  }
  while (qs.size() > k - 1)
    qs.pop_back();
  // qs = (Point *)realloc(qs, sizeof(Point) * (k - 1));
  return (k - 1);
}

double caliper(vector<Point> &qs, int qsize) {
  int i, j, k, si, sj;
  double result = 0;
  if (qsize == 2) {
    return abs(qs[0].x - qs[1].x) + abs(qs[0].y - qs[1].y);
  }
  for (i = j = k = 0; k < qsize; k++) {
    if (compare(qs[i], qs[k]) == -1)
      i = k;
    if (compare(qs[j], qs[k]) == 1)
      j = k;
  }
  si = i;
  sj = j;
  while (i != sj || j != si) {
    result = max(result, abs(qs[i].x - qs[j].x) + abs(qs[i].y - qs[j].y));
    if (det(qs[(i + 1) % qsize].x - qs[i].x, qs[(i + 1) % qsize].y - qs[i].y,
            qs[(j + 1) % qsize].x - qs[j].x,
            qs[(j + 1) % qsize].y - qs[j].y) < 0) {
      i = (i + 1) % qsize;
    } else {
      j = (j + 1) % qsize;
    }
  }
  return result;
}
// 引用ここまで

int main() {
  int i, size, qsize;
  scanf("%d", &size);
  vector<Point> ps(size), qs(size * 2);
  for (i = 0; i < size; i++) {
    scanf("%lf %lf", &ps[i].x, &ps[i].y);
  }
  qsize = convex_hull(qs, ps, size);
  printf("%d\n", (int)caliper(qs, qsize));
}

// int main() {
//     int n;
//     cin >> n;
//     Polygon p;
//     rep(i, n) {
//         double a, b;
//         cin >> a >> b;
//         Point t(a, b);
//         p.push_back(t);
//     }
//     Polygon res = convex_hull(p);
//     vector<pair<int, int>> v;
//     rep(i, res.size()) { v.pb(mp(res[i].real(), res[i].imag())); }
//     // int maxL = 0;
//     // int maxp = 0;
//     // for (int i = 1; i < v.size(); i++) {
//     //     if (dist(v[0], v[i]) > maxL) {
//     //         maxL = dist(v[0], v[i]);
//     //         maxp = i;
//     //     }
//     // }
//     // int ans = maxL;
//     // for (int i = 1; i < v.size(); i++) {
//     //     int d1 = dist(v[i], v[maxp]);
//     //     int ne = i + 1;
//     //     while (ne < v.size() && dist(v[i], v[ne]) > d1) {
//     //         d1 = dist(v[i], v[ne]);
//     //         ne++;
//     //     }
//     //     chmax(ans, d1);
//     //     maxp = ne;
//     //     if(ne>=v.size())break;
//     // }
//     int ans=caliper(v,v.size());
//     fin(ans);
// }
