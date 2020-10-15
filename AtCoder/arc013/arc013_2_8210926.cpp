/*
問題文の引用元：https://atcoder.jp/contests/arc013/tasks/arc013_2
B - 引越しできるかな？Editorial
Time Limit : 2 sec / Memory Limit : 64 MB
問題文 :
この春から新生活を始める今城くんは引越しを考えています。そのため、自分の荷物をダンボールに梱包しなければなりません。そこで、引越し業者「AtCoder株式会社」にダンボールを注文することにしました。幸運なことに、AtCoder株式会社では「新生活応援キャンペーン」を行なっており、あるサイズのダンボールなら
1
種類だけ無料で提供しています。これに目をつけた今城くんは、自分の荷物を全て梱包できるようなサイズのダンボールを大量に注文することで、お金を節約することにしました。今城くんが注文しなければならないダンボールの容積の最小値はいくらでしょうかまた、今城くんは
1 つのダンボールに自分の荷物を 1
つだけ梱包します。さらに、今城くんは荷物が運送中に壊れることを防ぐため、斜めに入れることはありません。つまり、荷物の少なくとも1つの面が、ダンボールか他の荷物のある面にぴったりとくっつくように梱包します。入力入力は以下の形式で標準入力から与えられる。CN_{0}
M_{0} L_{0}N_{1} M_{1} L_{1}:N_{C-1} M_{C-1} L_{C-1}入力 C+1 行ある。1
行目には今城くんの荷物の数を表す整数 C(1≦C≦100)  が与えられる。        2
行目から C+1 行目までの C
行では、今城くんの荷物のタテとヨコと高さがそれぞれ半角スペース区切りで与えられる。N_{i}
は今城くんが持っている荷物のタテの長さです。M_{i}
は今城くんが持っている荷物のヨコの長さです。L_{i}
は今城くんが持っている荷物の高さです。1≦N_{i},M_{i},L_{i}≦100
かつ、それぞれの値は整数であることが保証されています。部分点1≦C≦10
を満たす入力にのみ正解した場合、部分点として 40
点が与えられる。出力今城くんが注文しなければならないダンボールの容積の最小値を 1
行で出力すること。また、出力の最後には改行をいれること。
// ソースコードの引用元 : https://atcoder.jp/contests/arc013/submissions/8210926
// 提出ID : 8210926
// 問題ID : arc013_2
// コンテストID : arc013
// ユーザID : xryuseix
// コード長 : 1848
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

  int c;
  cin >> c;
  int amax = 0, bmax = 0, cmax = 0;
  rep(i, c) {
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b)
      swap(a, b);
    if (b > c)
      swap(b, c);
    if (a > b)
      swap(a, b);
    amax = max(a, amax);
    bmax = max(b, bmax);
    cmax = max(c, cmax);
  }
  cout << amax *bmax *cmax << endl;
}
