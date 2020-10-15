/*
問題文の引用元：https://atcoder.jp/contests/code-festival-2016-quala/tasks/codefestival_2016_qualA_b
B - Friendly RabbitsEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : N 匹のうさぎがいます。うさぎには 1 から N まで番号が振られています。各
1≤i≤N について、うさぎ i はうさぎ a_i
が好きです。ただし、自分自身が好きなうさぎはいません。すなわち、a_i≠i
です。うさぎ i とうさぎ j のペア (i，j) (i＜j) が次の条件を満たすとき、ペア
(i，j) は仲良しであるといいます。うさぎ i はうさぎ j が好きであり、うさぎ j
はうさぎ i が好きである。仲良しなペアの個数を求めてください。
制約2≤N≤10^51≤a_i≤Na_i≠i入力入力は以下の形式で標準入力から与えられる。Na_1 a_2
... a_N出力仲良しなペアの個数を出力してください。
// ソースコードの引用元 :
https://atcoder.jp/contests/code-festival-2016-quala/submissions/10766781
// 提出ID : 10766781
// 問題ID : codefestival_2016_qualA_b
// コンテストID : code-festival-2016-quala
// ユーザID : xryuseix
// コード長 : 2052
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
#define STLL(s) strtoll(s.c_str(), NULL, 10)
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
#define MATHPI acos(-1)
#define itn int;
#define endl '\n';
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

int main() {

  int n;
  cin >> n;
  vi v(n);
  rep(i, n) cin >> v[i];
  int ans = 0;
  rep(i, n) {
    if (v[i] > i)
      continue;
    else {
      if (v[v[i] - 1] == i + 1) {
        ans++;
      }
    }
  }
  fin(ans);
}
