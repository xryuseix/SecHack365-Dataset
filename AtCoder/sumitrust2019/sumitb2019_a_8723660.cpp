/*
問題文の引用元：https://atcoder.jp/contests/sumitrust2019/tasks/sumitb2019_a
A - November 30Editorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点: 100 点
問題文 : 2019 年 11 月 30 日のような、ある月の最後の日を「月末日」といいます。
整数 M_1, D_1, M_2, D_2 が入力されます。2019 年 M_1 月 D_1 日の次の日が 2019 年
M_2 月 D_2 日であることが分かっています。2019 年 M_1 月 D_1
日が月末日であるか判定してください。
制約2019 年 M_1 月 D_1 日、2019 年 M_2 月 D_2
日はともにグレゴリオ暦において存在する日付である。2019 年 M_1 月 D_1
日の次の日は 2019 年 M_2 月 D_2
日である。入力入力は以下の形式で標準入力から与えられます。  M_1 D_1M_2
D_2出力2019 年 M_1 月 D_1 日が月末日である場合は 1、そうでない場合は 0
と出力してください。
// ソースコードの引用元 :
https://atcoder.jp/contests/sumitrust2019/submissions/8723660
// 提出ID : 8723660
// 問題ID : sumitb2019_a
// コンテストID : sumitrust2019
// ユーザID : xryuseix
// コード長 : 1646
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

  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if (a != c)
    fin(1);
  else
    fin(0);
}
