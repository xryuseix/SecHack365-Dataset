/*
問題文の引用元：https://atcoder.jp/contests/abc088/tasks/abc088_d
D - Grid RepaintingEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点：400 点
問題文 : 縦 H マス, 横 W マスに広がるマス目があり,
各マスは白または黒で塗られている. 上から i 番目で左から j 番目のマスを (i, j)
で表す.すぬけ君は, このマス目を使って次のようなゲームをしたい.
ゲームの開始時点ではマス (1, 1) にゲームキャラクター「けぬす君」がいる.
プレイヤーはけぬす君を上下左右の 4 方向のいずれかに 1
マスだけ動かすことを繰り返す. けぬす君が白いマスだけを通って (H, W)
にたどり着けばゲームクリアとなる.ゲームを開始する前に,
すぬけ君はいくつかの白いマス目の色を黒に変えることができる. ただし, マス (1, 1)
と (H, W) の色を変えることはできず,
ゲームを開始するまでにすべての色の変更を行わなければならない.ゲームをクリアしたとき,
ゲームの開始前にマスの色を変えた回数がすぬけ君のスコアとなる. そのとき,
すぬけ君が取る可能性のある最大のスコアを求めなさい.ただし,
すぬけ君がどのようにマス目の色を変えてもけぬす君が (H, W)
にたどり着くことが出来ない場合、-1 と出力しなさい.ただし, 各マスの色の情報は文字
s_{i, j} として与えられる. マス (i, j) が最初白で塗られている場合 s_{i, j} は .
であり, マス (i, j) が最初黒で塗られている場合 s_{i, j} は # である.
制約H は 2 以上 50 以下の整数W は 2 以上 50 以下の整数s_{i, j} は . または # (1
\leq i \leq H, 1 \leq j \leq W)s_{1, 1}, s_{H, W} は .
である入力入力は以下の形式で標準入力から与えられる.H Ws_{1, 1}s_{1, 2}s_{1, 3}
... s_{1, W}s_{2, 1}s_{2, 2}s_{2, 3} ... s_{2, W} :   :s_{H, 1}s_{H, 2}s_{H, 3}
... s_{H, W}出力すぬけ君が取る可能性のある最大のスコアを出力しなさい.ただし,
すぬけ君がどのようにマス目の色を変えてもけぬす君が (H, W)
にたどり着くことが出来ない場合、-1 と出力しなさい.
// ソースコードの引用元 : https://atcoder.jp/contests/abc088/submissions/7806833
// 提出ID : 7806833
// 問題ID : abc088_d
// コンテストID : abc088
// ユーザID : xryuseix
// コード長 : 3527
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
const int P = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;

bool ch = false;

struct Corr {
  int x;
  int y;
  int depth;
};

queue<Corr> q;

int bfs(vvc grid) {
  while (!q.empty()) {
    Corr now = q.front();
    q.pop();
    Corr next;

    if (now.x == grid[0].size() - 1 && now.y == grid.size() - 1) {
      ch = true;
      return now.depth;
    }

    if (now.y == 0 && now.x == 0)
      grid[now.y][now.x] = '#';

    if (now.x + 1 < grid[now.y].size() && grid[now.y][now.x + 1] != '#') {
      next.x = now.x + 1;
      next.y = now.y;
      next.depth = now.depth + 1;
      q.push(next);
      grid[now.y][now.x + 1] = '#';
    }
    if (now.y + 1 < grid.size() && grid[now.y + 1][now.x] != '#') {
      next.x = now.x;
      next.y = now.y + 1;
      next.depth = now.depth + 1;
      q.push(next);
      grid[now.y + 1][now.x] = '#';
    }
    if (now.x - 1 >= 0 && grid[now.y][now.x - 1] != '#') {
      next.x = now.x - 1;
      next.y = now.y;
      next.depth = now.depth + 1;
      q.push(next);
      grid[now.y][now.x - 1] = '#';
    }
    if (now.y - 1 >= 0 && grid[now.y - 1][now.x] != '#') {
      next.x = now.x;
      next.y = now.y - 1;
      next.depth = now.depth + 1;
      q.push(next);
      grid[now.y - 1][now.x] = '#';
    }
    // cout<<endl<<"-------------------------------------"<<now.depth<<endl;
    // rep(i,grid.size()){
    //     rep(j,grid[i].size()){
    //         if(i==now.y&&j==now.x)cout<<"&";
    //         else cout<<grid[i][j];
    //     }
    //     cout<<endl;
    // }
  }
  return 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  int h, w;
  cin >> h >> w;
  vvc v(h, vc(w));
  int sh = 0;
  rep(i, h) {
    string s;
    cin >> s;
    rep(j, w) {
      v[i][j] = s[j];
      if (s[j] == '#')
        sh++;
    }
  }

  Corr c = {0, 0, 1};
  q.push(c);

  int d = bfs(v);

  if (!ch)
    fin(-1);
  else
    fin(h * w - sh - d);

  //////////////////////////////////////////////////////
  return 0;
}
