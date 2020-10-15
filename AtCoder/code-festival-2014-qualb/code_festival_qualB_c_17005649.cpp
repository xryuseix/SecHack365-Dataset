/*
問題文の引用元：https://atcoder.jp/contests/code-festival-2014-qualb/tasks/code_festival_qualB_c
C - 錬金術士Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 高橋君は錬金術のプロフェッショナルです。この世界の金属には、 2N 文字（
N
は整数）からなる名前が付けられており、名前は全て大文字アルファベットで構成されています。高橋君が既存の金属
S1, S2 から新たな金属 S3 を錬金できる条件は、S1,S2 からそれぞれ N
文字ずつ取り出してきて、それらの文字を適当に並べ替えた結果、 S3
と一致するときです。3 つの金属の名前S1, S2, S3が与えられるので S1, S2 から S3
が錬金できるか判定してください。入力入力は以下の形式で標準入力から与えられるS1S2S31
行目には錬金の材料となる 1 つめの金属の名前 S1 が与えられる。2
行目には錬金の材料となる 2 つめの金属の名前 S2 が与えられる。3
行目には生成したい金属の名前 S3 が与えられる。S1, S2,
S3は大文字アルファベットのみから構成される。S1, S2,
S3の文字数は等しく、偶数である。2 ≦ | S1 | ≦ 10^5 が常に成り立つ。出力もしS1,
S2からS3が錬金可能ならばYES、錬金不可能ならばNOと1行で出力せよ。



*/
#include <algorithm>
#include <bitset>
#include <cassert>
#include <cctype>
#include <cfloat>
#include <climits>
#include <cmath>
#include <cstdio>
#include <deque>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <string>
#include <unordered_set>
#include <vector>
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
// #include <atcoder/all>
// using namespace atcoder;
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
template <class T, class U> inline void dump(map<T, U> &v) {
  irep(i, v) { cout << i->first << " " << i->second << '\n'; }
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
constexpr ll LLINF = 1LL << 61;
constexpr ll MOD = 1000000007;
constexpr ld EPS = 1e-11;

/* --------------------   ここまでテンプレ   -------------------- */

int main() {
  string s, t, u;
  cin >> s >> t >> u;
  vvi v(26, vi(3));
  rep(i, s.size()) { v[s[i] - 'A'][0]++; }
  rep(i, s.size()) { v[t[i] - 'A'][1]++; }
  rep(i, s.size()) { v[u[i] - 'A'][2]++; }
  vector<bitset<100000>> dp(27);
  dp[0][0] = true;
  rep(i, 26) {
    if (v[i][2] == 0) {
      dp[i + 1] |= dp[i];
    }
    for (int j = 0; j <= v[i][2]; j++) {
      if (j <= v[i][0] && v[i][2] - j <= v[i][1]) {
        dp[i + 1] |= dp[i] << j;
      }
    }
  }
  YN(dp[26][s.size() / 2]);
}