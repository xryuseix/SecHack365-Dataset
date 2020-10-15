/*
問題文の引用元：https://atcoder.jp/contests/abc155/tasks/abc155_b
B - Papers, Please
Time Limit : 2 sec / Memory Limit : 1024 MB
配点: 200 点
問題文 : あなたは AtCoder
王国の入国審査官です。入国者の書類にはいくつかの整数が書かれており、あなたの仕事はこれらが条件を満たすか判定することです。規約では、次の条件を満たすとき、またその時に限り、入国を承認することになっています。書類に書かれている整数のうち、偶数であるものは全て、3
または 5 で割り切れる。上の規約に従うとき、書類に N 個の整数 A_1, A_2, \dots,
A_N が書かれた入国者を承認するならば APPROVED を、しないならば DENIED
を出力してください。注記
問題文 : 中の条件は、「x が書類に書かれている整数のうち、偶数であるものならば、x
は 3 または 5 で割り切れる。」 と言い換えられます。ここで、「または」 「ならば」
は論理学における意味です。
制約入力はすべて整数1 \leq N \leq 1001 \leq A_i \leq
1000入力入力は以下の形式で標準入力から与えられる。NA_1 A_2 \dots
A_N出力規約に従うとき、入国者を承認するならば APPROVED を、しないならば DENIED
を出力せよ。



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
  vi v(n);
  rep(i, n) cin >> v[i];
  bool ch = true;
  rep(i, n) {
    if (v[i] % 2 == 0) {
      if (v[i] % 3 != 0 && v[i] % 5 != 0) {
        ch = false;
      }
    }
  }
  if (ch) {
    fin("APPROVED");
  } else {
    fin("DENIED");
  }
}