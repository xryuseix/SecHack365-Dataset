/*
問題文の引用元：https://atcoder.jp/contests/arc006/tasks/arc006_2
B - あみだくじEditorial
Time Limit : 2 sec / Memory Limit : 64 MB
問題文 :
　高橋君は学校で班のリーダーを決めなければいけなくなったので、あみだくじを用いて決めることにしました。　あみだくじとは、複数の縦線から
1
本を選び、その上端から下端へと辿っていき、途中で横線があれば、その横線を通り繋がっている隣接する縦線へと移動し、また下へと進みます。　今日はたまたま手元に紙がなかったので、パソコン上で
|、-、o を用いて以下のようなあみだくじを作りました。| | | | | | | | ||-| | |-| |
|-| || | |-| | |-| | || |-| | | | | |-|| | | |-| | | |-|| | |-| |-| | | ||-| |
|-| | |-| || | | | | |-| | |            o　o
がある位置に到達した人がリーダーになります。　実は高橋君はリーダーになりたかったので、どの縦線を選べば
o
に辿り着くのか知りたいです。　左から何番目の縦線を選べばリーダーになれるのかを求めなさい。入力入力は以下の形式で標準入力から与えられる。N
L|x|x|‥‥||x|x|‥‥||x|x|‥‥|: : :  :: : :  :| | |‥‥|y y y‥‥y入力は L+2 行ある。1
行目には、あみだくじの縦線の本数を表す整数 N(1≦N≦10)
とあみたくじの長さを表す整数 L(1≦L≦20)が与えられる。2 行目からの L
行には、あみたくじの形が与えられる。i 行目 (2≦i≦L+1) には 2N-1
文字の記号が与えられる。各行の j 番目の記号は、以下のようになっている。j
が奇数の時：|j が偶数の時(上記のxの位置)：- または  (空白)|
はあみだくじの縦線を表し、-はその両端の縦線を繋ぐ横線であることを表す。また、空白はその位置に横線が無いことを表す。|
を 1 つ挟んで左右に隣り合ったxの位置の両方が - という入力は存在しない。L+2
行目には 2N-1 文字の記号が与えられる。各行の j
番目の記号は、以下のようになっている。j が奇数の時(上記のyの位置)：o または
(空白)j が偶数の時： (空白)o は L+2 行目にただ 1
つのみ与えられる。出力あみだくじを辿って o
に到達するために選ぶべき縦線は左から何番目か 1
行で出力せよ。なお、最後には改行を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/arc006/submissions/10745298
// 提出ID : 10745298
// 問題ID : arc006_2
// コンテストID : arc006
// ユーザID : xryuseix
// コード長 : 2514
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

struct pos {
  int x;
  int y;
};

int main() {

  int n, l;
  scanf("%d %d", &n, &l);
  vs s(l + 2);
  for (int i = 0; i < l + 2; i++) {
    getline(cin, s[i]);
  }
  // fin("AAA");
  pos p;
  rep(i, 2 * n - 1) if (s[l + 1][i] == 'o') {
    p.x = i;
    p.y = l + 1;
  }
  // fin("BBB");
  p.y--;
  while (1) {
    if (p.x + 2 < 2 * n - 1 && s[p.y][p.x + 1] == '-') {
      s[p.y][p.x + 1] = ' ';
      p.x += 2;
    } else if (p.x - 2 >= 0 && s[p.y][p.x - 1] == '-') {
      s[p.y][p.x - 1] = ' ';
      p.x -= 2;
    } else {
      p.y--;
      if (p.y <= 0) {
        fin(p.x / 2 + 1);
        return 0;
      }
    }
  }
}