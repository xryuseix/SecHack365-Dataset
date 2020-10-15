/*
問題文の引用元：https://atcoder.jp/contests/arc036/tasks/arc036_a
A - ぐっすりEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 高橋くんはこれから N 日間の睡眠の予定を建てることにしました。i 日目には
t_i 分だけ寝る予定です。また、高橋くんは連続した 3 日間の睡眠時間の合計が K
分を下回ると、その連続した3日目に睡眠不足になります。厳密に言うと、 x≧3 のとき
x-2 日目、 x-1 日目、 x 日目の睡眠時間の合計が K を下回ると、 x
日目に睡眠不足になります。合計がちょうど
Kになった場合は睡眠不足になりません。あらかじめ高橋くんの睡眠の予定を与えるので、高橋くんが睡眠不足になるかどうかを求めてください。もし睡眠不足になるならば、何日目に睡眠不足になるか求めてください。答えが複数通り考えられるならば、最初に睡眠不足になる日を求めてください。高橋くんは
1 日目と 2
日目には睡眠不足にならないものとします。また、高橋くんは昼寝しかしないので、睡眠により日をまたぐことは考えなくて良いです。入力入力は以下の形式で標準入力から与えられるN
Kt_1t_2:t_N1 行目には高橋くんが予定を建てた日数 N(3 ≦ N ≦ 10^5)
と睡眠不足の基準を表す整数 K(0 ≦ K ≦ 4,320) が空白区切りで与えられる。2
行目からの N 行のうち i 行目には i 日目に予定している睡眠時間を表す整数 t_i(0 ≦
t_i ≦ 1,440) が与えられる。出力もし高橋くんがN日の間に睡眠不足にならないならば
-1 を 1 行に出力せよ。もしなるならば、最初になる日を 1 行に出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/arc036/submissions/6122352
// 提出ID : 6122352
// 問題ID : arc036_a
// コンテストID : arc036
// ユーザID : xryuseix
// コード長 : 1756
// 実行時間 : 9



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

  int n, k;
  cin >> n >> k;
  vi v(n);
  rep(i, n) cin >> v[i];
  int sum = v[0] + v[1] + v[2];
  bool lost = false;
  if (sum < k) {
    cout << 3 << endl;
    return 0;
  }
  for (int i = 3; i < n; i++) {
    sum += v[i];
    sum -= v[i - 3];
    if (sum < k) {
      cout << i + 1 << endl;
      return 0;
    }
  }

  cout << -1 << endl;
  return 0;

  //////////////////////////////////////////////////////
  return 0;
}
