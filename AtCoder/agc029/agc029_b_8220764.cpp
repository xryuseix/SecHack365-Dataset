/*
問題文の引用元：https://atcoder.jp/contests/agc029/tasks/agc029_b
B - Powers of twoEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 600 点
問題文 : 高橋君は正整数が書かれたボールを N 個持っています。i
番目のボールに書かれている正整数は A_i です。高橋君は N
個のボールからいくつかのペアを作って、それぞれのペアのボールに書かれた数の和が 2
べきとなるようにしたいです。ただし、同じボールが複数のペアに属することはできません。最大でいくつのペアが作れるか求めてください。ただし、正整数が
2 べきであるとは、ある非負整数 t を用いて 2^t と書けることを指します。
制約1 \leq N \leq 2\times 10^51 \leq A_i \leq 10^9A_i
は整数入力入力は以下の形式で標準入力から与えられる。NA_1 A_2 ... A_N出力2
つのボールに書かれた数の和が 2
べきとなるペアの個数として考えられる最大値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/agc029/submissions/8220764
// 提出ID : 8220764
// 問題ID : agc029_b
// コンテストID : agc029
// ユーザID : xryuseix
// コード長 : 1955
// 実行時間 : 168



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

  ll n;
  cin >> n;
  multiset<ll> s;
  rep(i, n) {
    ll d;
    cin >> d;
    s.insert(d);
  }

  ll ans = 0;

  while (s.size() > 1) {
    ll x = *prev(s.end());
    s.erase(prev(s.end()));
    ll a = 1;
    while (a <= x) {
      a *= 2;
    }
    if (s.find(a - x) != s.end()) {
      ans++;
      s.erase(s.find(a - x));
    }
  }
  fin(ans);
}
