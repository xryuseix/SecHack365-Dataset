/*
問題文の引用元：https://atcoder.jp/contests/arc068/tasks/arc068_a
C - X: Yet Another Die GameEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 300 点
問題文 : すぬけくんは 6 面サイコロで遊ぶことにしました。サイコロは 1 から 6
までの整数がそれぞれの面に書かれており、向かい合う面に書かれた数の和はどれも 7
です。すぬけくんはサイコロの好きな面が上向きになるように置いたのち何回か以下の操作を行います。操作：サイコロを手前、奥、左、右のどれかの方向に
90° だけ回転させる。その後、上を向いている面に書かれた数を y として y
点得る。例えば、図のように 1 と書かれた面が上を向いており、手前側の面に 5
が、右側の面に 4
が書かれている状況を考えます。図に示されるように右方向に回転させることで 3
と書かれた面が上を向くようにすることが可能です。その他、左方向に回転させた場合は
4 と書かれた面が、手前方向に回転させた場合は 2
と書かれた面が、奥方向に回転させた場合は 5
と書かれた面が上を向くようにすることが可能です。すぬけくんが合計で x
点以上得るために必要な最小の操作回数を求めなさい。
制約1 ≦ x ≦ 10^{15}x
は整数入力入力は以下の形式で標準入力から与えられる。x出力答えを出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/arc068/submissions/11653300
// 提出ID : 11653300
// 問題ID : arc068_a
// コンテストID : arc068
// ユーザID : xryuseix
// コード長 : 2363
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

int main() {

  ll x;
  cin >> x;
  ll ans = x / 11 * 2;
  x %= 11;
  if (x > 6) {
    ans++;
    x -= 6;
  }
  if (x > 0)
    ans++;
  fin(ans);
}
