/*
問題文の引用元：https://atcoder.jp/contests/abc143/tasks/abc143_b
B - TAKOYAKI FESTIVAL 2019Editorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : たこ焼きフェスティバル (たこフェス)
の季節がやってきました！今年のたこフェスでは N
個のたこ焼きがふるまわれる予定です。このうち i 個目のたこ焼きのおいしさは d_i
です。ところで、おいしさが x と y であるたこ焼きを一緒に食べると、体力が x
\times y 回復することが一般に知られています。たこフェスでふるまわれる N
個のたこ焼きから、2 個を選ぶ方法は \frac{N \times (N - 1)}{2}
通り考えられます。そのそれぞれについて、一緒に食べたときの体力の回復量を求めて、その総和を出力してください。
制約入力は全て整数である。2 \leq N \leq 500 \leq d_i \leq
100入力入力は以下の形式で標準入力から与えられる。Nd_1 d_2 ...
d_N出力たこフェスでふるまわれる N 個のたこやきから、2
個を選んで一緒に食べたときの体力の回復量の総和を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc143/submissions/8070921
// 提出ID : 8070921
// 問題ID : abc143_b
// コンテストID : abc143
// ユーザID : xryuseix
// コード長 : 1722
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

  int n;
  cin >> n;
  vi v(n);
  rep(i, n) cin >> v[i];
  ll ans = 0;
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      ans += v[i] * v[j];
    }
  }
  fin(ans);
}
