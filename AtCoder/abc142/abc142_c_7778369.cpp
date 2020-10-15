/*
問題文の引用元：https://atcoder.jp/contests/abc142/tasks/abc142_c
C - Go to SchoolEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : 高橋くんは N 人の生徒たちのいるクラスの担当教師です。生徒たちには 1
から N
までの出席番号が重複なく割り当てられています。今日は全ての生徒たちが相異なるタイミングで登校しました。高橋くんは、出席番号
i の生徒が登校した時点で、教室に A_i
人の生徒たちがいたことを記録しています(出席番号 i
の生徒を含む)。記録された情報を元に、生徒たちの登校した順番を復元してください。
制約 1 \le N \le 10^5  1 \le A_i \le N  A_i \neq A_j  (i \neq
j)入力はすべて整数入力入力は以下の形式で標準入力から与えられる。NA_1 A_2 \ldots
A_N出力生徒たちの出席番号を登校した順に出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc142/submissions/7778369
// 提出ID : 7778369
// 問題ID : abc142_c
// コンテストID : abc142
// ユーザID : xryuseix
// コード長 : 1753
// 実行時間 : 167



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

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  int n;
  cin >> n;
  vpii v;
  rep(i, n) {
    int y;
    cin >> y;
    v.pb(mp(y, i + 1));
  }
  Sort(v);
  rep(i, n) { fin(v[i].second); }

  //////////////////////////////////////////////////////
  return 0;
}
