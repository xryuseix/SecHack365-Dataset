/*
引用元：https://atcoder.jp/contests/abc149/tasks/abc149_d
D - Prediction and RestrictionEditorial
// ソースコードの引用元 : https://atcoder.jp/contests/abc149/submissions/9219694
// 提出ID : 9219694
// 問題ID : abc149_d
// コンテストID : abc149
// ユーザID : xryuseix
// コード長 : 3670
// 実行時間 : 11



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

// bool isPrime(int x){
//     int i;
//     if(x < 2)return 0;
//     else if(x == 2) return 1;
//     if(x%2 == 0) return 0;
//     for(i = 3; i*i <= x; i += 2) if(x%i == 0) return 0;
//     return 1;
// }

int main(void) {

  // // string s,t;
  // // cin>>s>>t;
  // // cout<<t<<s<<endl;
  // ll a,b,k;
  // cin>>a>>b>>k;
  // a-=k;
  // k=max(-a,0LL);
  // a=max(a,0LL);
  // b=max(0LL,b-k);
  // cout<<a<<" "<<b<<endl;
  // int x;
  // cin>>x;
  // for(int i=x;;i++){
  //     if(isPrime(i)){
  //         cout<<i<<endl;
  //         return 0;
  //     }
  // }

  int n, k;
  cin >> n >> k;
  int r, s, p;
  cin >> r >> s >> p;
  string t;
  cin >> t;
  int dp[3][t.size() + 1];
  rep(i, n + 1) rep(j, 3) dp[j][i] = 0;

  for (int i = 1; i <= t.size(); i++) {
    char hand[] = {'r', 's', 'p'};
    for (int B = 0; B < 3; B++) { // 今
      if (dp[B][i] == -1)
        continue;
      if (hand[B] == t[i - 1]) {
        // アイコ
        chmax(dp[B][i], max(dp[0][i - 1], 0));
        chmax(dp[B][i], max(dp[1][i - 1], 0));
        chmax(dp[B][i], max(dp[2][i - 1], 0));
      } else if ((hand[B] == 'r' && t[i - 1] == 's') ||
                 (hand[B] == 's' && t[i - 1] == 'p') ||
                 (hand[B] == 'p' && t[i - 1] == 'r')) {
        // かち
        int point;
        if (B == 0)
          point = r;
        else if (B == 1)
          point = s;
        else
          point = p;
        chmax(dp[B][i], max(dp[0][i - 1], 0) + point);
        chmax(dp[B][i], max(dp[1][i - 1], 0) + point);
        chmax(dp[B][i], max(dp[2][i - 1], 0) + point);
        if (i + k <= n)
          dp[B][i + k] = -1;
      } else {
        chmax(dp[B][i], max(dp[0][i - 1], 0));
        chmax(dp[B][i], max(dp[1][i - 1], 0));
        chmax(dp[B][i], max(dp[2][i - 1], 0));
      }
    }
  }
  fin(max(max(dp[0][n], dp[1][n]), dp[2][n]));

  // for(int i=0;i<=n;i++){
  //     for(int j=0;j<3;j++){
  //         cout<<dp[j][i]<<" ";
  //     }
  //     cout<<endl;
  // }
}
