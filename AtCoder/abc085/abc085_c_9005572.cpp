/*
問題文の引用元：https://atcoder.jp/contests/abc085/tasks/abc085_c
C - OtoshidamaEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 300 点
問題文 : 日本でよく使われる紙幣は、10000 円札、5000 円札、1000
円札です。以下、「お札」とはこれらのみを指します。青橋くんが言うには、彼が祖父から受け取ったお年玉袋にはお札が
N 枚入っていて、合計で Y
円だったそうですが、嘘かもしれません。このような状況がありうるか判定し、ありうる場合はお年玉袋の中身の候補を一つ見つけてください。なお、彼の祖父は十分裕福であり、お年玉袋は十分大きかったものとします。
制約1 ≤ N ≤ 20001000 ≤ Y ≤ 2 × 10^7N は整数である。Y は 1000
の倍数である。入力入力は以下の形式で標準入力から与えられる。N Y出力N
枚のお札の合計金額が Y 円となることがありえない場合は、-1 -1 -1 と出力せよ。N
枚のお札の合計金額が Y 円となることがありうる場合は、そのような N
枚のお札の組み合わせの一例を「10000 円札 x 枚、5000 円札 y 枚、1000 円札 z
枚」として、x、y、z
を空白で区切って出力せよ。複数の可能性が考えられるときは、そのうちどれを出力してもよい。
// ソースコードの引用元 : https://atcoder.jp/contests/abc085/submissions/9005572
// 提出ID : 9005572
// 問題ID : abc085_c
// コンテストID : abc085
// ユーザID : xryuseix
// コード長 : 2084
// 実行時間 : 7



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
  }
};
const ll MOD = 1000000007;
const double EPS = 1e-9;
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;

int main(void) {

  int n, y;
  cin >> n >> y;
  int man = 0, go = 0, sen = 0;
  for (man = 0; man <= n; man++) {
    if (10000 * man > y)
      continue;
    for (go = 0; go <= n; go++) {
      if (10000 * man + 5000 * go > y)
        continue;
      int rest = y - 10000 * man - 5000 * go;
      int sen = rest / 1000;
      if (man + go + sen == n && 10000 * man + 5000 * go + 1000 * sen == y) {
        cout << man << " " << go << " " << sen << endl;
        return 0;
      }
    }
  }
  cout << -1 << " " << -1 << " " << -1 << endl;
}
