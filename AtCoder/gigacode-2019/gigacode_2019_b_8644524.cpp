/*
問題文の引用元：https://atcoder.jp/contests/gigacode-2019/tasks/gigacode_2019_b
B - 採用面接Editorial
Time Limit : 1 sec / Memory Limit : 1024 MB﻿
配点: 100 点
問題文 : GigaCode
社は毎年採用面接を行っています．この会社では，採用において「技術力」「社会性」の
2 つの観点を重要視しています．採用に当たっては「技術力」「社会性」それぞれ 100
点満点で点数をつけ，それらに応じて以下の 2
つの条件を両方満たす人のみ合格とします．  技術力が X 点以上かつ社会性が Y
点以上である．技術力と社会性の合計点が Z 点以上である．さて，今年は N
人の大学生が応募しました．i 人目の応募者は，技術力の点数が A_i
点，社会性の点数が B_i
点でした．何人の応募者が採用面接に合格するか，求めてください．
制約1 \leq N \leq 1000 \leq A_i \leq 1000 \leq B_i \leq 1000 \leq X \leq 1000
\leq Y \leq 1000 \leq Z \leq
200入力はすべて整数部分点この問題はいくつかの小課題に分けられ，その小課題のすべてのテストケースに正解した場合に「この小課題に正解した」とみなされます．提出したソースコードの得点は，正解した小課題の点数の合計となります．
(30 点) N = 1 を満たす．  (30 点) N 人全員が採用面接に合格する．  (40 点) 追加の
制約はない．  入力入力は以下の形式で標準入力から与えられます．  N X Y ZA_1
B_1A_2 B_2A_3 B_3...A_N B_N出力N
人のうち何人の応募者が採用面接に合格するか，整数で出力してください．  小課題 1
のヒント小課題 1 では，すべてのテストケースが N = 1
です．つまり，以下の形式で入力が与えられます．  N X Y ZA_1 B_1そのとき，X \leq
A_1, Y \leq B_1, Z \leq A_1 + B_1 のすべての条件を満たせば，1
人目の応募者が合格するので 1 と出力し，そうでない場合は 0 と出力するのが，小課題
1
の本質です．なお，この小課題は，繰り返し処理等を使わなくても解くことができます．
小課題 2 のヒント小課題 2 では，答えは必ず N になります．  小課題 3 のヒントfor
文などの繰り返し処理と，if 文などの条件分岐を使うと，解くことができます．
// ソースコードの引用元 :
https://atcoder.jp/contests/gigacode-2019/submissions/8644524
// 提出ID : 8644524
// 問題ID : gigacode_2019_b
// コンテストID : gigacode-2019
// ユーザID : xryuseix
// コード長 : 1735
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
#define itn int
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
const ll MOD = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 62;

int main(void) {

  int n, x, y, z;
  cin >> n >> x >> y >> z;
  int ans = 0;
  rep(i, n) {
    int a, b;
    cin >> a >> b;
    if (a >= x && b >= y && a + b >= z)
      ans++;
  }
  fin(ans);
}
