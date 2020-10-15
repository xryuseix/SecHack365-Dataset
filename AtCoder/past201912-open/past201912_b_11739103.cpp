/*
問題文の引用元：https://atcoder.jp/contests/past201912-open/tasks/past201912_b
B - Up and DownEditorial
Time Limit : 2 sec / Memory Limit : 1024
MB注意この問題に対する言及は、2019年12月29日 05:00 JST
まで禁止されています。言及がなされた場合、賠償が請求される可能性があります。試験後に総合得点や認定級を公表するのは構いませんが、どの問題が解けたかなどの情報は発信しないようにお願いします。
問題文 : ある商品の N 日間の売上が整数列 A_1, A_2, \ldots, A_N
として与えられる。A_i (1 \leqq i \leqq N) が i 日目の売上を表す。あなたは、2
日目以降の各日について、その日の売上が前日の売上よりどれだけ高かったか
(あるいは低かったか)
を出力するプログラムを作成することにした。より具体的には、プログラムは N-1
行を出力し、i 行目 (1 \leqq i \leqq N-1) の内容は次の通りである。A_{i+1} が A_i
と等しい場合: stayA_{i+1} が A_i より小さい場合: down [減少量]、ここで [減少量]
は整数値 A_i - A_{i+1}A_{i+1} が A_i より大きい場合: up [増加量]、ここで
[増加量] は整数値 A_{i+1} - A_iこのプログラムを作成せよ。
制約2 \leqq N \leqq 100,0000 \leqq A_i \leqq
1,000,000,000入力中の値はすべて整数である。入力入力は以下の形式で標準入力から与えられる。NA_1A_2:A_{N}出力
問題文 : で指示された通りに N - 1 行を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/past201912-open/submissions/11739103
// 提出ID : 11739103
// 問題ID : past201912_b
// コンテストID : past201912-open
// ユーザID : xryuseix
// コード長 : 2480
// 実行時間 : 55



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
typedef map<int, int> mii;
typedef set<int> si;
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
#define itn int
#define endl '\n';
#define fi first
#define se second
#define NONVOID [[nodiscard]]
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

int main() {

  int n;
  cin >> n;
  vi v(n);
  rep(i, n) cin >> v[i];
  for (int i = 1; i < n; i++) {
    int N = v[i] - v[i - 1];
    if (N == 0)
      fin("stay");
    else if (N > 0)
      cout << "up " << N << '\n';
    else
      cout << "down " << -N << '\n';
  }
}
