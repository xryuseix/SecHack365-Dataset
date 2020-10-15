/*
問題文の引用元：https://atcoder.jp/contests/past202004-open/tasks/past202004_e
E - PermutationEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 7 点注意この問題に対する言及は、2020年5月2日 18:00 JST
まで禁止されています。言及がなされた場合、賠償が請求される可能性があります。試験後に総合得点や認定級を公表するのは構いませんが、どの問題が解けたかなどの情報は発信しないようにお願いします。
問題文 : 1, 2, \ldots, N の順列 A_1, A_2, \ldots, A_N が与えられます。各整数 1
\leq i \leq N に対して、次の条件を満たす 1 以上の整数 j
として考えられる最小の値を求めてください。x = i とする。x を A_x
で置き換えるという操作をちょうど j 回行った後、x = i となる。
制約1 \leq N \leq 1001 \leq A_i \leq NA_i \neq A_j (i \neq
j)入力は全て整数入力入力は以下の形式で標準入力から与えられる。NA_1 A_2 \ldots
A_N出力1, 2, \ldots, N のそれぞれに対して、この順に、
問題文 : 中の条件を満たす 1 以上の整数 j として考えられる最小の値を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/past202004-open/submissions/12801450
// 提出ID : 12801450
// 問題ID : past202004_e
// コンテストID : past202004-open
// ユーザID : xryuseix
// コード長 : 2729
// 実行時間 : 3



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

  int n;
  cin >> n;
  vi v(n);
  rep(i, n) {
    cin >> v[i];
    v[i]--;
  }
  vi ans;
  for (int i = 0; i < n; i++) {
    int pos = i;
    int sum = 0;
    do {
      pos = v[pos];
      sum++;
    } while (pos != i);
    ans.pb(sum);
  }
  dump(ans);
}
