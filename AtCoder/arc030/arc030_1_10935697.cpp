/*
問題文の引用元：https://atcoder.jp/contests/arc030/tasks/arc030_1
A - 閉路グラフEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 下図のような n(n≧3)
頂点から成る閉路グラフがあります．このグラフは，頂点 1 と頂点 2を結ぶ辺，頂点 2
と頂点 3，...，頂点 n-1 と頂点 n，そして頂点 n と頂点 1
を結ぶ辺から構成されています．あなたは，このグラフからいくつかの頂点を取り除く(*)ことでグラフを分断し最終的に
k
個の連結成分のみが残ったグラフにしたいと思っています．実際に頂点を取り除き始める前に，そのような取り除き方が本当に存在するかどうかを判定してください．(*)
ある頂点を取り除くと，その頂点に直接繋がっている辺も取り除かれます．また，必要がなければ
1
つも頂点を取り除かなくても構いません．入力入力は以下の形式で標準入力から与えられる．nk1
行目には，閉路グラフの頂点の数を表す整数 n (3 ≦ n ≦ 10^5) が与えられる．2
行目には，残したい連結成分の数を表す整数 k (1 ≦ k ≦ 10^5)
が与えられる．出力1行目に，n
頂点の閉路グラフからいくつかの頂点を取り除いて，ちょうど k
個の連結成分を含むグラフにすることができるならば YES，そうでないならば NO
を出力せよ．最後に改行を忘れないこと．
// ソースコードの引用元 :
https://atcoder.jp/contests/arc030/submissions/10935697
// 提出ID : 10935697
// 問題ID : arc030_1
// コンテストID : arc030
// ユーザID : xryuseix
// コード長 : 1919
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

int main() {

  int n, k;
  cin >> n >> k;
  if (n / 2 < k)
    fin("NO");
  else
    fin("YES");
}