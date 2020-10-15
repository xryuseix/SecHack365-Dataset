/*
問題文の引用元：https://atcoder.jp/contests/code-festival-2016-qualc/tasks/codefestival_2016_qualC_c
C - Two AlpinistsEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 400 点
問題文 :
アルピニストである高橋君と青木君は最近ある有名な山脈を踏破しました。この山脈はN
個の山からなっており、西から東に向けて山1,山2,...,山Nと一直線に並んでいます。高橋君は西から、青木君は東からこの山脈を踏破しました。山i
の高さはh_i ですが、二人とも各h_i の値は忘れてしまいました。その代わり、各i
(1≦i≦N) に対して、山i の山頂にたどり着いた時の、それまでに登った山(山i
も含む)の高さの最大値を記録しています。 高橋君の記録した値はT_i
で、青木君の記録した値はA_i です。各山の高さh_i
が正の整数であることはわかっています。山の高さの列としてありうるものが何通りあるかを10^9+7
で割ったあまりを求めてください。ただし記録が間違っていてありうる山の高さの列が存在しないこともあります。この場合は0を出力してください。
制約1≦N≦10^51≦T_i≦10^91≦A_i≦10^9T_i≦T_{i+1} (1≦i≦N-1)A_i≧A_{i+1}
(1≦i≦N-1)入力入力は以下の形式で標準入力から与えられる。NT_1 T_2 ... T_NA_1 A_2
... A_N出力山の高さの列としてありうるものが何通りあるかを 10^9+7
で割ったあまりを出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/code-festival-2016-qualc/submissions/8287650
// 提出ID : 8287650
// 問題ID : codefestival_2016_qualC_c
// コンテストID : code-festival-2016-qualc
// ユーザID : xryuseix
// コード長 : 2742
// 実行時間 : 87



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
#define fin(ans) cout << (ans) << endl
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
  };
};
const int MOD = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 62;

int main(void) {

  ll n;
  cin >> n;
  vll t(n);
  vll a(n);
  rep(i, n) cin >> t[i];
  rep(i, n) cin >> a[i];
  vll mt(n), ma(n);
  ll ans = 1;
  if (t[n - 1] != a[0]) {
    fin(0);
    return 0;
  }

  mt[0] = 1;
  ll maxt = t[0];
  for (int i = 1; i < n; i++) {
    if (t[i] > maxt) {
      maxt = t[i];
      mt[i] = 1;
    } else {
      mt[i] = maxt;
    }
  }
  ma[n - 1] = 1;
  ll maxa = a[n - 1];
  for (int i = n - 2; i >= 0; i--) {
    if (a[i] > maxa) {
      maxa = a[i];
      ma[i] = 1;
    } else {
      ma[i] = maxa;
    }
  }
  for (int i = 0; i < n; i++) {
    ans = ans * min(mt[i], ma[i]) % MOD;
  }
  for (int i = 0; i < n; i++) {
    if (ma[i] == 1 && mt[i] == 1 && a[i] != t[i]) {
      cout << 0 << endl;
      return 0;
    }
  }
  for (int i = 0; i < n; i++) {
    if (ma[i] == 1) {
      if (a[i] > t[i]) {
        cout << 0 << endl;
        return 0;
      }
    }
  }
  for (int i = 0; i < n; i++) {
    if (mt[i] == 1) {
      if (t[i] > a[i]) {
        cout << 0 << endl;
        return 0;
      }
    }
  }

  fin(ans);
}
