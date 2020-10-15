/*
問題文の引用元：https://atcoder.jp/contests/tkppc4-1/tasks/tkppc4_1_c
C - 異世界転生Editorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 :                                                 kaisei705君は 10 進法で
N 円を持ってコンビニに行こうとしていました。
しかし、疲れからか不幸にもトラックに轢かれ、なんと異世界に転生してしまいます。
神様によると、世界にはそれぞれ番号が付いており、番号 M の世界では M
進法が使われているということです。
どうやら、転生した後の所持金は、転生先の表示で X 円のようです。
kaisei705「お願いします、元の世界に戻してください！」
神様「この世界の番号が分かったら、考えてやろう。」
kaisei705「（分からないよ...）」
さて、整数 N と文字列 X が与えられるので、彼の代わりに、転生した先の世界の番号 M
を求めてあげてください。
ただし、転生する前と後で所持金額は変わらないものとします。
制約                                    N は整数である。                    9
\leq N \leq 10^{18}                    1 \leq |X| \leq 60
答え M は 2 以上 10 以下の整数であり、この問題の
制約において 1 つに定まることが保証されている。
入力                    入力は以下の形式で標準入力から与えられます。
N X 出力                    答え M を 1 行に出力してください。
// ソースコードの引用元 :
https://atcoder.jp/contests/tkppc4-1/submissions/6556564
// 提出ID : 6556564
// 問題ID : tkppc4_1_c
// コンテストID : tkppc4-1
// ユーザID : xryuseix
// コード長 : 1832
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
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
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
// g++ -std=c++1z temp.cpp
//./a.out

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////
  ll n;
  string x;
  cin >> n >> x;
  for (int i = 2; i <= 10; i++) {
    ll tmp = n;
    string s = "";
    while (tmp > 0) {
      s += tmp % i + '0';
      tmp /= i;
    }
    reverse(all(s));

    if (x == s) {
      cout << i << endl;
      return 0;
    }
  }

  //////////////////////////////////////////////////////
  return 0;
}
