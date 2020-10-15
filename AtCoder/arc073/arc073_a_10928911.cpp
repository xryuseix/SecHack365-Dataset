/*
問題文の引用元：https://atcoder.jp/contests/arc073/tasks/arc073_a
C - SentouEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 300 点
問題文 : とある銭湯には、スイッチを押すと T
秒間お湯が出るシャワーがあります。なお、お湯が出ているときにスイッチを押すと、そのタイミングから
T 秒間お湯が出つづけます。お湯の出る時間が T
秒間延長されるわけではないことに注意してください。このシャワーの前を、N
人の人がスイッチを押して通り過ぎていきます。i 人目の人は、1
人目の人がスイッチを押した t_i
秒後にスイッチを押します。お湯が出る時間の総和は何秒かを求めてください。
制約1 ≦ N ≦ 200,0001 ≦ T ≦ 10^90 = t_1 < t_2 < t_3 < , ..., < t_{N-1} < t_N ≦
10^9T, t_i はすべて整数である入力入力は以下の形式で標準入力から与えられる。N
Tt_1 t_2 ... t_N出力お湯が出る時間の総和を X 秒として、X を出力する。
// ソースコードの引用元 :
https://atcoder.jp/contests/arc073/submissions/10928911
// 提出ID : 10928911
// 問題ID : arc073_a
// コンテストID : arc073
// ユーザID : xryuseix
// コード長 : 2156
// 実行時間 : 81



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
#define STLL(s) strtoll(s.c_str(), NULL, 10)
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
#define MATHPI acos(-1)
#define itn int;
#define endl '\n';
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

int main() {

  int n, t;
  cin >> n >> t;
  vi v(n);
  rep(i, n) cin >> v[i];
  int l = 0, r = 0;
  int ans = 0;
  rep(i, n) {
    l = v[i];
    r = v[i] + t;
    int j = i;
    while (j + 1 < n && v[j + 1] <= r) {
      r = v[j + 1] + t;
      j++;
    }
    i = j;
    ans += r - l;
  }
  fin(ans);
}
