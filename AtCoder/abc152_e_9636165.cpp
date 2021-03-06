/*
引用元：https://atcoder.jp/contests/abc152/tasks/abc152_e
E - Flatten
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 500 点
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
#define STI(s) atoi(s.c_str())
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
#define MATHPI acos(-1)
#define itn int
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
const ll MOD = 1000000007;
const double EPS = 1e-9;
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;

map<ll, ll> prime;
// void factorize(ll x){
//     map<ll,ll> tmp;
//     ll d, q;
//     bool ck = true;
//     while(x >= 4 && x%2 == 0){
//         x /= 2;
//         if(tmp.find(2) == tmp.end()) tmp[2] = 1;
//         else tmp[2]++;
//     }
//     d = 3; q = x/d;
//     while(q >= d){
//         if(x%d == 0){
//             x = q;
//             if(tmp.find(d) == tmp.end()) tmp[d] = 1;
//             else tmp[d]++;
//         }
//         else if(ck){
//             d += 2;
//             ck = false;
//         }
//         else{
//             d += 4;
//             ck = true;
//         }
//         q = x/d;
//     }
//     if(tmp.find(x) == tmp.end()) tmp[x] = 1;
//     else tmp[x]++;

//     irep(i,tmp){
//         chmax(prime[i->first], i->second);
//     }
// }

void prime_factor(int n) {
  map<ll, ll> ret;
  for (int i = 2; i * i <= n; i++) {
    while (n % i == 0) {
      ret[i]++;
      n /= i;
    }
  }
  if (n != 1)
    ret[n] = 1;

  irep(i, ret) { chmax(prime[i->first], i->second); }
}

// (a/b)%P の場合は，(a%P)*modinv(b)%P とする
ll modinv(ll a) {
  ll b = MOD, u = 1, v = 0;
  while (b) {
    ll t = a / b;
    a -= t * b;
    swap(a, b);
    u -= t * v;
    swap(u, v);
  }
  u %= MOD;
  if (u < 0)
    u += MOD;
  return u;
}

// xのn乗%modを計算
ll mod_pow(ll x, ll n) {
  ll res = 1;
  while (n > 0) {
    if (n & 1)
      res = res * x % MOD;
    x = x * x % MOD;
    n >>= 1;
  }
  return res;
}

int main(void) {

  ll n;
  cin >> n;
  vll v(n);
  rep(i, n) {
    cin >> v[i];
    prime_factor(v[i]);
  }
  ll ans = 0;
  ll lcm = 1;
  irep(i, prime) {
    lcm *= mod_pow(i->first, i->second);
    // rep(j,i->second){
    //     lcm*=i->first;
    //     lcm%=MOD;
    // }
    lcm %= MOD;
  }
  rep(i, n) {
    ans += (lcm * modinv(v[i])) % MOD;
    ans %= MOD;
  }
  fin(ans);
  // factorize(2);
  // factorize(11);
  // factorize(57);
  // irep(i,prime){
  //     cout<<i->first<<" "<<i->second<<endl;
  //     if(i->first>1e3)break;
  // }
  // cout<<"lcm"<<lcm<<endl;
}
