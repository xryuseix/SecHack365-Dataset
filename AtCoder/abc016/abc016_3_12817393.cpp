/*
問題文の引用元：https://atcoder.jp/contests/abc016/tasks/abc016_3
C - 友達の友達Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 :
高橋くんはSNSの管理者をしています。このSNSではユーザ同士が友達という関係で繋がることができます。高橋くんはそれぞれのユーザの「友達の友達」が何人いるかを調べることにしました。友達関係が与えられるので、各ユーザの「友達の友達」の人数を求めてください。ただし、自分自身や友達は、「友達の友達」に含みません。入力入力は以下の形式で標準入力から与えられる。N
MA_1 B_1A_2 B_2:A_M B_M1 行目には、ユーザ数 N (1≦N≦10) と友達の組の数 M
(0≦M≦N×(N-1)/2) がスペース区切りで与えられる。各ユーザには 1 から N
までのユーザIDが割り当てられている。2 行目からの M
行では、友達関係にあるユーザのID A_i,B_i (1≦A_i
がスペース区切りで与えられる。ただし、 i≠j ならば (A_i,B_i)≠(A_j,B_j)
を満たす。出力各ユーザの友達の友達の人数をユーザIDの小さい順に一行ごと出力せよ。出力の末尾には改行をつけること。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc016/submissions/12817393
// 提出ID : 12817393
// 問題ID : abc016_3
// コンテストID : abc016
// ユーザID : xryuseix
// コード長 : 3944
// 実行時間 : 1



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
typedef vector<pair<ll, ll>> vpll;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef vector<vector<string>> vvs;
typedef vector<vector<ll>> vvll;
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
#define itn int
// #define endl '\n';
#define fi first
#define se second
#define NONVOID [[nodiscard]]
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

class WAR_FLY {
public:
  vvi d; // 辺の数
  int V; // 頂点の数

  WAR_FLY(int n) {
    V = n;
    d = vector<vector<int>>(n, vector<int>(n));
    for (int i = 0; i < V; i++) {
      for (int j = 0; j < V; j++) {
        if (i == j) {
          d[i][j] = 0;
        } else {
          d[i][j] = INF;
        }
      }
    }
  }

  void warshall_floyd(void) {
    for (int k = 0; k < V; k++) {
      for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
          d[i][j] = min((ll)d[i][j], (ll)d[i][k] + (ll)d[k][j]);
        }
      }
    }
  }

  void add(int from, int to, int cost) { d[from][to] = cost; }

  bool is_negative_loop(void) {
    for (int i = 0; i < V; i++) {
      if (d[i][i] < 0)
        return true;
    }
    return false;
  }

  void show(void) {
    for (int i = 0; i < V; i++) {
      for (int j = 0; j < V; j++) {
        cout << d[i][j] << " ";
      }
      cout << endl;
    }
  }
};

int main() {

  int n, m;
  cin >> n >> m;
  WAR_FLY wa(n);
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    wa.add(a, b, 1);
    wa.add(b, a, 1);
  }
  wa.warshall_floyd();
  rep(i, n) {
    int ans = 0;
    rep(j, n) {
      if (wa.d[i][j] == 2)
        ans++;
    }
    fin(ans);
  }
}
