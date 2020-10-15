/*
問題文の引用元：https://atcoder.jp/contests/indeednow-qualb/tasks/indeednow_2015_qualb_1
A - 高橋くんとマンハッタンEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 :
高橋くんはマンハッタンにいます。マンハッタンは南北に伸びる道と東西に伸びる道で区画分けされており、どの道も十分長いため、南北に伸びる道と東西に伸びる道はどの組も交わり、その交わる点で交差点を作ります。また、南北に伸びる道同士、東西に伸びる道同士はそれぞれ交わりません。西から
x 番目の南北に伸びる道と、南から y 番目の東西に伸びる道の交わる交差点を (x,y)
と表すことにしましょう。高橋くんは交差点 (x_1,y_1) から交差点 (x_2,y_2)
へ行こうと考えています。このとき、最小でいくつの交差点を通らねばならないでしょうか？通る交差点には、交差点
(x_1,y_1) と交差点 (x_2,y_2)
を含みます。高橋くんが通らなければならない交差点の数を求めるプログラムを書いてください。入力入力は以下の形式で標準入力から与えられる。x_1
y_1x_2 y_21 行目には、高橋くんが初めにいる交差点の場所を表す x_1, y_1 (1 ≦ x_1,
y_1 ≦ 100,000) が与えられる。2 行目には、高橋くんの目的地の交差点の場所を表す
x_2, y_2 (1 ≦ x_2, y_2 ≦ 100,000) が与えられる。(x_1, y_1) ≠ (x_2, y_2)
であることが保証される。つまり、目的地の交差点は初めにいる交差点とは異なる。出力1
行目に、高橋くんが初めにいる交差点から目的地の交差点へ行くときに通る最小の交差点の数を出力せよ。行末の改行を忘れないこと。
// ソースコードの引用元 :
https://atcoder.jp/contests/indeednow-qualb/submissions/10980513
// 提出ID : 10980513
// 問題ID : indeednow_2015_qualb_1
// コンテストID : indeednow-qualb
// ユーザID : xryuseix
// コード長 : 1912
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
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  cout << abs(a - c) + abs(b - d) + 1 << endl;
}
