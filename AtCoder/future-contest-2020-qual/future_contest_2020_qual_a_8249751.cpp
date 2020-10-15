/*
問題文の引用元：https://atcoder.jp/contests/future-contest-2020-qual/tasks/future_contest_2020_qual_a
A - ロボットの誘導Editorial
Time Limit : 3 sec / Memory Limit : 1024 MB
問題文 : N × N のマス目の中に、M 台のロボットと、B 個のブロックマス、1
個のゴールマスがあります。各マスは座標を持ち、左上隅のマスの座標は (0,
0)、右上隅のマスの座標は (0, N - 1)、右下隅のマスの座標は (N - 1, N - 1)
です。このマス目の左端と右端、上端と下端はそれぞれ繋がっており、例えばマス (3,
0) の左隣のマスは (3, N - 1)、マス (N - 1, 5) の真下のマスは (0, 5)
です。各ロボット i (1 \leq i \leq M) について、初期位置 (ry_i, rx_i)
と向きの初期値 c_i が与えられます。c_i は U, D, L, R
のいずれかであり、それぞれ上下左右を表します。また、各ブロックマスやゴールマスの座標も与えられます。i
個目のブロックマス (1 \leq i \leq B) の座標は (by_i, bx_i)、ゴールマスの座標は
(gy, gx) です。あなたは、何個かのマスを選んでそれらに 方向案内
を設置することができます。それぞれの方向案内には、上下左右いずれかの向きを指定します。1
個のマスに複数の方向案内を設置することはできません。方向案内の設置が完了したあと、各ロボットはそれぞれ個別に以下の動作を繰り返します。ロボット同士が衝突することはありません。ゴールマスにいる場合:
その場で停止する。そうでない場合:
まず、現在いるマスに方向案内が設置されていれば、自分の向きを指定された向きに変える。その後、自分が向いている方向に
1 マス移動する
(マス目の左端と右端、上端と下端がそれぞれ繋がっていることに注意せよ)。ただし、移動先がブロックマスである場合は移動に失敗し、その場で停止する。有限回の動作でゴールマスに到達できるロボットの数をできるだけ多くしてください。使用する方向案内の数が少なく、ロボットが通るマスが多いとさらに高得点となります。より詳しくは「出力」セクションをご確認ください。【注意】この問題では、「最適解」を求める必要はありません。例えば、全てのロボットをゴールさせたり、方向案内の個数を最小化する必要はありません。
制約N = 40M = 100B = 3000 ≦ gy, gx ≦ N - 10 ≦ ry_i, rx_i ≦ N - 1c_i は U, D, L,
R のいずれかである。0 ≦ by_i, bx_i ≦ N -
1ブロックマスは、ロボット・ゴールマス・他のブロックマスのいずれとも重ならない。(ロボット同士や、ロボットとゴールマスは重なることがある)以上の
制約を満たす範囲で、ブロックマス、ゴールマス、ロボットの存在するマスは一様ランダムに選ばれる。入力入力は以下の形式で与えられる。N
M Bgy gxry_1 rx_1 c_1ry_2 rx_2 c_2:ry_M rx_M c_Mby_1 bx_1by_2 bx_2:by_B
bx_B出力設置する方向案内の個数を K、i 個目の方向案内を設置する座標を (Y_i,
X_i)、i 番目の方向案内に指定する向きを R_i (U, D, L, R
のいずれかであり、それぞれ上下左右に対応)
として、以下のフォーマットで出力せよ。KY_{1} X_{1} R_1Y_{2} X_{2} R_2:Y_{K}
X_{K}
R_K上記のフォーマットを満たさない場合は「不正解」となることがある。例えば、文字列の個数が一致しない場合や、指定された文字以外が使用された場合である。また、同一のマスに複数の方向案内を設置しても不正解となる。ただし、ゴールマスやブロックマスに方向案内を設置しても不正解とはならない。テストケースは
50
個与えられる。各テストケースについて、有限回の動作でゴールマスに到達できるロボットの数を
A、設置した方向案内の数を B、ロボットが一度でも通るマスの数を C
とすると、そのテストケースでは 1000 \times A - 10 \times B + C
点が得られる。全てのテストケースにおける合計点が、その提出の得点となる。不正解となる出力が行われた場合は、そのテストケースが
// ソースコードの引用元 :
https://atcoder.jp/contests/future-contest-2020-qual/submissions/8249751
// 提出ID : 8249751
// 問題ID : future_contest_2020_qual_a
// コンテストID : future-contest-2020-qual
// ユーザID : xryuseix
// コード長 : 4213
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
#include <cfloat>
#include <unordered_set>
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
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define fin(ans) cout << (ans) << endl
#define STI(s) atoi(s.c_str())
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
#define MATHPI acos(-1)
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
const ll LLINF = 1LL << 62;

int main(void) {

  int n, m, b;
  cin >> n >> m >> b;
  int gy, gx;
  cin >> gy >> gx;
  vi ry(m), rx(m);
  vc c(m);
  // cout<<"-----"<<endl;
  rep(i, m) { cin >> ry[i] >> rx[i] >> c[i]; }
  vi by(b), bx(b);
  // cout<<"------"<<endl;
  rep(i, b) { cin >> by[i] >> bx[i]; }
  // cout<<"------"<<endl;

  vvi grid(n, vi(n, 0));
  // 0..何もなし
  // 1..ロボット
  // 2..ブロック
  // 3..ゴール

  vvi info(n, vi(n, 0));
  // 0..何もなし
  // 1..案内板(上)
  // 2..案内板(右)
  // 3..案内板(下)
  // 4..案内板(左)
  // cout<<"DDDD"<<endl;
  //ゴールを設置
  grid[gy][gx] = 3;

  // cout<<"CCCC"<<endl;

  //ロボットとその向きを設置
  vi muki(m);
  rep(i, m) {
    // cout<<i<<endl;
    if (c[i] == 'U')
      muki[i] = 1;
    if (c[i] == 'R')
      muki[i] = 2;
    if (c[i] == 'D')
      muki[i] = 3;
    if (c[i] == 'L')
      muki[i] = 4;
    grid[ry[i]][rx[i]] = 1;
  }
  // cout<<"EEEE"<<endl;
  // ブロックを設置
  rep(i, b) { grid[by[i]][by[i]] = 2; }
  // cout<<"AAAA"<<endl;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (grid[i][j] == 2) {
        if (i - 1 >= 0)
          info[i - 1][j] = 4;
        else
          info[i - 1 + n][j] = 4;
        if (i + 1 < n)
          info[i + 1][j] = 2;
        else
          info[i + 1 - n][j] = 2;
        if (j + 1 < n)
          info[i][j + 1] = 1;
        else
          info[i][j + 1 - n] = 1;
        if (j - 1 >= 0)
          info[i][j - 1] = 3;
        else
          info[i][j - 1 + n] = 3;
      }
    }
  }
  // cout<<"BBBB"<<endl;
  {
    if (gy - 1 >= 0)
      info[gy - 1][gx] = 3;
    else
      info[gy - 1 + n][gx] = 3;
    if (gx + 1 < n)
      info[gy][gx + 1] = 4;
    else
      info[gy][gx + 1 - n] = 4;
    if (gy + 1 < n)
      info[gy + 1][gx] = 1;
    else
      info[gy + 1 - n][gx] = 1;
    if (gx - 1 >= 0)
      info[gy][gx - 1] = 2;
    else
      info[gy][gx - 1 + n] = 2;
  }

  vi ansy, ansx;
  vc ansr;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (info[i][j] > 0 && grid[i][j] == 0) {
        ansy.push_back(i);
        ansx.push_back(j);
        if (info[i][j] == 1) {
          ansr.push_back('U');
        } else if (info[i][j] == 2) {
          ansr.push_back('R');
        } else if (info[i][j] == 3) {
          ansr.push_back('D');
        } else if (info[i][j] == 4) {
          ansr.push_back('L');
        }
      }
    }
  }
  cout << ansy.size() << endl;
  for (int i = 0; i < ansy.size(); i++) {
    cout << ansy[i] << " " << ansx[i] << " " << ansr[i] << endl;
  }
}
