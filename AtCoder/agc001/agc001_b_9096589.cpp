/*
問題文の引用元：https://atcoder.jp/contests/agc001/tasks/agc001_b
B - Mysterious Light
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 500 点
問題文 : 高橋君は 1 辺の長さが N の 3
枚の鏡を正三角形状に組み合わせました。三角形の頂点をそれぞれ a, b, c
とします。高橋君は、辺 ab 上の頂点 a から X の点から、辺 bc
と平行に不思議な光を発射しました。不思議な光は、普通の光と同じように真っすぐ進み、鏡に当たると反射するのですが、不思議な光がすでに通った点に当たったときにも反射をします。例えば、N
= 5, X = 2
のとき、不思議な光の軌跡は図の黄色い矢印のようになります。このように不思議な光を発射した時、不思議な光は必ず発射した点に戻ってくることが証明できます。このとき、光の軌跡の長さが全体でいくらになるかを求めて下さい。
制約2≦N≦10^{12}1≦X≦N-1N と X はいずれも整数である。部分点N≦1000
を満たすデータセットに正解した場合は、300 点が与えられる。追加
制約のないデータセットに正解した場合は、上記とは別に 200
点が与えられる。入力入力は以下の形式で標準入力から与えられる。N
X出力光の軌跡全体の長さを出力せよ。91047



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

ll solve(ll a, ll b) {
  if (a > b)
    swap(a, b);
  if (b % a != 0) {
    return solve(a, b % a) + 2 * (b / a) * a;
  } else {
    return a * (2 * (b / a) - 1);
  }
}

int main(void) {

  ll n, x;
  cin >> n >> x;

  cout << solve(x, n - x) + n << endl;
}
