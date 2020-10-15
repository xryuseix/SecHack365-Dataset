/*
問題文の引用元：https://atcoder.jp/contests/agc002/tasks/agc002_c
C - Knot PuzzleEditorial
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
// ソースコードの引用元 : https://atcoder.jp/contests/agc002/submissions/7904178
// 提出ID : 7904178
// 問題ID : agc002_c
// コンテストID : agc002
// ユーザID : xryuseix
// コード長 : 2523
// 実行時間 : 201



/*
                                   _ooOoo_
                                  o8888888o
                                  88" . "88
                                  (| -_- |)
                                  O\  =  /O
                           ____/`---'\____
                         .'  \\|     |//  `.
                        /  \\|||  :  |||//  \
                   /  _||||| -:- |||||-  \
                   |   | \\\  -  /// |   |
                   | \_|  ''\---/''  |   |
                   \  .-\__  `-`  ___/-. /
                 ___`. .'  /--.--\  `. . __
          ."" '<  `.___\_<|>_/___.'  >'"".
         | | :  `- \`.;`\ _ /`;.`/ - ` : | |
         \  \ `-.   \_ __\ /__ _/   .-` /  /
======`-.____`-.___\_____/___.-`____.-'======
                                   `=---='
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
                fozubaoyou    pass System Test!
                quoted from
"https://codeforces.com/contest/472/submission/7996840"
*/

* /
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
#define PI acos(-1)
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
const int MOD = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;

int main(void) {

  int n, L;
  cin >> n >> L;
  vi a(n);
  int pos = -1;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n - 1; i++) {
    if (a[i] + a[i + 1] >= L) {
      pos = i + 1;
      break;
    }
  }
  if (pos == -1) {
    cout << "Impossible" << endl;
    return 0;
  }
  cout << "Possible" << endl;

  for (int i = 0; i < pos - 1; i++) {
    cout << i + 1 << endl;
  }
  for (int i = n - 1; i >= pos + 1; i--) {
    cout << i << endl;
  }
  cout << pos << endl;
}
