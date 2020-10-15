/*
問題文の引用元：https://atcoder.jp/contests/abl/tasks/abl_c
C - Connect CitiesEditorial
Time Limit : 2 sec / Memory Limit : 1024 MBScore : 300 pointsProblem
StatementThere are N cities numbered 1 through N, and M bidirectional roads
numbered 1 through M.Road i connects City A_i and City B_i.Snuke can perform the
following operation zero or more times:Choose two distinct cities that are not
directly connected by a road, and build a new road between the two cities.After
he finishes the operations, it must be possible to travel from any city to any
other cities by following roads (possibly multiple times).What is the minimum
number of roads he must build to achieve the goal?Constraints2 \leq N \leq
100,0001 \leq M \leq 100,0001 \leq A_i < B_i \leq NNo two roads connect the same
pair of cities.All values in input are integers.InputInput is given from
Standard Input in the following format:N MA_1 B_1:A_M B_MOutputPrint the
answer.Sample Input 13 11 2Sample Output 11Initially, there are three cities,
and there is a road between City 1 and City 2.Snuke can achieve the goal by
building one new road, for example, between City 1 and City 3.After that,We can
travel between 1 and 2 directly.We can travel between 1 and 3 directly.We can
travel between 2 and 3 by following both roads (2 - 1 - 3).
配点 : 300 点
問題文 : N 個の都市 (1 番から N 番まで) と M 個の双方向道路 (1 番から M 番まで)
があります。道路 i は都市 A_i と都市 B_i を結びます。すぬけ君は、以下の操作を 0
回以上行うことができます。道路で直接結ばれていない二つの異なる都市を選び、間に道路を作る。操作を終えた後、どの都市からどの都市へも
(場合によっては複数回)
道路をたどることで到達できるようになっていなければいけません。目的を達成するために、最低何個の道路を作ればよいですか？
制約2 \leq N \leq 100,0001 \leq M \leq 100,0001 \leq A_i < B_i \leq
Nどの二つの道路も同じ都市のペアを結ばない。入力は全て整数である。入力入力は以下の形式で標準入力から与えられる。N
MA_1 B_1:A_M B_M出力答えを出力せよ。



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
#include <atcoder/all>
using namespace atcoder;
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
constexpr ld EPS = 1e-11;

/* --------------------   ここまでテンプレ   -------------------- */

class UnionFind {
public:
  // 親の番号を格納．親だった場合は-(その集合のサイズ)
  vector<int> Parent;
  // 重さの差を格納
  vector<ll> diffWeight;

  UnionFind(const int N) {
    Parent = vector<int>(N, -1);
    diffWeight = vector<ll>(N, 0);
  }

  // Aがどのグループに属しているか調べる
  int root(const int A) {
    if (Parent[A] < 0)
      return A;
    int Root = root(Parent[A]);
    diffWeight[A] += diffWeight[Parent[A]];
    return Parent[A] = Root;
  }

  // 自分のいるグループの頂点数を調べる
  int size(const int A) { return -Parent[root(A)]; }

  // 自分の重さを調べる
  ll weight(const int A) {
    root(A); // 経路圧縮
    return diffWeight[A];
  }

  // 重さの差を計算する
  ll diff(const int A, const int B) { return weight(B) - weight(A); }

  // AとBをくっ付ける
  bool connect(int A, int B, ll W = 0) {
    // Wをrootとの重み差分に変更
    W += weight(A);
    W -= weight(B);

    // AとBを直接つなぐのではなく、root(A)にroot(B)をくっつける
    A = root(A);
    B = root(B);

    if (A == B) {
      //すでにくっついてるからくっ付けない
      return false;
    }

    // 大きい方(A)に小さいほう(B)をくっ付ける
    // 大小が逆だったらひっくり返す
    if (size(A) < size(B)) {
      swap(A, B);
      W = -W;
    }

    // Aのサイズを更新する
    Parent[A] += Parent[B];
    // Bの親をAに変更する
    Parent[B] = A;

    // AはBの親であることが確定しているのでBにWの重みを充てる
    diffWeight[B] = W;

    return true;
  }
};

int main() {
  int n;
  cin >> n;
  UnionFind uni(n);
  int m;
  cin >> m;
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    uni.connect(a, b);
  }
  int ans = 0;
  rep(i, n) {
    if (uni.root(i) == i)
      ans++;
  }
  ans--;
  fin(ans);
}
