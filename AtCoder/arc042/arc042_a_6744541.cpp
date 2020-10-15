/*
問題文の引用元：https://atcoder.jp/contests/arc042/tasks/arc042_a
A - 掲示板Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 1 から N
までの番号がついたスレッドのある掲示板があります。スレッドは書き込みがあると一番上に来ます。書き込み前のスレッドは上から順に
1 から N の順に並んでいました。M
個の書き込みが書き込まれた順で与えられるので、全ての書き込みが終わった後のスレッドの順番を出力してください。例えば、3
個のスレッドがある掲示板に 2、3、1
の順で書き込みがあると、以下のようになります。従って、書き込み後のスレッドの順番は
1、3、2 となります。入力入力は以下の形式で標準入力から与えられる。N Ma_1a_2:a_M1
行目には、スレッドの数と書き込みの数を表す 2 つの整数 N, M (1 ≦ N ≦ 10^5, 1 ≦ M
≦ 10^5) が空白区切りで与えられる。続く M 行の i 行目には i
番目に書き込まれたスレッドを表す整数 a_i (1 ≦ a_i ≦ N)
が与えられる。部分点この問題には部分点が設定されている。1 ≦ N ≦ 100, 1 ≦ M ≦ 100
を満たすデータセットに正解した場合は 30
点が与えられる。出力全ての書き込みが終わった後のスレッドの番号を上から順に 1
行ずつ出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/arc042/submissions/6744541
// 提出ID : 6744541
// 問題ID : arc042_a
// コンテストID : arc042
// ユーザID : xryuseix
// コード長 : 1925
// 実行時間 : 167



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

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  int n, m;
  cin >> n >> m;
  vi v(n, 0), w(m);
  int co = 1;
  rep(i, m) cin >> w[i];
  reverse(all(w));
  rep(i, m) if (v[w[i] - 1] == 0) {
    v[w[i] - 1] = co;
    co++;
  }
  rep(i, n) {
    if (v[i] == 0) {
      v[i] = co;
      co++;
    }
  }
  vpii z;
  rep(i, n) z.push_back(mp(v[i], i + 1));
  Sort(z);
  rep(i, n) { cout << z[i].second << endl; }

  //////////////////////////////////////////////////////
  return 0;
}
