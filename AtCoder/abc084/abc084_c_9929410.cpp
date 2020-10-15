/*
問題文の引用元：https://atcoder.jp/contests/abc084/tasks/abc084_c
C - Special Trains
Time Limit : 3 sec / Memory Limit : 256 MB
配点 : 300 点
問題文 : Atcoder国に、 1 本の東西方向に走る鉄道が完成しました。この鉄道には N
個の駅があり、西から順に 1,2,...,N
の番号がついています。明日、鉄道の開通式が開かれます。この鉄道では、1≦i≦N-1
を満たす全ての整数 i に対して、駅 i から駅 i+1 に、C_i
秒で向かう列車が運行されます。ただし、これら以外の列車は運行されません。駅 i
から駅 i+1 に移動する列車のうち最初の列車は、開通式開始 S_i 秒後に駅 i
を発車し、その後は F_i 秒おきに駅 i を発車する列車があります。また、S_i は F_i
で割り切れることが保証されます。つまり、A％B で A を B
で割った余りを表すとき、S_i≦t,t％F_i=0 を満たす全ての t に対してのみ、開通式開始
t 秒後に駅 i を出発し、開通式開始 t+C_i 秒後に駅 i+1
に到着する列車があります。列車の乗り降りにかかる時間を考えないとき、全ての駅 i
に対して、開通式開始時に駅 i にいる場合、駅 N
に到着できるのは最も早くて開通式開始何秒後か、答えてください。
制約1≦N≦5001≦C_i≦1001≦S_i≦10^51≦F_i≦100S_i％F_i=0入力は全て整数入力入力は以下の形式で標準入力から与えられる。NC_1
S_1 F_1:C_{N-1} S_{N-1} F_{N-1}出力i 行目 (1≦i≦N) に、開通式開始時に駅 i
にいる場合、駅 N に到着できるのが最も早くて開通式開始 x 秒後のとき、x
を出力せよ。



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
#define irep(it, stl) for (auto it = stl.begin(); it != stl.end(); it++)
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
#define itn int;
int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
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
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;
const ll MOD = 1000000007;
const double EPS = 1e-9;

int main(void) {

  ll n;
  cin >> n;
  vll c(n), s(n), f(n);
  rep(i, n - 1) { cin >> c[i] >> s[i] >> f[i]; }
  for (int i = 0; i < n; i++) {
    ll now = 0;
    for (int j = i; j < n - 1; j++) {
      ll t = ceil(max(0LL, now - s[j]) / (double)f[j]);
      now = t * f[j] + s[j];
      now += c[j];
    }
    fin(now);
  }
}
