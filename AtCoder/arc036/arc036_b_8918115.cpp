/*
問題文の引用元：https://atcoder.jp/contests/arc036/tasks/arc036_b
B - 山のデータEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 :
高橋くんは、東西方向に並んだ地点の高さをまとめたデータを持っている。西から i (1
≦ i ≦ N) 番目の地点の高さは h_i
である。このデータの中には同じ高さの地点は存在しなかった。高橋くんはデータに対し、以下のように「山」および「山の大きさ」を定義することにした。3
つの整数の組 (s,t,u) (1 ≦ s ≦ t ≦ u ≦ N)
について、以下の条件を満たすとき、この組は山を表しているとする。山の西側に関する条件
: s ≦ i ≦ t-1 を満たす任意の整数 i に関して、h_i ＜
h_{i+1}が成立する。山の東側に関する条件 : t ≦ i ≦ u-1 を満たす任意の整数 i
に関して、h_i ＞ h_{i+1}が成立する。このような条件を満たす整数組 (s,t,u)
に関して、山の大きさは、u-s+1
で定義される。高橋くんは、データ中にある山の中で、山の大きさの最大値がいくらになるのかを調査することにした。山の大きさとして考えられる最大値を求めるプログラムを作成せよ。入力入力は以下の形式で標準入力から与えられる。Nh_1h_2:h_N1
行目には、データの要素数を表す整数 N (1 ≦ N ≦ 3×10^5) が与えられる。2 行目から N
行では、地点の高さを表す整数が与えられる。N 行のうち i 行目では、整数 h_i (1 ≦
h_i ≦ 10^9) が与えられる。1 ≦ i ＜ j ≦ N を満たす任意の整数 i,j に関して、h_i ≠
h_j である。部分点この問題には部分点が設定されている。N ≦ 20
を満たすデータセットに正解した場合は、30 点が与えられる。追加
制約のないデータセットに正解した場合は、上記とは別に 70
点が与えられる。出力山の大きさとして考えられる最大値を 1
行に出力せよ。出力の末尾には改行を入れること。
// ソースコードの引用元 : https://atcoder.jp/contests/arc036/submissions/8918115
// 提出ID : 8918115
// 問題ID : arc036_b
// コンテストID : arc036
// ユーザID : xryuseix
// コード長 : 2548
// 実行時間 : 122



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
const double EPS = 1e-9;
const int INF = INT_MAX;
const ll LLINF = 1LL << 62;

int main(void) {

  ll n;
  cin >> n;
  vll h(n);
  rep(i, n) cin >> h[i];

  ll pos = 0;
  bool ch = 1;
  if (n == 1) {
    fin(1);
    return 0;
  }
  if (h[0] > h[1])
    ch = 0;
  vll v, w;
  while (pos < n) {
    // cout<<h[pos]<<" ";
    ll len = 1;
    ll tmp = pos;
    if (ch) {
      while (tmp + 1 < n && h[tmp] < h[tmp + 1]) {
        tmp++;
        len++;
      }
    } else {
      while (tmp + 1 < n && h[tmp] > h[tmp + 1]) {
        tmp++;
        len++;
      }
    }
    // cout<<len<<endl;
    pos += max(len - 1, 1LL);
    v.push_back(len);
    w.push_back(ch);
    ch = 1 - ch;
  }
  ll ans = 0;
  rep(i, v.size()) {
    if (w[i] == 0) {
      ans = max(ans, v[i]);
    } else if (w[i] && i < v.size() - 1) {
      ans = max(ans, v[i] + v[i + 1] - 1);
      i++;
    } else {
      ans = max(ans, v[i]);
    }
  }

  fin(ans);
}
