/*
問題文の引用元：https://atcoder.jp/contests/abc116/tasks/abc116_c
C - Grand GardenEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : 花壇に N 本の花が咲いており、それぞれ 1,2,......,N
と番号が振られています。最初、全ての花の高さは 0 です。数列
h=\{h_1,h_2,h_3,......\}
が入力として与えられます。以下の「水やり」操作を繰り返すことで、すべての k(1
\leqq  k \leqq N) に対して花 k の高さを h_k にしたいです。整数 l,r を指定する。l
\leqq x \leqq r を満たすすべての x に対して、花 x の高さを 1
高くする。条件を満たすための最小の「水やり」操作の回数を求めてください。
制約1 \leqq N  \leqq 1000 \leqq h_i \leqq
100入力はすべて整数である。入力入力は以下の形式で標準入力から与えられます。Nh_1
h_2 h_3 ......
h_N出力条件を満たすような最小の「水やり」操作の回数を出力してください。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc116/submissions/12233843
// 提出ID : 12233843
// 問題ID : abc116_c
// コンテストID : abc116
// ユーザID : xryuseix
// コード長 : 3031
// 実行時間 : 1



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
const ll LLINF = 1LL << 60;
const ll MOD = 1000000007;
const double EPS = 1e-9;

int main() {

  int n;
  cin >> n;
  vi v(n);
  rep(i, n) cin >> v[i];
  int ans = 0;
  while (1) {
    int sum = 0;
    rep(i, n) sum += v[i];
    if (sum == 0)
      break;

    int minpos = 0, minval = INF;
    rep(i, n) {
      if (v[i] > 0 && minval > v[i]) {
        minval = v[i];
        minpos = i;
      }
    }
    int water = v[minpos];
    for (int i = minpos + 1; i < n; i++) {
      if (!v[i])
        break;
      v[i] = max(0, v[i] - water);
    }
    for (int i = minpos; i >= 0; i--) {
      if (!v[i])
        break;
      v[i] = max(0, v[i] - water);
    }
    ans += minval;
    // dump(v);
  }
  fin(ans);
}
