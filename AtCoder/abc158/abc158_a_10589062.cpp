/*
問題文の引用元：https://atcoder.jp/contests/abc158/tasks/abc158_a
A - Station and BusEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : AtCoder 市には 3 つの駅があり、1, 2, 3
の番号がつけられています。これらの駅は、それぞれ鉄道会社A,
Bのいずれかが管理しています。管理状況は長さ 3 の文字列 S で表され、駅 i は S_i
が A のとき鉄道会社 A が、B のとき鉄道会社 B が管理しています。鉄道会社 A
が管理している駅と、鉄道会社 B
が管理している駅の間には、交通の便のためにバスを運行することになりました。実際にバスが運行することになる駅の組み合わせが存在するかどうかを判定してください。
制約S は A または B から成る|S| =
3入力入力は以下の形式で標準入力から与えられる。S出力バスが運行することになる駅の組み合わせが存在する場合は
Yes を、存在しない場合は No を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc158/submissions/10589062
// 提出ID : 10589062
// 問題ID : abc158_a
// コンテストID : abc158
// ユーザID : xryuseix
// コード長 : 2031
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

int stringcount(string s, char c) { return count(s.cbegin(), s.cend(), c); }

int main() {

  string s;
  cin >> s;
  if (stringcount(s, 'A') == 3 || stringcount(s, 'B') == 3) {
    fin("No");
  } else
    fin("Yes");
}
