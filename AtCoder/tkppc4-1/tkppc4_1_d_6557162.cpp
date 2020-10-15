/*
問題文の引用元：https://atcoder.jp/contests/tkppc4-1/tasks/tkppc4_1_d
D - スキップEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 :                                                 define君は、横に並んだ
N 個のマス目で遊んでいます。左から順に、マス 1, 2, 3, ..., N
と番号付けられています。                    マス i
には、整数A_iが書かれています。遊び方は、次の通りです。
マス V_1 からスタートし、スキップで M (M \geq 0) 箇所のマス V_1, V_2, V_3, ...,
V_M を順に経由し、マス V_M でゴールする。
途中で左に進んでは行けない。すなわち、1 \leq V_1 < V_2 < V_3 < ... < V_M \leq N
を満たす必要がある。                        この時のポイントは |A_{V_2}-A_{V_1}|
+ |A_{V_3}-A_{V_2}| + ... + |A_{V_M}-A_{V_{M-1}}|  点となる。
なお、遊ばないという選択もできる。この場合 M = 0 となり、ポイントは 0
点となる。また、1 箇所しか経由しない場合 (M = 1 の場合) も 0 点となる。
さて、define君はポイントを最大化したいと考えていますが、彼は面倒くさがりなのでなるべく経由するマスの個数を少なくしたいです。
彼の代わりに、経由するマスの個数の最小値を計算してあげてください。
制約                                    入力は全て整数である。
1 \leq N \leq 10^5                    -10^9 \leq A_i \leq 10^9
入力                    入力は以下の形式で標準入力から与えられる。
NA_1　A_2　\ldots　A_{N-1}　A_N
出力
ポイントを最大化するためには、最小でいくつのマスを通ればいいかを 1
行に出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/tkppc4-1/submissions/6557162
// 提出ID : 6557162
// 問題ID : tkppc4_1_d
// コンテストID : tkppc4-1
// ユーザID : xryuseix
// コード長 : 1985
// 実行時間 : 716



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
// g++ -std=c++1z temp.cpp
//./a.out

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////
  int n;
  cin >> n;
  vi v(n);
  rep(i, n) cin >> v[i];
  for (int i = 0; i < int(v.size()) - 2; i++) {
    if ((v[i + 1] - v[i] >= 0 && v[i + 2] - v[i + 1] >= 0) ||
        (v[i + 1] - v[i] <= 0 && v[i + 2] - v[i + 1] <= 0)) {
      v.erase(v.begin() + i + 1);
      i--;
    }
  }
  if (v.size() == 1) {
    cout << 0 << endl;
    return 0;
  }
  if (v.size() == 2) {
    if (v[0] != v[1])
      cout << 2 << endl;
    else
      cout << 0 << endl;
    return 0;
  }

  fin(v.size());

  //////////////////////////////////////////////////////
  return 0;
}
