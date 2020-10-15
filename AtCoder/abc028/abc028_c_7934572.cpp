/*
問題文の引用元：https://atcoder.jp/contests/abc028/tasks/abc028_c
C - 数を3つ選ぶマンEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 異なる整数が 5 個与えられます。この中から 3
つ選んでその和で表すことの出来る整数のうち、3
番目に大きいものを出力してください。入力入力は以下の形式で標準入力から与えられる。A
B C D E1 行に 5 つの整数 A, B, C, D, E(1 ≦ A < B < C < D < E ≦ 100)
が空白区切りで与えられる。出力
問題文 :
に述べた通りの結果を出力せよ。出力は標準出力に行い、末尾に改行を入れること。
// ソースコードの引用元 : https://atcoder.jp/contests/abc028/submissions/7934572
// 提出ID : 7934572
// 問題ID : abc028_c
// コンテストID : abc028
// ユーザID : xryuseix
// コード長 : 2368
// 実行時間 : 1



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
#define PI acos(-1)
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

  int a[5];
  vector<int> sum;
  cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
  for (int i = 0; i < 3; i++) {
    for (int j = i + 1; j < 4; j++) {
      for (int k = j + 1; k < 5; k++) {
        sum.push_back(a[i] + a[j] + a[k]);
      }
    }
  }
  Rort(sum);
  fin(sum[2]);
}
