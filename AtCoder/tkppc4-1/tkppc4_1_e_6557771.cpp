/*
問題文の引用元：https://atcoder.jp/contests/tkppc4-1/tasks/tkppc4_1_e
E - Osmium_1008と課題Editorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点： 300 点
問題文 :
PAKEN学園に通うOsmium_1008君は、課題を N 個こなさないといけません。
初め、Osmium_1008君のエネルギーは E あり、 i 個目の課題を終わらせるためには A_i
のエネルギーを消費する必要があります。エネルギーが 0
より小さくなるようには行動できません。
どうしても課題が終わりそうにないOsmium_1008君は、エナジードリンクを飲むことにしました。エナジードリンクは
M 本あり、j 本目のエナジードリンクを飲むとエネルギーが B_j 増えます。
しかし、Osmium_1008君は健康を気にしているため、できる限りエナジードリンクを飲みたくなく、多くても
K 本までしか飲みません。
さて、Osmium_1008君が全ての課題を終えることができるかを判定し、終えることができるなら飲まなければいけないエナジードリンクの本数の最小値、終えることができないなら終わらせられる課題の数の最大値を出力してください。
制約                                    入力は全て整数である。
1\leq N,M\leq 2\times 10^5                    1\leq K\leq M
0\leq E\leq 10^8                    1\leq A_i,B_j\leq 10^8
A_1+A_2+\ldots +A_{N-1}+A_N>E
入力                     入力は以下の形式で標準入力から与えられます。
N M K EA_1 A_2 \ldots A_{N-1} A_NB_1 B_2 \ldots B_{M-1} B_M
出力                                            課題を終えることができるなら Yes
と出力し、次の行にエナジードリンクを飲む最低の本数を出力してください。
できないなら No
と出力し、次の行に終わらせられる最大の課題の数を出力してください。
// ソースコードの引用元 :
https://atcoder.jp/contests/tkppc4-1/submissions/6557771
// 提出ID : 6557771
// 問題ID : tkppc4_1_e
// コンテストID : tkppc4-1
// ユーザID : xryuseix
// コード長 : 2234
// 実行時間 : 61



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
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
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
// g++ -std=c++1z temp.cpp
//./a.out

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  ll n, m, k, e;
  cin >> n >> m >> k >> e;
  vi a(n), b(m);
  rep(i, n) cin >> a[i];
  rep(i, m) cin >> b[i];
  sort(rall(b));
  Sort(a);
  vi v(k);
  rep(i, k) { v[i] = b[i]; }
  int pos = 0;
  for (int i = 0; i < n; i++) {
    if (e >= a[i]) {
      e -= a[i];
    } else {
      while (e < a[i] && pos < k) {
        e += v[pos];
        pos++;
      }
      if (e >= a[i]) {
        e -= a[i];
      } else {
        cout << "No" << endl;
        cout << i << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
  cout << pos << endl;

  //////////////////////////////////////////////////////
  return 0;
}
