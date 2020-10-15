/*
問題文の引用元：https://atcoder.jp/contests/tenka1-2013-quala/tasks/tenka1_2013_qualA_b
B - 天下一難易度設定Editorial
Time Limit : 2 sec / Memory Limit : 64 MB
問題文 : 天下一株式会社の主催するプログラミングコンテストでは、問題の難易度を 5
つの整数値のパラメータ ( 0 以上 20 以下 ) で表現している。5
つのパラメータはそれぞれ、
問題文 :
の複雑さ実装の複雑さ解法の難しさ入力の複雑さテストデータの厳しさを意味している。問題の難易度はそれらのパラメータの総和を
S としたとき、以下の通りに決定される。85 \leq S \leq 100 の場合、 難易度E70 \leq
S \lt 85 の場合、 難易度D60 \leq S \lt 70 の場合、 難易度C20 \leq S \lt 60
の場合、 難易度B0 \leq S \lt 20 の場合、
難易度A天下一株式会社の新入社員であるショウヘイ君は用意された N
個の問題の中から、難易度Aの問題の個数を数えることを命じられた。ショウヘイ君の友人であるあなたはプログラムを書いて彼を助けることにした。入力入力は以下の形式で標準入力から与えられる。NV_1
W_1 X_1 Y_1 Z_1 : :V_N W_N X_N Y_N Z_N1 行目は、問題の数を表す整数 N (1 \leq N
\leq 100) が与えられる。2 行目から N  行には、 i ( 1 \leq i \leq N )
番目の問題の、
問題文 : の複雑さを表す整数 V_i 、実装の複雑さを表す整数 W_i
、解法の難しさを表す整数 X_i 、入力の複雑さを表す整数
Y_i、テストデータの厳しさを表す整数 Z_i ( 0 \leq V_i, W_i, X_i, Y_i, Z_i \leq 20
) が空白区切りで与えられる。出力難易度Aの問題の数を標準出力に 1
行で出力せよ。なお、行の終端には改行が必要である。
// ソースコードの引用元 :
https://atcoder.jp/contests/tenka1-2013-quala/submissions/10981605
// 提出ID : 10981605
// 問題ID : tenka1_2013_qualA_b
// コンテストID : tenka1-2013-quala
// ユーザID : xryuseix
// コード長 : 2046
// 実行時間 : 2



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

int main() {

  int n, ans = 0;
  cin >> n;
  rep(i, n) {
    int sum = 0;
    rep(j, 5) {
      int a;
      cin >> a;
      sum += a;
    }
    if (sum < 20)
      ans++;
  }
  fin(ans);
}
