/*
問題文の引用元：https://atcoder.jp/contests/abc045/tasks/abc045_b
B - 3人でカードゲームイージー / Card Game for Three (ABC Edit)
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : A さん、B さん、C さんの 3
人が以下のようなカードゲームをプレイしています。最初、3 人はそれぞれ a、b、c
いずれかの文字が書かれたカードを、何枚か持っている。これらは入力で与えられた順番に持っており、途中で並べ替えたりしない。A
さんのターンから始まる。現在自分のターンである人がカードを 1
枚以上持っているならば、そのうち先頭のカードを捨てる。その後、捨てられたカードに書かれているアルファベットと同じ名前の人
(例えば、カードに a と書かれていたならば A さん)
のターンとなる。現在自分のターンである人がカードを 1
枚も持っていないならば、その人がゲームの勝者となり、ゲームは終了する。3
人が最初に持っているカードがそれぞれ先頭から順に与えられます。具体的には、文字列
S_A、S_B、S_C が与えられます。文字列 S_A の i 文字目 ( 1 \leq i \leq |S_A| )
に書かれている文字が、A さんの持っている中で先頭から i
番目のカードに書かれている文字です。文字列 S_B、 S_C
についても同様です。最終的に誰がこのゲームの勝者となるかを求めてください。
制約1 \leq |S_A| \leq 1001 \leq |S_B| \leq 1001 \leq |S_C| \leq 100S_A、S_B、S_C
に含まれる文字はそれぞれ a、b、c
のいずれか入力入力は以下の形式で標準入力から与えられる。S_AS_BS_C出力A
さんが勝つなら A、B さんが勝つなら B、C さんが勝つなら C と出力せよ。



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
#pragma GCC optimize("Ofast")
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
#define fin(ans) cout << (ans) << '\n'
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
  }
};
const ll MOD = 1000000007;
const double EPS = 1e-9;
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;

int main(void) {

  string a, b, c;
  cin >> a >> b >> c;
  int pa = 0, pb = 0, pc = 0;
  char turn = 'a';
  while (1) {
    if (turn == 'a' && pa == a.size()) {
      fin("A");
      return 0;
    } else if (turn == 'b' && pb == b.size()) {
      fin("B");
      return 0;
    } else if (turn == 'c' && pc == c.size()) {
      fin("C");
      return 0;
    }
    // cout<<pa<<" "<<pb<<" "<<pc<<endl;
    if (turn == 'a') {
      turn = a[pa];
      pa++;
    } else if (turn == 'b') {
      turn = b[pb];
      pb++;
    } else {
      turn = c[pc];
      pc++;
    }
  }
}
