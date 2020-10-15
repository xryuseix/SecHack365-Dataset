/*
問題文の引用元：https://atcoder.jp/contests/donuts-2015/tasks/donuts_2015_1
A - ドーナツの体積Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 :
問題設定に不備がありました．また，R>Dであるようなテストケースが存在していました．R＜Dという
制約を問題に付け加え，テストケースの修正作業を行います．作業が完了次第リジャッジを行います．(19:14)
リジャッジが完了しました．(19:21)ドーナツの体積を計算してみましょう。平面図形をある直線を軸に回転させてできる立体の体積は、「平面図形の面積」\times
「平面図形の重心が描く円の周長」という式で求めることができます。半径 R
の円を、円の中心からの距離が D
である直線を軸に回転させてできるドーナツ型の立体の体積を計算してください。入力入力は以下の形式で標準入力から与えられる。R
D1 行目には、2 つの整数 R (1 ≦ R ≦ 100),  D (R ＜ D ≦ 100)
が空白区切りで与えられる。これは、
問題文 : 中の通りの変数である。出力半径が R の円を、円の中心からの距離が D
である直線を軸に回転させてできる立体の体積を 1
行に出力せよ。小数点以下何桁でも出力してよいが、10^{−2}
を超える絶対誤差を含んではならない。出力の末尾に改行を入れること。
// ソースコードの引用元 :
https://atcoder.jp/contests/donuts-2015/submissions/10980734
// 提出ID : 10980734
// 問題ID : donuts_2015_1
// コンテストID : donuts-2015
// ユーザID : xryuseix
// コード長 : 1916
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

  double r, d;
  cin >> r >> d;
  printf("%f\n", r * r * MATHPI * 2 * d * MATHPI);
}
