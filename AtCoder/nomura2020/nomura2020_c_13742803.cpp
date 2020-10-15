/*
問題文の引用元：https://atcoder.jp/contests/nomura2020/tasks/nomura2020_c
C - Folia
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 600 点
問題文 : 長さ N + 1 の整数列 A_0, A_1, A_2, \ldots, A_N が与えられます。深さ N
の二分木であって、d = 0, 1, \ldots, N に対して深さ d の葉の個数がちょうど A_d
であるものは存在するでしょうか？存在する場合はそのような二分木の頂点数の最大値を、存在しない場合は
-1 を出力してください。注釈二分木とは、根付き木であって、それぞれの頂点の
(直接の) 子の個数が 2 以下であるものを指す。根付き木の葉とは、子の個数が 0
である頂点を指す。根付き木の頂点 v の深さとは、根付き木の根から v
までの距離を指す。(根の深さは 0
である。)根付き木の深さとは、根付き木の頂点の深さの最大値を指す。
制約0 \leq N \leq 10^50 \leq A_i \leq 10^{8} (0 \leq i \leq N)A_N \geq
1入力はすべて整数である入力入力は以下の形式で標準入力から与えられる。NA_0 A_1
A_2 \cdots A_N出力答えを整数で出力せよ。



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
constexpr ld EPS = 1e-11;

int main() {

  int n;
  cin >> n;
  n++;
  vll a(n);
  rep(i, n) cin >> a[i];
  vll M(n);
  M[n - 1] = 0;
  for (int i = n - 2; i >= 0; i--) {
    M[i] = a[i + 1] + M[i + 1];
  }
  if (a[0] != 1 && n == 1) {
    fin(-1);
    return 0;
  }
  if (n > 1 && a[0] > 0) {
    fin(-1);
    return 0;
  }
  // dump(M);
  ll ans = 0;
  ll lef = 1;
  int i;
  for (i = 0; i < n - 1; i++) {
    // cout<<i<<" "<<lef<<endl;
    ans += min(lef, M[i]) + a[i];
    lef = lef * 2 - a[i + 1];
    if (lef < 0) {
      fin(-1);
      return 0;
    }
    if (lef > M[i + 1])
      break;
  }
  for (++i; i < n - 1; i++) {
    ans += M[i] + a[i];
  }
  ans += a[n - 1];
  fin(ans);
}

// int main() {

//     int h,m,h2,m2,k;
//     cin>>h>>m>>h2>>m2>>k;
//     int A,B;
//     A=h*60+m;
//     B=h2*60+m2;
//     B-=k;
//     cout<<A<<" "<<B<<endl;
//     fin(max(0,B-A));
// }

// int main() {

//     string s;
//     cin>>s;
//     rep(i,s.size())if(s[i]=='?')s[i]='D';
//     fin(s);
// }
