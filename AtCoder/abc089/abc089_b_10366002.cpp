/*
問題文の引用元：https://atcoder.jp/contests/abc089/tasks/abc089_b
B - Hina ArareEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : 日本では、3 月 3
日にひなあられという、色のついたお菓子をお供えする習慣があります。1
つの袋があり、ひなあられが N 個入っています。この袋には、桃色、白色、緑色の 3
種類か、桃色、白色、緑色、黄色の 4
種類のひなあられが入っていることが分かっています。桃色を P、白色を W、緑色を
G、黄色を Y と表したとき、袋からひなあられを 1 粒ずつ取り出していったところ、i
番目に取り出したひなあられの色は S_i でした。この袋に 3
種類のひなあられが入っていた場合は Three、4 種類のひなあられが入っていた場合は
Four と出力してください。
制約1 \leq N \leq 100S_i は P か W か G か YS_i=P、S_j=W、S_k=G を満たす i,j,k
が必ず存在する入力入力は以下の形式で標準入力から与えられる。NS_1 S_2 ...
S_N出力袋に 3 種類のひなあられが入っていた場合は Three、4
種類のひなあられが入っていた場合は Four と出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc089/submissions/10366002
// 提出ID : 10366002
// 問題ID : abc089_b
// コンテストID : abc089
// ユーザID : xryuseix
// コード長 : 2036
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
#include <cassert>
#include <climits>
#include <string>
#include <bitset>
#include <cfloat>
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
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
#define irep(it, stl) for (auto it = stl.begin(); it != stl.end(); it++)
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define fin(ans) cout << (ans) << '\n'
#define STI(s) atoi(s.c_str())
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
#define MATHPI acos(-1)
#define itn int;
int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
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
  }
};
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;
const ll MOD = 1000000007;
const double EPS = 1e-9;

int main(void) {

  map<char, int> m;
  int n;
  cin >> n;
  rep(i, n) {
    char c;
    cin >> c;
    m[c]++;
  }
  int ans = (m['P'] > 0) + (m['W'] > 0) + (m['G'] > 0) + (m['Y'] > 0);
  if (ans == 3)
    fin("Three");
  else
    fin("Four");
}