/*
問題文の引用元：https://atcoder.jp/contests/nikkei2019-ex/tasks/nikkei2019ex_g
G - 回文スコアEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 400 点
問題文 : 文字列 S が与えられます。S
に含まれる文字をそれぞれ一度ずつ使い、何個かの回文を作ることを考えます。例えば S
= aaab のとき、二つの回文 aba と a
を作ることができます。このように、文字は自由な順序で使用することができ、S
に複数回現れる文字は合計でその回数だけ使用します。長さ L の回文を 1
個作るごとに、L^2
のスコアが得られます。最大で合計いくつのスコアを得ることができるでしょうか？
制約1 ≦ |S| ≦ 100,000S
は小文字アルファベットのみからなる。入力入力は以下の形式で標準入力から与えられる。S出力得られる最大の合計スコアを出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/nikkei2019-ex/submissions/7822772
// 提出ID : 7822772
// 問題ID : nikkei2019ex_g
// コンテストID : nikkei2019-ex
// ユーザID : xryuseix
// コード長 : 2631
// 実行時間 : 7



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
        quoted from "https://codeforces.com/contest/472/submission/7996840"
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

  map<char, int> m;
  string s;
  cin >> s;
  rep(i, s.size()) { m[s[i]]++; }
  ll sum = 0;
  for (auto it = m.begin(); it != m.end(); it++) {
    if (it->second >= 2) {
      int t = it->second / 2 * 2;
      sum += t;
      it->second -= t;
    }
  }
  ll one = 0;
  for (auto it = m.begin(); it != m.end(); it++) {
    one += it->second;
  }
  if (one > 0) {
    one--;
    sum++;
  }
  fin(sum * sum + one);
}
