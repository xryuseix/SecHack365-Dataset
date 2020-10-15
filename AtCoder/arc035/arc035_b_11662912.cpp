/*
問題文の引用元：https://atcoder.jp/contests/arc035/tasks/arc035_b
B - アットコーダー王国のコンテスト事情Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 :
高橋くん様は、アットコーダー王国の王様です。プログラミングコンテスト好きな彼が統治するアットコーダー王国では、年に一度コンテストが開催されます。このコンテストでは
N 問の問題が出題されます。また、順位を付ける際の 1
つの要素としてペナルティというものが存在します。ある問題を正解したとき、コンテスト開始から経過した時間分だけのペナルティが、各問題ごとに発生します。そして、その発生したペナルティの総和がコンテストペナルティとなります。ARCのペナルティとは異なるルールであることに注意してください。非常に優秀な国民である貴方には、全ての問題を解く力があります。しかも、全ての問題について、その問題を正解するためにどれだけ時間をかければよいのかを知っており、ちょうどその時間取り組むと必ず正解することができます。貴方は、自由な順番で問題を解くことができるので、コンテストペナルティが最小となるように解こうと思いました。全ての問題を解くときのコンテストペナルティの最小値と、そのような解き方が何通りあるかを
1,000,000,007(10^9+7)
で割った余りを答えて下さい。入力入力は以下の形式で標準入力から与えられる。NT_1T_2:T_N1
行目には、コンテストでの問題数を表す整数 N (1 ≦ N ≦ 10,000)
がスペース区切りで与えられる。2 行目からの N
行には、各問題を解くのにかかる時間の情報が与えられる。そのうち i (1≦i≦N)
行目には、整数 T_i (1≦T_i≦10,000) が書かれており、i 番目の問題を解くのに T_i
分かかることを示す。部分点この問題には部分点が存在する。100 点中 50
点分のテストケースにおいて、コンテストペナルティが最小となるような解き方の数は 1
通りである。出力出力は以下の形式で標準出力に出力せよ。1
行目には、コンテストペナルティの最小値を出力せよ。32bit整数型ではオーバーフローする可能性があることに気をつけること。2
行目には、コンテストペナルティが最小となるような解き方の数を
1,000,000,007(10^9+7) で割った余りを出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/arc035/submissions/11662912
// 提出ID : 11662912
// 問題ID : arc035_b
// コンテストID : arc035
// ユーザID : xryuseix
// コード長 : 2690
// 実行時間 : 6



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
typedef map<int, int> mii;
typedef set<int> si;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
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
#define endl '\n';
#define fi first
#define se second
#define NONVOID [[nodiscard]]
const int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
const int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
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
const ll LLINF = 1LL << 60;
const ll MOD = 1000000007;
const double EPS = 1e-9;

vll kai(10101, 1LL);

void kaijyou() {
  for (int i = 2; i < 10101; i++) {
    kai[i] = kai[i - 1] * i % MOD;
  }
}

int main() {

  kaijyou();
  int n;
  cin >> n;
  vll v(n);
  rep(i, n) cin >> v[i];
  Sort(v);
  vll csum(1, 0);
  rep(i, n) csum.pb(csum[i] + v[i]);
  ll sum = 0;
  rep(i, csum.size()) sum += csum[i];
  fin(sum);
  map<int, int> m;
  rep(i, n) m[v[i]]++;
  ll ans = 1;
  irep(i, m) {
    ans *= kai[i->second];
    ans %= MOD;
  }
  fin(ans);
}
