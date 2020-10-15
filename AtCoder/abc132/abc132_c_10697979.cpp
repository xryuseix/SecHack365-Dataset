/*
問題文の引用元：https://atcoder.jp/contests/abc132/tasks/abc132_c
C - Divide the ProblemsEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : 高橋君は、  N
個の競技プログラミング用の問題をつくりました。それぞれの問題には 1 から N
の番号がついており、問題 i の難易度は整数 d_i
で表されます(大きいほど難しいです)。高橋君はある整数 K を決めることで、難易度が
K 以上ならば「 ARC 用の問題」難易度が K 未満ならば「 ABC
用の問題」という風に、これらの問題を二種類に分類しようとしています。「ARC
用の問題」と「ABC 用の問題」が同じ数になるような整数 K
の選び方は何通りあるでしょうか。
制約2 \leqq N \leqq 10^5N は偶数である。1 \leqq d_i \leqq
10^5入力は全て整数である。入力入力は以下の形式で標準入力から与えられます。Nd_1
d_2 ... d_N出力「ARC 用の問題」と「ABC 用の問題」が同じ数になるような整数 K
の選び方の数を出力してください。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc132/submissions/10697979
// 提出ID : 10697979
// 問題ID : abc132_c
// コンテストID : abc132
// ユーザID : xryuseix
// コード長 : 2375
// 実行時間 : 44



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

// vector vの中のn以下の数で最大のものを返す
int bs(vector<int> &v, int x) {
  int ok = -1; //これがx以下
  int ng = v.size(); // x以上
  // 問題によってokとngを入れ替える
  while (abs(ok - ng) > 1) {
    int mid = (ok + ng) / 2;
    if (v[mid] <= x)
      ok = mid;
    else
      ng = mid;
  }
  return ok;
}

int main() {

  int n;
  cin >> n;
  vi v(n);
  rep(i, n) cin >> v[i];
  Sort(v);
  int ans = 0;
  for (int i = 1; i <= 101000; i++) {
    if (n / 2 == bs(v, i - 1) + 1)
      ans++;
  }
  fin(ans);
}
