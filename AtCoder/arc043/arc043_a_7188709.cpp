/*
問題文の引用元：https://atcoder.jp/contests/arc043/tasks/arc043_a
A - 点数変換Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : N 人がテストを受けた。i 番目の人の得点は S_i
である。得点に偏りがあったので、平均が A、最大値と最小値の差が B
となるように得点を変換したい。得点の変換は適切な実数 P, Q を選んで行う。i
番目の人の変換後の得点は P×S_i + Qである。適切な P,Q
があるかどうか判断し、もしあるならばそれを出力せよ。入力入力は以下の形式で標準入力から与えられる。N
A BS_1S_2:S_N1 行目にはテストを受けた人数を表す整数 N (2 ≦ N ≦
10^5)、変換後の平均を表す整数 A (1 ≦ A ≦
10^9)、変換後の最大値と最小値の差を表す整数 B (1 ≦ B ≦ 10^9)
が空白区切りで与えられる。2 行目からの N 行のうち i 行目には i
番目の人の得点を表す整数 S_i (0 ≦ S_i ≦ 10^9)
が与えられる。出力もし適切な変換が存在しないならば -1 を 1
行に出力せよ。適切な変換が存在するならば、P, Q を空白区切りで 1
行に出力せよ。出力は絶対誤差あるいは相対誤差の少なくとも片方が 10^{-6}
以下であれば許容される。出力の末尾に改行を入れること。
// ソースコードの引用元 : https://atcoder.jp/contests/arc043/submissions/7188709
// 提出ID : 7188709
// 問題ID : arc043_a
// コンテストID : arc043
// ユーザID : xryuseix
// コード長 : 1895
// 実行時間 : 19



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
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
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
const int P = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  double n, a, b;
  cin >> n >> a >> b;
  double p, q;
  vi v(n);
  rep(i, n) cin >> v[i];
  Sort(v);
  double sum = 0;
  rep(i, n) sum += v[i];
  if (v[n - 1] == v[0]) {
    cout << -1 << endl;
    return 0;
  }
  p = b / (v[n - 1] - v[0]);
  double ave = 0;
  rep(i, n) ave += v[i];
  ave /= n;
  q = a - ave * p;

  printf("%.10f %.10f\n", p, q);

  //////////////////////////////////////////////////////
  return 0;
}
