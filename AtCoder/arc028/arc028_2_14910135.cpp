/*
問題文の引用元：https://atcoder.jp/contests/arc028/tasks/arc028_2
B - 特別賞
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 高橋君はプログラミングコンテストを行い、N
人の人が参加しました。賞品がないと物足りないのではないかと思った高橋君は「i
位以上の人のうち、K
番目に若い人」に特別賞を出すことにしました。参加者全員の年齢は分かっています。K
の値はもう既に決めているのですが、i の値はまだ決めていません。i
の値を決めるために高橋君は、K 以上 N 以下の整数 i
それぞれについて誰が特別賞を取ることが出来るのかを計算してみることにしました。入力入力は以下の形式で標準入力から与えられる。N
KX_1 X_2 ... X_N1 行目には、コンテストに参加した人数を表した整数 N (1 ≦ N ≦
100,000) と、整数 K (1 ≦ K ≦ N) が空白区切りで与えられる。2
行目には、参加者の年齢の情報を表す N 個の整数が空白区切りで与えられる。このうち
i 番目の整数 X_i (1 ≦ X_i ≦ N) は、順位が i 位の参加者の年齢が全参加者のうち X_i
番目に若いことを表す。ただし、p \neq q のとき X_p \neq X_q
であることが保証される。部分点この問題には部分点が設定されている。N ≦ 1000
を満たすテストケースすべてに正解した場合は 40 点が与えられる。出力N-K+1
行に出力せよ。そのうち i 行目には、「i+K-1 位以上の人のうち、K
番目に若い人」の順位を表す 1 つの整数を出力せよ。



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
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef vector<vc> vvc;
typedef vector<vs> vvs;
typedef vector<vll> vvll;
typedef map<int, int> mii;
typedef set<int> si;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
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
#define fi first
#define se second
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
  irep(i, v) { cout << (*i) << ((i == --v.end()) ? '\n' : ' '); }
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
constexpr ld EPS = 1e-11;

int main() {

  priority_queue<pair<int, int>> pq;
  int n, k;
  cin >> n >> k;
  vi v(n);
  rep(i, n) cin >> v[i];
  int pos = k - 1;
  rep(i, k - 1) pq.push(mp(v[i], i + 1));
  for (int p = pos; p < n; p++) {
    pq.push(mp(v[p], p + 1));
    while (pq.size() > k)
      pq.pop();
    cout << pq.top().second << endl;
  }
}
