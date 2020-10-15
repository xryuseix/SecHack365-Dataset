/*
問題文の引用元：https://atcoder.jp/contests/abc112/tasks/abc112_a
A - Programming Education
Time Limit : 2 sec / Memory Limit : 1024 MB
配点: 100 点
問題文 : 2020 年, AtCoder 社は年商 10 億円を超え,
プログラミング教育にも手を出すようになった.ある日行われたテストでは, 1 才児は
Hello World を出力するプログラムを, 2 才児は整数 A, B を入力して A+B
を出力するプログラムを書かなければならない.高橋君はこのテストを受けているが,
突然自分が何才なのかが分からなくなってしまった.そこで, 最初に自分の年齢 N (N は
1 または 2) を入力し, N=1 ならば Hello World と出力し, N=2 ならば A, B
を入力して A+B を出力するプログラムを作ることにした.高橋君に代わって,
このようなプログラムを作りなさい.
制約N は 1 または 2A は 1 以上 9 以下の整数B は 1 以上 9
以下の整数入力入力は以下の 2 つのうちいずれかの形式で標準入力から与えられる.
12AB出力N=1 のとき, Hello World と出力し, N=2 のとき, A+B を出力しなさい.



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
#include <cassert>
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

  int n;
  cin >> n;
  if (n == 1) {
    fin("Hello World");
  } else {
    int a, b;
    cin >> a >> b;
    cout << a + b << endl;
  }
}
