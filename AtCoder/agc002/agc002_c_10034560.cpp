/*
問題文の引用元：https://atcoder.jp/contests/agc002/tasks/agc002_c
C - Knot Puzzle
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : N 本のロープがあります。 ロープは 1 から N まで番号が振られています。
ロープ i の長さは a_i です。最初、1≤i≤N-1 について、ロープ i の右端とロープ i+1
の左端が結ばれています。 高橋君は次の操作を N-1
回行い、すべての結び目をほどこうとしています。ひと繋がりのロープのうち、長さの総和が
L 以上のものをひとつ選ぶ。
選んだひと繋がりのロープに結び目があれば、結び目のうちどれかひとつをほどく。高橋君は結び目をほどく順番を工夫し、すべての結び目をほどくことができるでしょうか？
可能か判定し、可能ならば結び目をほどく順番をひとつ求めてください。
制約2≤N≤10^51≤a_i≤10^91≤L≤10^9入力はすべて整数である。入力入力は以下の形式で標準入力から与えられる。N
La_1 a_2 ... a_N出力すべての結び目をほどくことができないならば、Impossible
を出力せよ。すべての結び目をほどくことができるならば、Possible を出力した後、N-1
行出力せよ。 このうち j 行目には、j 回目の操作でほどく結び目の番号を出力せよ。
ただし、ロープ i の右端とロープ i+1 の左端を結ぶものを結び目 i とする。



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

  int pos = -1;
  int n, l;
  cin >> n >> l;
  vi v(n);
  rep(i, n) cin >> v[i];
  rep(i, n - 1) {
    if (v[i] + v[i + 1] >= l) {
      pos = i;
      break;
    }
  }
  if (pos == -1) {
    fin("Impossible");
    return 0;
  }
  pos++;
  cout << "Possible" << endl;
  for (int i = 1; i < pos; i++) {
    fin(i);
  }
  for (int i = n - 1; i > pos; i--) {
    fin(i);
  }
  cout << pos << endl;
}
