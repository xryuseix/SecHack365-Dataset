/*
問題文の引用元：https://atcoder.jp/contests/arc027/tasks/arc027_1
A - 門限Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 :
今日は憧れの先輩と一緒にお買い物！お買い物の後、お茶して、他にもいろんな思い出を作って…。気がついたらもうこんな時間！18
時の門限までに家に帰らないとパパに怒られちゃう＞＜。というわけで、友人であるあなたは、現在の時間から門限まであと何分あるかを計算することになった。入力入力は以下の形式で標準入力から与えられる。h
m1 行目には、現在時刻を表す 2 個の整数 h (0 ≦ h ≦ 17), m (0 ≦ m ≦ 59)
がこの順に空白区切りで書かれている。これらは、現在時刻が 24 時間表記で h 時 m
分ちょうどであることを表す。出力門限である 18 時 0
分まで、あと何分あるかを出力せよ。出力の末尾にも改行を入れること。
// ソースコードの引用元 : https://atcoder.jp/contests/arc027/submissions/6122343
// 提出ID : 6122343
// 問題ID : arc027_1
// コンテストID : arc027
// ユーザID : xryuseix
// コード長 : 1503
// 実行時間 : 1



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
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<pair<int, int>> vpii;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef vector<vector<string>> vvs;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define fin(ans) cout << (ans) << endl
#define P 1000000007
#define STI(s) atoi(s.c_str()) // string to int
#define mp(p, q) make_pair(p, q)
#define Sort(a) sort(a.begin(), a.end())
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
const int INF = INT_MAX;
const long long LLINF = 1LL << 60;
// g++ -std=c++1z temp.cpp
//./a.out

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  int h, m;
  cin >> h >> m;
  int ans = 0;
  ans += (60 - m) % 60;
  if (m == 0)
    h--;
  ans += (18 - h - 1) * 60;

  cout << ans << endl;
  //////////////////////////////////////////////////////
  return 0;
}
