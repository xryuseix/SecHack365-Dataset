/*
問題文の引用元：https://atcoder.jp/contests/joi2020yo2/tasks/joi2020_yo2_c
C - 桁和 (Digit Sum)Editorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点： 100 点
問題文 : JOI 君は初めに 1 以上 N 以下のある整数を持っていた．JOI
君は以下の操作を 0 回以上行ったところ，持っている整数が N
になった．持っている整数を十進法で表したときの各桁の和を，持っている整数に足す．N
が与えられるので，JOI
君が初めに持っていた可能性のある整数の個数を求めるプログラムを作成せよ．
制約1 \leqq N \leqq 1\,000\,000．N
は整数である．入力入力は以下の形式で標準入力から与えられる．N出力JOI
君が初めに持っていた可能性のある整数の個数を 1 行で出力せよ．
// ソースコードの引用元 :
https://atcoder.jp/contests/joi2020yo2/submissions/9241756
// 提出ID : 9241756
// 問題ID : joi2020_yo2_c
// コンテストID : joi2020yo2
// ユーザID : xryuseix
// コード長 : 2059
// 実行時間 : 1004



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

int digsum(int n) {
  int res = 0;
  while (n > 0) {
    res += n % 10;
    n /= 10;
  }
  return res;
}

set<int> use;

int beforenum(int n) {
  use.insert(n);
  int sum = 0;

  for (int i = 1; i < 100; i++) {
    if (n - i < 1)
      break;
    if (n == n - i + digsum(n - i) && use.count(n - i) == 0) {
      sum += beforenum(n - i);
    }
  }
  return sum + 1;
}

int main(void) {

  set<int> rest;
  int n, ans = 0;
  cin >> n;

  ans = beforenum(n);

  fin(ans);
}
