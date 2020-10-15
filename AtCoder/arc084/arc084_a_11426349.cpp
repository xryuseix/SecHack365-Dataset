/*
問題文の引用元：https://atcoder.jp/contests/arc084/tasks/arc084_a
C - Snuke FestivalEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 300 点
問題文 :
今年もすぬけ祭の季節がやってきました。りんごさんは、まず手始めにすぬけ君召喚の儀式を執り行おうと思っています。儀式には祭壇が必要で、祭壇は上部、中部、下部の
3 つのカテゴリーのパーツ 1 つずつからなります。祭壇の 3
カテゴリーのパーツがそれぞれ N 個ずつあります。i 個目の上部のパーツのサイズは
A_i 、i 個目の中部のパーツのサイズは B_i 、i 個目の下部のパーツのサイズは C_i
です。祭壇を作るにあたっては、中部のパーツのサイズは上部のパーツのサイズより真に大きく、下部のパーツのサイズは中部のパーツのサイズより真に大きくなければなりません。逆に、この条件を満たす任意の
3
つのピースを組み合わせて祭壇を作ることができます。りんごさんが作ることのできる祭壇は何種類あるでしょうか。ただし、2
つの祭壇が異なるとは、上部、中部、下部に使われるピースのうち少なくとも 1
つが異なることを言います。
制約1 \leq N \leq 10^51 \leq A_i \leq 10^9(1\leq i\leq N)1 \leq B_i \leq
10^9(1\leq i\leq N)1 \leq C_i \leq 10^9(1\leq i\leq
N)入力は全て整数である入力入力は以下の形式で標準入力から与えられる。NA_1 ...
A_NB_1 ... B_NC_1 ...
C_N出力りんごさんが作ることのできる祭壇の種類数を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/arc084/submissions/11426349
// 提出ID : 11426349
// 問題ID : arc084_a
// コンテストID : arc084
// ユーザID : xryuseix
// コード長 : 2929
// 実行時間 : 160



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
#define STLL(s) strtoll(s.c_str(), NULL, 10)
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
#define MATHPI acos(-1)
#define itn int;
#define endl '\n';
const int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
const int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
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
const ll LLINF = 1LL << 60;
const ll MOD = 1000000007;
const double EPS = 1e-9;

// vector vの中のn以下の数で最大のものを返す
ll bs(vector<ll> &v, ll x) {
  ll ok = -1; //これがx以下
  ll ng = v.size(); // x以上
  // 問題によってokとngを入れ替える
  while (abs(ok - ng) > 1) {
    ll mid = (ok + ng) / 2;
    if (v[mid] <= x)
      ok = mid;
    else
      ng = mid;
  }
  return ok;
}

int main() {

  ll n;
  cin >> n;
  vll a(n), b(n), c(n), v(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];
  rep(i, n) cin >> c[i];
  Sort(a);
  Sort(b);
  Sort(c);
  ll ans = 0;
  rep(i, n) { v[i] = n - bs(c, b[i]) - 1; }
  vll csum(1, 0);
  rep(i, n) csum.pb(csum[i] + v[n - i - 1]);
  reverse(all(csum));
  rep(i, n) {
    ll pos = bs(b, a[i]) + 1;
    // cout<<i<<" "<<pos<<" "<<csum[pos]<<endl;
    ans += csum[pos];
  }
  fin(ans);
}
