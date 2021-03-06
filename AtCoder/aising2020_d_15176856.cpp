/*
引用元：https://atcoder.jp/contests/aising2020/tasks/aising2020_d
D - Anything Goes to Zero
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 400 点
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

vi memo(201010, -1);

int popcount(int n) {
  int res = 0;
  rep(i, 32) {
    // cout<<n<<" "<<(1LL<<i) <<" "<<(n&(1LL<<i))<<endl;
    res += ((n & (1LL << i)) > 0);
  }
  // cout<<"======"<<n<<" "<<res<<endl;
  return res;
}

int rec(int n) {
  if (memo[n] >= 0)
    return memo[n];
  if (n == 0)
    return memo[0] = 0;
  if (n == 1)
    return memo[1] = 1;
  return memo[n] = rec(n % popcount(n)) + 1;
}

// xのn乗%modを計算
// ll mod_pow(ll x, ll n, ll mod = MOD) {
//     ll res = 1;
//     while(n > 0) {
//         if(n & 1) res = res*x%mod;
//         x = x*x%mod;
//         n >>= 1;
//     }
//     return res;
// }

int main() {

  int n;
  string s;
  cin >> n >> s;
  int x = 0;
  rep(i, s.size()) x += s[i] == '1';
  vvll pow(3, vll(201010));
  pow[0][0] = 1;
  pow[1][0] = 1;
  pow[2][0] = 1;
  for (int i = 1; i < pow[0].size(); i++) {
    pow[1][i] = pow[1][i - 1] * 2 % (x + 1);
    if (x != 1)
      pow[2][i] = pow[2][i - 1] * 2 % (x - 1);
  }
  ll sum[3] = {0LL};
  for (int i = 0; i < n; i++) {
    if (s[i] == '0')
      continue;
    rep(j, 3) {
      if (j == 0)
        continue;
      sum[j] += pow[j][n - i - 1];
      if (j == 1)
        sum[j] %= (x + 1);
      if (j == 2 && x != 1)
        sum[j] %= (x - 1);
    }
  }
  // cout<<x<<" "<<sum[0]<<" "<<sum[1]<<" "<<sum[2]<<" "<<endl;
  // rep(j,3){
  //     for(int i=0;i<10;i++){
  //         cout<<pow[j][i]<<" ";
  //     }
  //     cout<<endl;
  // }
  cout << endl;
  for (int i = 0; i < n; i++) {
    int ans = 1;
    ll num;
    if (s[i] == '1') {
      if (x != 1)
        num = (sum[2] - pow[2][n - i - 1] + (x - 1)) % (x - 1);
      else {
        fin(0);
        continue;
      }

    } else {
      num = (sum[1] + pow[1][n - i - 1]) % (x + 1);
    }
    ans += rec(num);
    fin(ans);
  }
}
