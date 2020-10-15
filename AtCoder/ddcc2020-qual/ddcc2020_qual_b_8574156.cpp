/*
問題文の引用元：https://atcoder.jp/contests/ddcc2020-qual/tasks/ddcc2020_qual_b
B - Iron Bar CuttingEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点: 200 点
問題文 : DISCO 社の高橋君の前に，1 本の鉄の棒が置かれています．この棒は，N-1
個の切れ目によって N 個の区間に分かれています．左から i 個目の区間の長さは A_i
ミリメートルです．  高橋君は，切れ目を一つ選んでそこで棒を切り，同じ長さの棒を 2
本作ることを考えました．しかし，今の状態では，どの切れ目を選んでも 2
本の棒を同じ長さにすることができないかもしれません．そこで，彼は棒を切る前に，以下の操作を何回か行うことにしました．
棒の区間のうち 1 つを選び，膨張させ，長さを 1 ミリメートル増やす．この操作を 1
回行うのに 1 円かかる．棒の区間のうち長さが 2 ミリメートル以上のもの 1
つを選び，収縮させ，長さを 1 ミリメートル減らす．この操作を 1 回行うのに 1
円かかる．彼が棒を 2 等分するために必要な最小の金額は何円か，求めてください．
制約2 \leq N \leq 2000001 \leq A_i \leq 2020202020N, A_i
は整数入力入力は以下の形式で標準入力から与えられます．  NA_1 A_2 A_3 ...
A_N出力高橋君が棒を 2 等分するのにかかる最小の金額を整数で出力してください．
// ソースコードの引用元 :
https://atcoder.jp/contests/ddcc2020-qual/submissions/8574156
// 提出ID : 8574156
// 問題ID : ddcc2020_qual_b
// コンテストID : ddcc2020-qual
// ユーザID : xryuseix
// コード長 : 1859
// 実行時間 : 89



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

  int n;
  cin >> n;
  vll v(n);
  rep(i, n) cin >> v[i];
  ll ans = LLINF;
  ll a = v[0];
  ll b = 0;
  for (int i = 1; i < n; i++)
    b += v[i];
  ans = min(ans, abs(a - b));
  for (int i = 1; i < n - 1; i++) {
    a += v[i];
    b -= v[i];
    ans = min(ans, abs(a - b));
  }
  fin(ans);
}
