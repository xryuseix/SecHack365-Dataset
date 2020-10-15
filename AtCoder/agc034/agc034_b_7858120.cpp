/*
問題文の引用元：https://atcoder.jp/contests/agc034/tasks/agc034_b
B - ABCEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 600 点
問題文 : A,B,C からなる文字列 s が与えられます。すぬけ君は s
に対して次の操作をできるだけ多く行おうとしています。s
の連続した部分文字列であって ABC であるようなものをひとつ選び、 BCA
に書き換える。操作回数の最大値を求めてください。
制約1 ≦ |s| ≦ 200000s の各文字は A,B,C
のいずれか入力入力は以下の形式で標準入力から与えられる。s出力操作回数の最大値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/agc034/submissions/7858120
// 提出ID : 7858120
// 問題ID : agc034_b
// コンテストID : agc034
// ユーザID : xryuseix
// コード長 : 2327
// 実行時間 : 10



/*
                                   _ooOoo_
                                  o8888888o
                                  88" . "88
                                  (| -_- |)
                                  O\  =  /O
                           ____/`---'\____
                         .'  \\|     |//  `.
                        /  \\|||  :  |||//  \
                   /  _||||| -:- |||||-  \
                   |   | \\\  -  /// |   |
                   | \_|  ''\---/''  |   |
                   \  .-\__  `-`  ___/-. /
                 ___`. .'  /--.--\  `. . __
          ."" '<  `.___\_<|>_/___.'  >'"".
         | | :  `- \`.;`\ _ /`;.`/ - ` : | |
         \  \ `-.   \_ __\ /__ _/   .-` /  /
======`-.____`-.___\_____/___.-`____.-'======
                                   `=---='
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
                fozubaoyou    pass System Test!
                quoted from
"https://codeforces.com/contest/472/submission/7996840"
*/

* /
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
    using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
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
const int MOD = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;

int main(void) {

  string s;
  cin >> s;
  ll ans = 0;
  int na = 0;
  for (int i = 0; i < s.size() - 1; i++) {
    if (s[i] == 'A') {
      na++;
    } else if (s[i] == 'B' && s[i + 1] == 'C') {
      ans += na;
      i++;
    } else {
      na = 0;
    }
  }
  fin(ans);
}
