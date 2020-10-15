/*
問題文の引用元：https://atcoder.jp/contests/abc138/tasks/abc138_e
E - Strings of ImpurityEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 500 点
問題文 : 英小文字からなる二つの文字列 s, t が与えられます。次の条件を満たす整数
i (1 \leq i \leq 10^{100} \times |s|)
が存在するか判定し、存在する場合はそのような i の最小値を求めてください。s を
10^{100} 個連結して得られる文字列を s' とする。t は、文字列
{s'}_1{s'}_2\ldots{s'}_i (s' の先頭 i 文字) の部分列である。注記文字列 a
の部分列とは、a から 0
文字以上を削除して残った文字を相対的な順序を保ったまま連結して得られる文字列です。例えば、contest
の部分列には net, c, contest などがあります。
制約1 \leq |s| \leq 10^51 \leq |t| \leq 10^5s, t
は英小文字からなる。入力入力は以下の形式で標準入力から与えられる。st出力条件を満たす整数
i が存在する場合はそのような i の最小値を、存在しない場合は -1 を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc138/submissions/10808679
// 提出ID : 10808679
// 問題ID : abc138_e
// コンテストID : abc138
// ユーザID : xryuseix
// コード長 : 2738
// 実行時間 : 27



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

  string s;
  string t;
  cin >> s >> t;
  map<int, vector<int>> m;
  rep(i, s.size()) m[s[i]].pb(i);
  rep(i, s.size()) m[s[i]].pb(i + s.size());
  irep(i, m) Sort(i->second);
  ll ans = 0;
  int b = 0;
  rep(i, t.size()) {
    if (m.find(t[i]) == m.end()) {
      fin(-1);
      return 0;
    }
    b = *lower_bound(m[t[i]].begin(), m[t[i]].end(), b) + 1;
    if (b >= (int)s.size()) {
      b -= (int)s.size();
      ans += (int)s.size();
    }
  }
  ans += b;
  fin(ans);
}