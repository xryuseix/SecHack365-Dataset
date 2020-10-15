/*
問題文の引用元：https://atcoder.jp/contests/abc013/tasks/abc013_3
C - 節制
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 :
セキュリティ意識が高く、最新鋭の錠を購入した高橋君ですが、財布の管理は甘かったらしくお金がピンチな状況です。高橋君の収入は安定せず、次の収入があるのは今から
N 日後です。高橋君は N
日間、できるだけ食費を抑えて節約生活を送ることにしました。はじめ、高橋君の満腹度は
H です。N 日間のそれぞれの日について、その日にとる食事を次の 3 種類の中から 1
つ選びます。普通の食事: A 円の出費をして、満腹度が B 増える。質素な食事: C
円の出費をして、満腹度が D 増える。（ただし、C < A かつ D < B）食事抜き:
出費なしで、満腹度が E
減る。厳しく節約すれば出費を抑えることができますが、あまりに節約しすぎて体調を崩してしまってはいけないため、N
日間で一度も満腹度が 0
以下にならないようにしなければなりません。高橋君は最低何円の食費で N
日間を乗り切ることができるでしょうか？ただし、高橋君は超人級の胃袋を持っており、その満腹度には上限がないとする。すなわち、いくら食事をしても高橋君の満腹度が頭打ちになることはない。入力入力は以下の形式で標準入力から与えられる。N
HA B C D E1 行目には、節約生活の日数を表す整数 N (1\,≦\,N\,≦\,5 \times 10^5)
と、節約生活を始める前の高橋君の満腹度を表す整数 H (1\,≦\,H\,≦\,10^9)
が空白区切りで与えられる。2 行目には、3 種類の食事に関する情報を表す整数 A, B,
C, D, E がこの順に空白区切りで与えられる。出費について、1\,≦\,C < A\,≦\,10^6
が成り立つ。満腹度の増減について、1\,≦\,D < B\,≦\,10^6 および 1\,≦\,E\,≦\,10^6
が成り立つ。部分点この問題には部分点が設定されている。N\,≦\,10
を満たすテストケース全てに正解すると、部分点として 10 点が与えられる。N\,≦\,50,
H\,≦\,50, B\,≦\,50, D\,≦\,50
を満たすテストケースすべてに正解すると、部分点として 30
点が与えられる。（N\,≦\,10 を満たすテストケース全てにも正解していた場合は合計で
40 点となる）N\,≦\,1,000 を満たすテストケース全てに正解すると、100
点が与えられる。全てのテストケースに正解すると、ボーナス点として追加で 1
点が与えられる。ボーナス点に対応するテストケースに関しては、答えが 32
ビットの整数型に収まらない可能性があることに注意せよ。出力高橋君が満腹度を一度も
0 以下にせずに N 日間の節約生活を乗り切るために必要な食費の最小値が何円かを 1
行に出力せよ。出力の末尾には改行をいれること。



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
#define irep(it, stl) for (auto it = stl.begin(); it != stl.end(); it++)
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
#define itn int;
int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
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
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;
const ll MOD = 1000000007;
const double EPS = 1e-9;

int main(void) {

  ll n, h;
  cin >> n >> h;
  ll a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;
  ll ans = LLINF;
  for (ll x = 0; x <= n; x++) {
    ll y = (e * (n - x) - h - b * x) / (long double)(d + e) + 1;
    if (x + y <= n && y > 0)
      ans = min(ans, a * x + c * y);
    else
      ans = min(ans, x * a);
  }
  fin(ans);
}
