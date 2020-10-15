/*
問題文の引用元：https://atcoder.jp/contests/abc117/tasks/abc117_b
B - PolygonEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : 2 次元平面上に辺の長さがそれぞれ L_1, L_2, ..., L_N の N
角形(凸多角形でなくてもよい)が描けるかを判定してください。ここで、次の定理を利用しても構いません。定理
: 一番長い辺が他の N-1 辺の長さの合計よりも真に短い場合に限り、条件を満たす N
角形が描ける。
制約入力は全て整数である。3 \leq N \leq 101 \leq L_i \leq
100入力入力は以下の形式で標準入力から与えられる。NL_1 L_2 ...
L_N出力条件を満たす N 角形が描けるなら Yes、そうでないなら No を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc117/submissions/9273017
// 提出ID : 9273017
// 問題ID : abc117_b
// コンテストID : abc117
// ユーザID : xryuseix
// コード長 : 1876
// 実行時間 : 2



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
  }
};
const ll MOD = 1000000007;
const double EPS = 1e-9;
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;

int main(void) {

  // int n;
  // cin>>n;
  // cout<<pow(2,floor(log2(n)))<<endl;

  int n;
  cin >> n;
  vi v(n);
  rep(i, n) cin >> v[i];
  Sort(v);
  int sum = 0;
  rep(i, n - 1) sum += v[i];
  if (v[n - 1] >= sum)
    fin("No");
  else
    fin("Yes");
}