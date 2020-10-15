/*
問題文の引用元：https://atcoder.jp/contests/arc054/tasks/arc054_a
A - 動く歩道Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 高梁空港には、周長 L の円形の動く歩道があり、その床面は 1 秒間に距離 X
進む速度で時計回りに動いています。動く歩道のある円周上の点の位置は、その中で最も北にある点から時計回りに測った距離
( 0 以上 L 未満) であらわされます。動く歩道の外周の位置 D
の点には出口があり、そこから動く歩道の外に出ることができるようになっています。それ以外の外周と内周には手すりがあるため、高橋君は出口以外の場所から外に出ることはできません。高橋君は動く歩道の床面に対して
1 秒間に距離 Y
進む速度で時計回りまたは反時計回りに歩くことができ、動く歩道上の位置 S
の点に乗っています。高橋君が出口にたどり着くまでにかかる最小の時間を求めてください。なお、出口の
1
箇所しかない動く歩道にわざわざ乗るような物好きな人は高橋君以外にはいないので、動く歩道を逆走しても誰にも迷惑をかけることはありません。
制約1 ≦ L,X,Y ≦ 10^9, 0 ≦ S,D ≦
L-1入力はすべて整数である。入力入力は以下の形式で標準入力から与えられる。L X Y S
D出力高橋君が出口にたどり着くまでにかかる最小の時間を 1
行に出力せよ。絶対誤差あるいは相対誤差が 10^{-6}
以下のとき正答と認められる。出力の最後には改行を忘れないこと。
// ソースコードの引用元 : https://atcoder.jp/contests/arc054/submissions/8438042
// 提出ID : 8438042
// 問題ID : arc054_a
// コンテストID : arc054
// ユーザID : xryuseix
// コード長 : 1876
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
const int MOD = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 62;

int main(void) {

  double l, x, y, s, d;
  cin >> l >> x >> y >> s >> d;
  double dis;
  if (s <= d)
    dis = d - s;
  else
    dis = d - s + l;
  dis = dis / (x + y);
  if (x < y) {
    double dis2;
    if (s >= d)
      dis2 = s - d;
    else
      dis2 = s - d + l;
    dis2 = dis2 / (y - x);
    dis = min(dis, dis2);
  }
  printf("%.8f\n", dis);
}
