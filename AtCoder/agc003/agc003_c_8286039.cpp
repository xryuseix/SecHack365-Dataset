/*
問題文の引用元：https://atcoder.jp/contests/agc003/tasks/agc003_c
C - BBuBBBlesort!Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 600 点
問題文 : 高橋君は、誕生日に長さ N の数列をもらいました。i(1 ≦ i ≦ N)
番目の要素は整数 A_i です。どの 2
つの要素も、互いに異なります。高橋君はこの数列を単調増加になるように並べ替えたいです。高橋君は超能力者なので、以下の
2 つの操作が任意のタイミングでできます。操作1: 数列の連続する 2
つの要素を選び、その 2 つの順番を反転する。操作2: 数列の連続する 3
つの要素を選び、その 3
つの順番を反転する。高橋君は操作2は好きですが、操作1は嫌いです。この 2
種類の操作を使って数列を単調増加になるように並び替えるときの、操作1の最小回数を求めてください。
制約1 ≦ N ≦ 10^50 ≦ A_i ≦ 10^9i ≠ j ならば A_i ≠
A_j入力はすべて整数である。入力入力は以下の形式で標準入力から与えられる。NA_1:A_N出力操作1の最小回数を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/agc003/submissions/8286039
// 提出ID : 8286039
// 問題ID : agc003_c
// コンテストID : agc003
// ユーザID : xryuseix
// コード長 : 1945
// 実行時間 : 101



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
const int MOD = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 62;

int main(void) {

  int n;
  cin >> n;
  vi v(n);
  vc c(n);
  rep(i, n) c[i] = 'A' + i % 2;
  rep(i, n) cin >> v[i];
  vi w = v;
  Sort(w);
  map<int, char> m;
  for (int i = 0; i < n; i++) {
    m[w[i]] = 'A' + i % 2;
  }
  int incorrect = 0;
  for (int i = 0; i < n; i++) {
    if (c[i] != m[v[i]])
      incorrect++;
  }
  // rep(i,n)cout<<c[i]<<endl;
  cout << incorrect / 2 << endl;
}
