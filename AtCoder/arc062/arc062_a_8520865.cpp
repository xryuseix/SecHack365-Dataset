/*
問題文の引用元：https://atcoder.jp/contests/arc062/tasks/arc062_a
C - AtCoDeer and Election ReportEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 300 点
問題文 :
シカのAtCoDeerくんは選挙速報を見ています。選挙には二人の候補高橋くんと青木くんが出ています。速報では、現在の二人の得票数の比が表示されていますが、得票数そのものは表示されていません。AtCoDeerくんは
N 回画面を見て、 i(1≦i≦N) 回目に見たときに表示されている比は T_i:A_i
でした。ここで、AtCoDeerくんが選挙速報の画面を1回目に見た段階で既にどちらの候補にも少なくとも一票は入っていたことがわかっています。
N
回目に画面を見たときの投票数(二人の得票数の和)として考えられるもののうち最小となるものを求めてください。ただし、得票数が途中で減ることはありません。
制約1≦N≦10001≦T_i,A_i≦1000 (1≦i≦N)T_i と A_i は互いに素 (1≦i≦N)答えが 10^{18}
以下になることは保証されている入力入力は以下の形式で標準入力から与えられる。NT_1
A_1T_2 A_2:T_N A_N出力N
回目に画面を見たときの投票数として考えられる最小値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/arc062/submissions/8520865
// 提出ID : 8520865
// 問題ID : arc062_a
// コンテストID : arc062
// ユーザID : xryuseix
// コード長 : 2020
// 実行時間 : 2



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
const ll MOD = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 62;

int main(void) {

  ld n;
  cin >> n;
  ld a = 1, b = 1;
  rep(i, n) {
    ld T, A;
    ld next_a, next_b;
    cin >> T >> A;
    ld N;
    N = max(ceil((ld)a / (ld)T), ceil((ld)b / (ld)A));
    if (a <= T && b <= A) {
      next_a = T;
      next_b = A;
    } else {
      next_a = N * T;
      next_b = N * A;
    }
    a = next_a;
    b = next_b;
    // cout<<endl<<a<<" "<<b<<endl;
  }
  fin(ll(a + b));
}
