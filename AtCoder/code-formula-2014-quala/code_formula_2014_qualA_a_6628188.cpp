/*
問題文の引用元：https://atcoder.jp/contests/code-formula-2014-quala/tasks/code_formula_2014_qualA_a
A - 立方数Editorial
Time Limit : 2 sec / Memory Limit : 64 MB
問題文 : 整数 A が与えられます。整数 A
が立方数ならYES、そうでないならNOと出力しなさい。ただし、立方数とは、整数を三乗して作ることが出来る数のことを指します。入力入力は以下の形式で標準入力から与えられる。A1
行目には、1 つの整数 A (1 ≦ A ≦ 1000000) が与えられる。出力A
が立方数であればYES、そうでないならNOを 1
行で出力せよ。出力の末尾には改行をいれること。
// ソースコードの引用元 :
https://atcoder.jp/contests/code-formula-2014-quala/submissions/6628188
// 提出ID : 6628188
// 問題ID : code_formula_2014_qualA_a
// コンテストID : code-formula-2014-quala
// ユーザID : xryuseix
// コード長 : 1746
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

  int n;
  cin >> n;
  ll i = 1;
  while (i * i * i <= n) {
    // cout<<n<<" "<<i*i*i<<endl;
    if (i * i * i == n) {
      cout << "YES" << endl;
      return 0;
    }
    i++;
  }
  cout << "NO" << endl;

  //////////////////////////////////////////////////////
  return 0;
}
