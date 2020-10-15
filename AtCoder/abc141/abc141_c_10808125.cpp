/*
問題文の引用元：https://atcoder.jp/contests/abc141/tasks/abc141_c
C - Attack SurvivalEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点: 300 点
問題文 :
高橋君は早押しクイズの大会を開くことにしました。スコアボードの作成を任されたキザハシ君は、次のルールを持つラウンドのポイントを管理するプログラムを書くのに苦戦しています。このラウンドの参加者は
N 人であり、1 から N までの番号がついています。ラウンド開始時点では全員が K
ポイントを持っています。誰かが問題に正解すると、その人以外の N-1 人のポイントが
1 減ります。これ以外によるポイントの変動はありません。ラウンド終了時にポイントが
0 以下の参加者は敗退し、残りの参加者が勝ち抜けます。このラウンドでは Q
回の正解が出て、i 番目に正解したのは参加者 A_i でした。キザハシ君の代わりに、N
人の参加者のそれぞれが勝ち抜けたか敗退したかを求めるプログラムを作成してください。
制約入力はすべて整数2 \leq N \leq 10^51 \leq K \leq 10^91 \leq Q \leq 10^51 \leq
A_i \leq N\ (1 \leq i \leq Q)入力入力は以下の形式で標準入力から与えられます。N K
QA_1A_2...A_Q出力N 行出力してください。i 行目には、参加者 i が勝ち抜けたなら Yes
を、敗退したなら No を出力してください。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc141/submissions/10808125
// 提出ID : 10808125
// 問題ID : abc141_c
// コンテストID : abc141
// ユーザID : xryuseix
// コード長 : 2093
// 実行時間 : 36



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

  int n, k, q;
  cin >> n >> k >> q;
  vi v(n, 0);
  rep(i, q) {
    int a;
    cin >> a;
    v[a - 1]++;
  }
  rep(i, n) { v[i] = k - q + v[i]; }
  rep(i, n) {
    if (v[i] > 0)
      fin("Yes");
    else
      fin("No");
  }
}
