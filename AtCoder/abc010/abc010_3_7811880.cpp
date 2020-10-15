/*
問題文の引用元：https://atcoder.jp/contests/abc010/tasks/abc010_3
C - 浮気調査Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 :
高橋君の秘書のなぎさちゃんは、高橋君が大好きです。今日も高橋君に電話をかけてみることにしました。すると、どうでしょう？　電話口から、高橋君の声以外の、女の声が聞こえてきます。なぎさちゃんは、高橋君と付き合ってはいませんが、高橋君に悪い虫が付いたら大変なので、浮気調査を行うことにしました。高橋君の携帯に仕込んだアプリケーションから、高橋君の居場所をGPSで取得すると、高橋君は、電話をかける前は座標
(tx_a, ty_a) に、電話をかけた後は、座標 (tx_b, ty_b)
にいることがわかりました。また、この間にかかった時間は T
分です。高橋君は、最大毎分 V
の距離を移動することが可能であり、家などの障害物を無視して同じ速度で移動することが可能です。なぎさちゃんは、このデータを元に、高橋君が、近所の女の子の家に寄っていないかを調査することにしました。近所の女の子は
n 人おり、それぞれ座標 (x_i, y_i)
に住んでいます。高橋君が、他の女の子の家に寄った可能性が少しでもある場合はYES、そうでない場合はNOと出力しなさい。入力入力は以下の形式で標準入力から与えられる。tx_a
ty_a tx_b ty_b T Vnx_1 y_1x_2 y_2:x_n y_n1
行目には、高橋君の電話前の座標を表す整数 tx_a, ty_a (0 ≦ tx_a, ty_a ≦
1000)、電話後の座標を表す整数 tx_b, ty_b (0 ≦ tx_b, ty_b ≦
1000)、移動に掛かった時間を表す整数 T (1 ≦ T ≦ 50)、高橋君の毎分の速度を表す整数
V (1 ≦ V ≦ 100)がスペース区切りで与えられる。2
行目には、浮気調査の対象となる女の子の数 n (1 ≦ n  ≦ 1000) が与えられる。3
行目から n 行では、女の子の家の情報が与えられる。このうち i 行目では、i
番目の女の子の家の座標を表す整数 x_i, y_i (0 ≦ x_i, y_i ≦ 1000)
が与えられる。高橋君が、座標 (tx_a, ty_a) から、座標 (tx_b,
ty_b)まで真っ直ぐ毎分 V 移動した時に、T
分より長くかかってしまうような入力は与えられない。出力高橋君が、他の女の子の家に寄ることが可能であればYES、そうでなければNOを
1 行で出力せよ。出力の末尾にも改行をいれること。
// ソースコードの引用元 : https://atcoder.jp/contests/abc010/submissions/7811880
// 提出ID : 7811880
// 問題ID : abc010_3
// コンテストID : abc010
// ユーザID : xryuseix
// コード長 : 2001
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
const int P = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;

double dis(int xa, int ya, int xb, int yb) {
  return sqrt((xb - xa) * (xb - xa) + (yb - ya) * (yb - ya));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  int txa, tya, txb, tyb, t, v, n;
  cin >> txa >> tya >> txb >> tyb >> t >> v >> n;
  int move = t * v;
  bool ch = false;
  rep(i, n) {
    int x, y;
    cin >> x >> y;
    double yoru = dis(x, y, txa, tya) + dis(x, y, txb, tyb);
    if (yoru <= move) {
      ch = true;
    }
  }
  if (ch)
    fin("YES");
  else
    fin("NO");

  //////////////////////////////////////////////////////
  return 0;
}
