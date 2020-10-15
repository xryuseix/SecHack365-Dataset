/*
問題文の引用元：https://atcoder.jp/contests/s8pc-6/tasks/s8pc_6_c
C - Infinite GridEditorial
Time Limit : 1 sec / Memory Limit : 976 MB
配点：400 点
問題文 : H * W のマス目があります。上から i 行目 (1 \leq i \leq H)、左から j
列目 (1 \leq j \leq W) にあるマスを、マス (i, j) と呼ぶことにします。マス (i, j)
は、c_{i, j} = # のとき黒で塗られており、c_{i, j} = . のとき白で塗られています。
下の図は、H = 5, W = 5 の場合のマス目の例です。    さて、このマス目を 1 \ 000 \
000 \ 000 = 10^{9} 個横に繋げることを考えます。例えば、上の例のマス目を横に
10^{9} 個繋げると、以下のようになります。    square1001
君は、この広いマス目の中を、左上のマス (1, 1) から右下のマス (H, 10^9 \times W)
まで移動します。ただし、以下の条件で移動する必要があります。
黒いマスを通らずに移動しなければならない。マス (i, j) からは、マス (i + 1, j)
あるいはマス (i, j + 1)
にしか移動することができない。マス目の外に出るような移動は許されない。彼が条件に従って移動できるかどうかを判定してください。
制約H, W は 1 以上 100 以下の整数c_{i, j} は # か . のどちらかであるc_{1, 1} は
. であるc_{H, W} は .
である部分点この問題はいくつかの小課題に分けられ、その小課題のすべてのテストケースに正解した場合に「この小課題に正解した」とみなされます。提出したソースコードの得点は、正解した小課題の点数の合計となります。
(60 点) : H = 1(130 点) : H = 2(210 点) : 追加の
制約はない。入力入力は以下の形式で標準入力から与えられます。  H Wc_{1, 1}c_{1,
2}c_{1, 3}...c_{1, W}c_{2, 1}c_{2, 2}c_{2, 3}...c_{2, W}c_{3, 1}c_{3, 2}c_{3,
3}...c_{3, W}...c_{H, 1}c_{H, 2}c_{H, 3}...c_{H, W}出力square1001
君が左上から右下のマスまで移動できる場合 Yay!、移動できない場合 :(
と出力してください。
// ソースコードの引用元 : https://atcoder.jp/contests/s8pc-6/submissions/5027744
// 提出ID : 5027744
// 問題ID : s8pc_6_c
// コンテストID : s8pc-6
// ユーザID : xryuseix
// コード長 : 2015
// 実行時間 : 75



*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cctype>
#include <climits>
#include <bitset>
#define ld long double
#define ll long long int
#define ull unsigned long long int
#define rep(i, n) for (i = 0; i < n; i++)
#define fin(ans) cout << (ans) << endl
#define INF INT_MAX
using namespace std;
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
const long long LLINF = 1LL << 60;
// set<int>::iterator it;

bool up = false, down = false;
int ddfs(vector<vector<char>> v, int x, int y, int border) {
  //	cout<<x<<" "<<v[x][y]<<endl;
  if (v[x][y] == '%' || v[x][y] == '#' || down)
    return 0;
  if (x == border) {
    down = true;
    return 0;
  }
  ddfs(v, x + 1, y, border);
  ddfs(v, x, y + 1, border);
}
int udfs(vector<vector<char>> v, int x, int y, int border) {
  if (v[x][y] == '%' || v[x][y] == '#' || up)
    return 0;
  if (x == border) {
    up = true;
    return 0;
  }
  udfs(v, x - 1, y, border);
  udfs(v, x, y - 1, border);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  int h, w, i, j, border;
  cin >> h >> w;
  bool yoko = false, ch = false;
  string t, s = "";
  vector<vector<char>> v(h + 2, vector<char>(w + 2, '%'));
  rep(i, w) s += '.';
  rep(i, h) {
    cin >> t;
    if (s == t) {
      ch = true;
      border = i + 1;
    }
    rep(j, w) v[i + 1][j + 1] = t[j];
  }

  //	rep(i,h+2){
  //		rep(j,w+2){
  //			cout<<v[i][j];
  //		}
  //		cout<<endl;
  //	}
  //	cout<<"border"<<border<<endl;
  //横一列に並んだ.まで、右上から、さらに右下からたどり着けるか
  if (!ch) {
    cout << ":(" << endl;
    return 0;
  }
  //	cout<<"aaa"<<endl;
  ddfs(v, 1, 1, border);

  //	cout<<"aaa"<<endl;
  udfs(v, h, w, border);

  if (up && down)
    cout << "Yay!" << endl;
  else
    cout << ":(" << endl;

  //////////////////////////////////////////////////////
  return 0;
}
