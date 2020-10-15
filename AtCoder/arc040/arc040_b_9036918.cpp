/*
問題文の引用元：https://atcoder.jp/contests/arc040/tasks/arc040_b
B - 直線塗りEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : イカの高橋君は床を塗るのが大好きです。床は N 個のマスが左右に 1
列に並んでいるような形をしています。左から i 個目のマスをマス i
と呼ぶことにします。すでにいくつかのマスは塗られていますが、いくつかのマスは塗られていません。高橋君はインクを発射できる射程が
R の銃を使って全てのマスを塗ろうとしています。高橋君は最初マス 1
にいます。そして、1 秒の間に以下のいずれか 1 つの行動が行えます。1
つ右のマスに移動する。すなわち、マス i からマス i+1 に移動する。ただし、マス N
にいるときは行えない。銃を撃って床を塗る。マス i にいるときに銃を撃つと、マス i
からマス i+R-1 までのマスを全て塗ることができる。ただし、i+R-1 が N
より大きい場合は、マス i からマス N
までのマスが塗られる。高橋君が全てのマスを塗るためにかかる時間の最小値を求めてください。入力入力はイカの形式で標準入力から与えられる。N
RS1 行目には、マス目の個数を表す整数 N (1 ≦ N ≦ 100) と銃の射程を表す整数 R (1 ≦
R ≦ N) が空白区切りで与えられる。2 行目には、長さ N の文字列 S
が与えられる。このうち i (1 ≦ i ≦ N) 文字目は、マス i
の情報を以下のように表す。. の場合：このマスがまだ塗られていないことを表す。o
の場合：このマスがすでに塗られていることを表す。出力高橋君が全てのマスを塗るためにかかる時間の最小値を
1 行に出力せよ。出力の末尾に改行を入れること。
// ソースコードの引用元 : https://atcoder.jp/contests/arc040/submissions/9036918
// 提出ID : 9036918
// 問題ID : arc040_b
// コンテストID : arc040
// ユーザID : xryuseix
// コード長 : 2050
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

  int n, r;
  cin >> n >> r;
  string s;
  cin >> s;
  int gun = 0;
  int walk;
  for (int i = n - 1; i >= 0; i--) {
    if (s[i] == '.') {
      walk = i;
      break;
    }
  }
  walk = max(0, walk - r + 1);
  for (int i = 0; i < n; i++) {
    if (s[i] == '.') {
      gun++;
      for (int j = i; j <= i + r - 1 && j < n; j++) {
        s[j] = 'o';
      }
    }
  }
  fin(gun + walk);
}
