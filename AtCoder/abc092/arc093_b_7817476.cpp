/*
問題文の引用元：https://atcoder.jp/contests/abc092/tasks/arc093_b
D - Grid ComponentsEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 500 点
問題文 : 2 つの整数 A, B
が与えられます。各マスが白または黒に塗られたグリッドであって以下の条件を満たすものを、出力の項で指定されたフォーマットに従って一つ出力してください。グリッドの大きさを縦
h 行横 w 列としたとき、h および w はともに 100
以下である。白く塗られたマスの集合はちょうど A 個の連結成分に分かれている
(連結成分という単語の定義については後の注釈を参照)。黒く塗られたマスの集合はちょうど
B 個の連結成分に分かれている。
制約の項で指定される条件のもとで解は必ず一つ以上存在することが証明できます。解が複数ある場合、どれを出力しても構いません。注釈2
つの白く塗られたマス c_1, c_2が連結であるとは、マス c_1 からマス c_2
へ、上下左右に隣り合うマスへの移動を繰り返して、白く塗られたマスだけを通って移動できることを意味します。白く塗られたマスの集合
S が連結成分であるとは、S が以下の条件を満たすことを意味します。S のどの 2
つのマスも連結である。S に含まれないどの白く塗られたマスと、S
に含まれるどのマスも連結ではない。黒く塗られたマスについても連結成分を同様に定義します。
制約1 \leq A \leq 5001 \leq B \leq
500入力入力は以下の形式で標準入力から与えられる。A B出力以下の形式で出力せよ。1
行目には構成したグリッドの大きさを表す整数 h, w
を空白を区切りとして出力せよ。続いて h 行出力せよ。このうちの i 行目 (1 \leq i
\leq h) には以下のような長さ w の文字列 s_i を出力せよ。構成したグリッドの i 行
j (1 \leq j \leq w) 列のマスが白く塗られているならば、s_i の j 文字目は .
である。構成したグリッドの i 行 j (1 \leq j \leq w)
列のマスが黒く塗られているならば、s_i の j 文字目は # である。
// ソースコードの引用元 : https://atcoder.jp/contests/abc092/submissions/7817476
// 提出ID : 7817476
// 問題ID : arc093_b
// コンテストID : abc092
// ユーザID : xryuseix
// コード長 : 2756
// 実行時間 : 2



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
        quoted from "https://codeforces.com/contest/472/submission/7996840"
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

  int a, b;
  cin >> a >> b;
  vvc v(100, vc(100, '.'));
  for (int i = 0; i < 100; i++) {
    for (int j = 50; j < 100; j++) {
      v[i][j] = '#';
    }
  }
  int ly = 1, lx = 1, ry = 1, rx = 51;

  for (int i = 0; i < b - 1; i++) {
    v[ly][lx] = '#';
    lx += 2;
    if (lx >= 49) {
      lx = 1;
      ly += 2;
    }
  }
  for (int i = 0; i < a - 1; i++) {
    v[ry][rx] = '.';
    rx += 2;
    if (rx >= 99) {
      rx = 51;
      ry += 2;
    }
  }
  cout << 100 << " " << 100 << endl;
  for (int i = 0; i < 100; i++) {
    for (int j = 0; j < 100; j++) {
      cout << v[i][j];
    }
    cout << endl;
  }
}
