/*
問題文の引用元：https://atcoder.jp/contests/sumitrust2019/tasks/sumitb2019_e
E - Colorful Hats 2Editorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点: 500 点
問題文 : N 人の人が一列に並んでおり、前から順に 1, 2, 3, ..., N
と番号が付けられています。それぞれの人は、赤色・青色・緑色のいずれかの帽子を被っています。
さて、番号 i の人は以下の発言をしました。
「自分より前に、自分と同じ色の帽子を被っている人はちょうど A_i
人いる。」すべての人の発言が正しいとして、N
人の人の帽子の色の組合せとして考えられるものが何通りあるか求めてください。
ただし、答えがとても大きくなる場合があるので、代わりに 1000000007
で割った余りを計算してください。
制約1 \leq N \leq 1000000 \leq A_i \leq
N-1入力中の値はすべて整数入力入力は以下の形式で標準入力から与えられます。  NA_1
A_2 A_3 ... A_N出力N 人の帽子の色の組合せとして考えられるものの個数を 1000000007
で割った余りを出力してください。
// ソースコードの引用元 :
https://atcoder.jp/contests/sumitrust2019/submissions/8757197
// 提出ID : 8757197
// 問題ID : sumitb2019_e
// コンテストID : sumitrust2019
// ユーザID : xryuseix
// コード長 : 2021
// 実行時間 : 29



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
const ll MOD = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 62;

bool ch = true;

int count(vi &a, int n) {
  int count = 0;
  if (a[0] == n)
    count++;
  if (a[2] == n)
    count++;
  if (a[1] == n)
    count++;
  if (a[0] == n)
    a[0]++;
  else if (a[1] == n)
    a[1]++;
  else if (a[2] == n)
    a[2]++;
  else
    ch = false;
  return count;
}

int main(void) {

  int n;
  cin >> n;
  vi v(n);
  rep(i, n) cin >> v[i];
  vi a{0, 0, 0};
  ll ans = 1;
  rep(i, n) {
    ans *= count(a, v[i]);
    ans %= MOD;
  }
  if (ch)
    fin(ans);
  else
    fin(0);
}
