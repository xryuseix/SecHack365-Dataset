/*
問題文の引用元：https://atcoder.jp/contests/abc026/tasks/abc026_d
D - 高橋君ボール1号Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 高橋君は野球が得意です。高橋君は、高橋君ボール 1
号という変化球を投げることが出来ます。このボールは、投げてから t
秒後のボールの位置を f(t) とすると、 f(t) = A \times t + B \times{\rm sin}(C
\times t \times π) と表すことが出来ます。あなたは、t ≧ 0 かつ f(t) = 100
となるタイミングで、ボールを打たなければいけません。この時の t
を求めたいです。入力入力は以下の形式で標準入力から与えられる。A B C1
行目には、f(t) の式を表す整数 A,B,C (1≦A,B,C≦100)
が、スペース区切りで与えられる。出力f(t) = 100 となる、 0 以上の t を 1
つ出力せよ。解が複数ある場合は、どの解を出力しても良い。この問題は誤差が発生するが、
|f(t) - 100| ≦ 10^{-6}
であれば、正解となる。出力の末尾には改行を入れること。誤差が出やすい問題ですので、誤差に十分に注意してください。
// ソースコードの引用元 : https://atcoder.jp/contests/abc026/submissions/7895485
// 提出ID : 7895485
// 問題ID : abc026_d
// コンテストID : abc026
// ユーザID : xryuseix
// コード長 : 2556
// 実行時間 : 2



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

double a, b, c;
double pi = 3.14159265358979;
#define PI (acos(-1))

double f(double t) { return a * t + b * sin(c * PI * t); }

int main(void) {

  cin >> a >> b >> c;
  double l = 0.0, r = 100000.0;
  while (1) {
    // printf("%.20f %.20f\n",l,r);
    if (r - l < 0.00000000001)
      break;
    double mid = (l + r) / 2;
    double fmid = f(mid);
    if (fmid < 100.0) {
      l = mid;
    } else {
      r = mid;
    }
  }
  // cout<<l<<" "<<r<<endl;
  printf("%.10f\n", l);
  // printf("%.10f\n",f(3.0556612178));
}
