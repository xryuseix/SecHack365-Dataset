/*
問題文の引用元：https://atcoder.jp/contests/abc175/tasks/abc175_d
D - Moving PieceEditorial
Time Limit : 3 sec / Memory Limit : 1024 MB
配点 : 400 点
問題文 : 高橋君は 1, 2, \cdots, N の番号のついた N
マスから成るマス目の上で、コマを使ってゲームを行おうとしています。マス i
には整数 C_i が書かれています。また、1, 2 …, N の順列 P_1, P_2, \cdots, P_N
が与えられています。これから高橋君は好きなマスを 1 つ選んでコマを 1 つ置き、1
回以上 K 回以下の好きな回数だけ、次のような方法でコマを移動させます。1
回の移動では、現在コマがマス i (1 \leq i \leq N) にあるなら、コマをマス P_i
に移動させる。このとき、スコアに C_{P_i}
が加算される。高橋君のために、ゲーム終了時のスコアとしてあり得る値の最大値を求めてください。(ゲーム開始時のスコアは
0 です。)
制約2 \leq N \leq 50001 \leq K \leq 10^91 \leq P_i \leq NP_i \neq iP_1, P_2,
\cdots, P_N は全て異なる-10^9 \leq C_i \leq
10^9入力は全て整数である入力入力は以下の形式で標準入力から与えられる。N KP_1 P_2
\cdots P_NC_1 C_2 \cdots
C_N出力ゲーム終了時のスコアとしてあり得る値の最大値を出力せよ。



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

  ll n, K;
  cin >> n >> K;
  // if(n<k)k=n;
  vll p(n);
  vll c(n);
  rep(i, n) {
    cin >> p[i];
    p[i]--;
  }
  rep(i, n) cin >> c[i];
  ll ans = -LLINF;

  rep(i, n) {
    ll k = K;
    ll sum = 0;
    ll pos = i;
    vll count(n, -LLINF);
    vll sz(n, 0);
    ll j = -1;
    while (k > 0) {
      j++;
      ll next = p[pos];
      if (count[next] == -LLINF) {
        sum += c[next];
        count[next] = sum;
        sz[next] = j + 1;
        // cout<<"A"<<i<<" "<<pos<<" "<<sum<<endl;
        chmax(ans, sum);
        pos = next;
        k--;
      } else {
        sum += count[next];
        ll syu = sum - count[next];
        ll syunum = sz[pos] + 1 - sz[next];
        // cout<<k<<" "<<sum<<" "<<syu<<" "<<syunum<<endl;
        // dump(count);
        // dump(sz);
        if (k < syunum) {
          sum -= count[next];
          count = vll(n, -LLINF);
          sz = vll(n, 0);
          continue;
        }
        if (syu > 0) {
          sum = count[next];
          k = (K - sz[next]) % syunum;
          pos = next;
          // cout<<sum<<" "<<k<<" "<<syunum<<" "<<sz[next]<<endl;
          sum += (K - sz[next]) / syunum * syu;
          // cout<<sum<<endl;
          chmax(ans, sum);
          count = vll(n, -LLINF);
          sz = vll(n, 0);
        } else
          break;
      }
    }
    // fin(ans);
    // fin("======================");
  }
  fin(ans);
}
