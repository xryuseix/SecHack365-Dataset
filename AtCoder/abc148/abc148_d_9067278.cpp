/*
問題文の引用元：https://atcoder.jp/contests/abc148/tasks/abc148_d
D - Brick BreakEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 400 点
問題文 : N 個のレンガが横一列に並んでいます。左から i~(1 \leq i \leq N)
番目のレンガには、整数 a_i が書かれています。あなたはこのうち N - 1
個以下の任意のレンガを選んで砕くことができます。その結果、K
個のレンガが残っているとします。このとき、任意の整数 i~(1 \leq i \leq K)
について、残っているレンガの中で左から i 番目のものに書かれた整数が i
であるとき、すぬけさんは満足します。すぬけさんが満足するために砕く必要のあるレンガの最小個数を出力してください。もし、どのように砕いてもそれが不可能な場合、代わりに
-1 を出力してください。
制約入力は全て整数である。1 \leq N \leq 2000001 \leq a_i \leq
N入力入力は以下の形式で標準入力から与えられる。Na_1 a_2 ...
a_N出力すぬけさんが満足するために砕く必要のあるレンガの最小個数を出力せよ。もし、どのように砕いてもそれが不可能な場合、代わりに
-1 を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc148/submissions/9067278
// 提出ID : 9067278
// 問題ID : abc148_d
// コンテストID : abc148
// ユーザID : xryuseix
// コード長 : 1993
// 実行時間 : 63



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

  int num = 1;
  int n;
  cin >> n;
  vi v(n);
  rep(i, n) cin >> v[i];
  bool ch = false;
  rep(i, n) {
    // cout<<v[i]<<' '<<num<<endl;
    if (v[i] == num) {
      num++;
      ch = 1;
    }
    // cout<<num<<endl<<endl;
  }
  // cout<<num<<" "<<n<<endl;
  num--;
  if (!ch)
    fin(-1);
  else
    fin(n - num);
}
