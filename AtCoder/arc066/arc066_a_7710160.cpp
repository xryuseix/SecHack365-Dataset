/*
問題文の引用元：https://atcoder.jp/contests/arc066/tasks/arc066_a
C - Lining UpEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 300 点
問題文 : 1～N までの番号がついた、N
人の人がいます。彼らは昨日、ある順番で左右一列に並んでいましたが、今日になってその並び方が分からなくなってしまいました。しかし、彼らは全員、「自分の左に並んでいた人数と自分の右に並んでいた人数の差の絶対値」を覚えています。彼らの報告によると、人
i の、「自分の左に並んでいた人数と自分の右に並んでいた人数の差の絶対値」は A_i
です。彼らの報告を元に、元の並び方が何通りあり得るかを求めてください。ただし、答えは非常に大きくなることがあるので、10^9+7
で割った余りを出力してください。また、彼らの報告が間違っており、ありうる並び方がないこともありえます。その際は
0 を出力してください。
制約1≦N≦10^50≦A_i≦N-1入力入力は以下の形式で標準入力から与えられる。NA_1 A_2 ...
A_N出力元の並び順としてありうるものが何通りあるか求め、10^9+7
で割った余りを出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/arc066/submissions/7710160
// 提出ID : 7710160
// 問題ID : arc066_a
// コンテストID : arc066
// ユーザID : xryuseix
// コード長 : 2250
// 実行時間 : 37



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
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
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
#define fin(ans) cout << (ans) << endl
#define STI(s) atoi(s.c_str())
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
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
const int P = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;

// xのn乗%modを計算
ll mod_pow(ll x, ll n, ll mod) {
  ll res = 1;
  while (n > 0) {
    if (n & 1)
      res = res * x % mod;
    x = x * x % mod;
    n >>= 1;
  }
  return res;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  int n;
  cin >> n;
  vi v(n);
  rep(i, n) cin >> v[i];
  map<int, int> m;
  rep(i, n) m[v[i]]++;
  bool ch = true;
  for (auto it = m.begin(); it != m.end(); it++) {
    if (it->first == 0 && it->second != 1)
      ch = false;
    else {
      if (it->first != 0 && it->second != 2) {
        ch = false;
      }
    }
    // cout<<it->first<<" "<<it->second<<endl;
  }
  if (!ch)
    fin(0);
  else {
    cout << mod_pow(2, n / 2, P) << endl;
  }

  //////////////////////////////////////////////////////
  return 0;
}
