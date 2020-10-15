/*
問題文の引用元：https://atcoder.jp/contests/abc166/tasks/abc166_b
B - Trick or TreatEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : ある街に、N 人のすぬけ君(すぬけ君 1 、すぬけ君 2 、 ...、 すぬけ君 N
)が住んでいます。この街には、 K 種類のお菓子(お菓子 1 、 お菓子 2 、....、お菓子
K )が売られています。お菓子 i を持っているのは、すぬけ君 A_{i, 1}, A_{i, 2},
\cdots, A_{i, {d_i}} の計 d_i 人です。高橋君は今からこの街を回り、お菓子を 1
つも持っていないすぬけ君にいたずらをします。このとき、何人のすぬけ君がいたずらを受けるでしょうか。
制約入力は全て整数1 \leq N \leq 1001 \leq K \leq 1001 \leq d_i \leq N1 \leq
A_{i, 1} < \cdots < A_{i, d_i} \leq
N入力入力は以下の形式で標準入力から与えられる。N Kd_1A_{1, 1} \cdots A_{1,
d_1}\vdotsd_KA_{K, 1} \cdots A_{K, d_K}出力答えを出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc166/submissions/12721052
// 提出ID : 12721052
// 問題ID : abc166_b
// コンテストID : abc166
// ユーザID : xryuseix
// コード長 : 2652
// 実行時間 : 5



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

int main() {

  int n, k;
  cin >> n >> k;

  si s;
  rep(i, k) {
    int d;
    cin >> d;
    rep(j, d) {
      int D;
      cin >> D;
      s.insert(D);
    }
  }
  fin(n - s.size());
}
