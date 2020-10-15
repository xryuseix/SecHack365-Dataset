/*
問題文の引用元：https://atcoder.jp/contests/cf16-final/tasks/codefestival_2016_final_c
C - Interpretation
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 400 点
問題文 : ある星には M 種類の言語があり、1 \sim M
の番号が付けられています。この星のある年のCODE FESTIVALには星中から N
人の参加者が集まりました。i (1≦i≦N) 人目の参加者は K_i 種類の言語 L_{i,1},
L_{i,2}, ..., L_{i,{}K_i} を話すことが出来ます。ある 2
人は以下のいずれかの条件を満たすときに限り、コミュニケーションを取ることが出来ます。2
人ともが話すことの出来る言語が存在する。ある人 X が存在して、 2 人ともが X
とコミュニケーションを取ることが出来る。このとき、N
人すべての参加者が他のすべての参加者とコミュニケーションを取ることが出来るかどうかを判定してください。
制約2≦N≦10^51≦M≦10^51≦K_i≦MK_iの総和≦10^51≦L_{i,j}≦ML_{i,1}, L_{i,2}, ...,
L_{i,{}K_i} は相異なる。部分点N≦1000 かつ M≦1000 かつ K_iの総和≦1000
を満たすデータセットに正解した場合は、200 点が与えられる。追加
制約のないデータセットに正解した場合は、上記とは別に 200
点が与えられる。入力入力は以下の形式で標準入力から与えられる。N MK_1 L_{1,1}
L_{1,2} ... L_{1,{}K_1}K_2 L_{2,1} L_{2,2} ... L_{2,{}K_2}:K_N L_{N,1} L_{N,2}
... L_{N,{}K_N}出力N
人すべての参加者が他のすべての参加者とコミュニケーションを取ることが出来るなら
YES を、そうでないなら NO を出力せよ。



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

  int n, m;
  cin >> n >> m;
  UnionFind uni(n + m);
  rep(i, n) {
    int k;
    cin >> k;
    rep(j, k) {
      int a;
      cin >> a;
      a--;
      uni.connect(i, a + n);
    }
  }
  int root = uni.root(0);
  int ch = 1;
  rep(i, n) {
    // cout<<i<<" "<<uni.root(i)<<endl;
    ch &= (uni.root(i) == root);
  }
  YN(ch);
}
