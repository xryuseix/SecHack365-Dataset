/*
問題文の引用元：https://atcoder.jp/contests/abc017/tasks/abc017_3
C - ハイスコアEditorial
Time Limit : 6 sec / Memory Limit : 256 MB
問題文 : 高橋君はあるゲームが大好きである。このゲームには N
個の遺跡があり、好きな順番に探索することができる。遺跡には 1 から N
までの番号が付けられている。ゲーム中に宝石を獲得することがある。宝石は M
種類あり、1 から M
まで番号が付けられている。遺跡を探索することで報酬として得点といくつかの宝石を入手することができる。遺跡
i (1 ≦ i ≦ N) を探索することで、得点 s_i 点を獲得し、番号が l_i 以上 r_i
以下のすべての宝石を 1
つずつ獲得する。同じ遺跡を複数回探索することはできない。獲得した宝石は捨てることができず、またすべての種類の宝石を
1
つ以上獲得してしまうと、魔王が復活するイベントが進行する。魔王が復活する際に探索していた遺跡で得られるはずの得点は消滅してしまう。高橋君はスコアをできるだけ高くすることを目標としており、うまく探索する遺跡を選ぶことで、魔王が復活しない状態で得られる得点の合計値を最大化したい。考えられる最大値はいくらか。入力入力は以下の形式で標準入力から与えられる。N
Ml_1 r_1 s_1l_2 r_2 s_2:l_N r_N s_N1 行目には、2 つの整数 N (1 ≦ N ≦ 100,000) と
M (1 ≦ M ≦ 100,000) が空白区切りで書かれている。これは、遺跡が N 個、宝石が M
種類あることを表す。2 行目から N 行には、遺跡に関する情報を表す 3 つの整数 l_i,
r_i (1 ≦ l_i ≦ r_i ≦ M), s_i (1 ≦ s_i ≦ 5,000) が与えられる。これは、遺跡 i (1 ≦
i ≦ N) を探索することで、得点 s_i 点を獲得し、番号が l_i 以上 r_i
以下のすべての宝石を 1 つずつ獲得することを表す。
配点と部分点この問題は 101 点満点で、部分点が設定されている。N ≦ 8 かつ M ≦ 8
を満たすデータセット 1 に正解した場合は、30 点が与えられる。N ≦ 5,000 かつ M ≦
5,000 を満たすデータセット 2 に正解した場合は、上記とは別に 70
点が与えられる。追加
制約のないデータセット 3 に正解した場合は、上記とは別に 1
点が与えられる。出力魔王が復活しないような探索方法として考えられるものの中で得られる得点の最大値を
1 行に出力せよ。出力の末尾にも改行を入れること。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc017/submissions/11404164
// 提出ID : 11404164
// 問題ID : abc017_3
// コンテストID : abc017
// ユーザID : xryuseix
// コード長 : 2598
// 実行時間 : 86



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
const int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
const int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
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
inline string getline() {
  string s;
  getline(cin, s);
  return s;
}
inline void yn(const bool b) { b ? fin("yes") : fin("no"); }
inline void Yn(const bool b) { b ? fin("Yes") : fin("No"); }
inline void YN(const bool b) { b ? fin("YES") : fin("NO"); }
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

  int n, m;
  cin >> n >> m;
  vi imos(m + 1, 0);
  int allsum = 0;
  int minS = INF;
  rep(i, n) {
    int l, r, s;
    cin >> l >> r >> s;
    l--;
    imos[l] += s;
    imos[r] -= s;
    allsum += s;
  }
  // rep(i,m+1)cout<<imos[i]<<" ";
  // cout<<endl;
  rep(i, imos.size() - 1) { imos[i + 1] += imos[i]; }
  // rep(i,m+1)cout<<imos[i]<<" ";
  // cout<<endl;
  for (int i = 0; i < imos.size() - 1; i++) {
    minS = min(minS, imos[i]);
  }
  fin(allsum - minS);
}
