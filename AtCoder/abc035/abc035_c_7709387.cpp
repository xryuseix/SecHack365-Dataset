/*
問題文の引用元：https://atcoder.jp/contests/abc035/tasks/abc035_c
C - オセロEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 黒の面に0、白の面に1が書かれた N
個のオセロの駒が、どの駒も黒の面が上を向くように一列に並べられています。その後、ある区間にある駒を全て裏返すという操作が
Q 回だけ行なわれました。具体的には i 回目の操作においては、左から l_i
番目の駒から r_i
番目の駒までの駒全てが裏返されました。最終的な盤面を求めてください。入力入力は以下の形式で標準入力から与えられる。N
Ql_1 r_1...l_Q r_Q1 行目に駒の数と操作回数を表す 2 つの整数 N,Q (1≦N,Q≦200,000)
が空白区切りで与えられる。2 行目から続く Q 行のうち i 行目においては、 i
回目の操作の範囲を表す 2 つの整数 l_i, r_i (1≦l_i≦r_i≦N)
が空白区切りで与えられる。出力最終的な盤面を表す文字列 S を 1 行に出力せよ。 S
の左から i 文字目は左から i
番目の駒の上向きの面に書かれた数字となる。改行を忘れないこと。部分点この問題には部分点が設定されている。1≦N,Q≦2,000
を満たすデータセットに正解した場合、 60 点が与えられる。追加
制約のないデータセットに正解した場合は、追加で 40 点が与えられ、合計 100
点が得られる。
// ソースコードの引用元 : https://atcoder.jp/contests/abc035/submissions/7709387
// 提出ID : 7709387
// 問題ID : abc035_c
// コンテストID : abc035
// ユーザID : xryuseix
// コード長 : 1881
// 実行時間 : 43



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

  int n, q;
  cin >> n >> q;
  vi v(n + 1, 0), csum(n);
  rep(i, q) {
    int l, r;
    cin >> l >> r;
    l--;
    r--;
    v[l]++;
    v[r + 1]--;
  }
  for (int i = 0; i < n; i++) {
    if (i == 0)
      csum[i] = v[i];
    else {
      csum[i] = v[i] + csum[i - 1];
    }
  }
  for (int i = 0; i < n; i++) {
    csum[i] %= 2;
  }
  rep(i, n) cout << csum[i];
  cout << endl;

  //////////////////////////////////////////////////////
  return 0;
}
