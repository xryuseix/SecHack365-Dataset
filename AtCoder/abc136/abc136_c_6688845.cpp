/*
問題文の引用元：https://atcoder.jp/contests/abc136/tasks/abc136_c
C - Build StairsEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : 左右一列に N 個のマスが並んでおり、左から i 番目のマスの高さは H_i
です。あなたは各マスについて 1 度ずつ次のいずれかの操作を行います。マスの高さを
1
低くする。何もしない。操作をうまく行うことでマスの高さを左から右に向かって単調非減少にできるか求めてください。
制約入力は全て整数である。1 \leq N \leq 10^51 \leq H_i \leq
10^9入力入力は以下の形式で標準入力から与えられる。NH_1 H_2 ...
H_N出力マスの高さを左から右に向かって単調非減少にできるなら Yes、そうでないなら
No を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc136/submissions/6688845
// 提出ID : 6688845
// 問題ID : abc136_c
// コンテストID : abc136
// ユーザID : xryuseix
// コード長 : 1887
// 実行時間 : 12



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

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  bool ch = true;
  int n;
  cin >> n;
  vi v(n);
  rep(i, n) cin >> v[i];
  int a = v[0];
  for (int i = 1; i < n; i++) {
    if (v[i] > a) {
      v[i]--;
      a = v[i];
    } else if (v[i] == a) {
      continue;
    } else {
      ch = false;
    }
  }
  if (ch)
    fin("Yes");
  else
    fin("No");

  //////////////////////////////////////////////////////
  return 0;
}
