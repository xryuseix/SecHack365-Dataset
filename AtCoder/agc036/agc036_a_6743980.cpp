/*
問題文の引用元：https://atcoder.jp/contests/agc036/tasks/agc036_a
A - TriangleEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 400 点
問題文 : 整数 S が与えられます。以下の条件をすべて満たす 6 つの整数
X_1,Y_1,X_2,Y_2,X_3,Y_3 を 1 組求めてください。0 \leq X_1,Y_1,X_2,Y_2,X_3,Y_3
\leq 10^9二次元平面上の 3 つの点 (X_1,Y_1),(X_2,Y_2),(X_3,Y_3)
を頂点とする三角形の面積が S/2 である。なお、この問題の
制約の範囲で、条件を満たすような 6 つの整数が必ず存在することが証明できます。
制約1 \leq S \leq
10^{18}入力される値はすべて整数である。入力入力は以下の形式で標準入力から与えられる。S出力条件を満たす
6 つの整数 X_1,Y_1,X_2,Y_2,X_3,Y_3
を、この順に空白区切りで出力せよ。解が複数存在する場合、どれを出力しても正解とみなされる。
// ソースコードの引用元 : https://atcoder.jp/contests/agc036/submissions/6743980
// 提出ID : 6743980
// 問題ID : agc036_a
// コンテストID : agc036
// ユーザID : xryuseix
// コード長 : 1810
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

  int a = 0, b = 0, x1, y1, x2, y2;
  ll s;
  cin >> s;
  if (s <= P - 7) {
    cout << 0 << " " << 0 << " " << 0 << " " << 1 << " " << s << " " << 0
         << endl;
    return 0;
  }
  x1 = P - 7;
  x2 = 1;
  y2 = ceil(s / (double)x1);
  y1 = x1 * y2 - s;
  cout << a << " " << b << " " << x1 << " " << y1 << " " << x2 << " " << y2
       << endl;

  //////////////////////////////////////////////////////
  return 0;
}
