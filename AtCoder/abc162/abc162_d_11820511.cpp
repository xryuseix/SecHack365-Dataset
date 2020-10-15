/*
問題文の引用元：https://atcoder.jp/contests/abc162/tasks/abc162_d
D - RGB TripletsEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 400 点
問題文 : R, G, B のみからなる、長さ N の文字列 S があります。以下の 2
つの条件をともに満たす組 (i,~j,~k)~(1 \leq i < j < k \leq N)
の数を求めてください。S_i \neq S_j かつ S_i \neq S_k かつ S_j \neq S_k であるj -
i \neq k - j である
制約1 \leq N \leq 4000S は R, G, B のみからなる、長さ N
の文字列である入力入力は以下の形式で標準入力から与えられる。NS出力題意を満たす組の数を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc162/submissions/11820511
// 提出ID : 11820511
// 問題ID : abc162_d
// コンテストID : abc162
// ユーザID : xryuseix
// コード長 : 3687
// 実行時間 : 273



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
#include <random>
#include <iomanip>
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
typedef map<int, int> mii;
typedef set<int> si;
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
#define itn int
// #define endl '\n';
#define fi first
#define se second
#define NONVOID [[nodiscard]]
const int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
const int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
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
template <class T> inline void dump(T &v) {
  irep(i, v) { cout << *i << ((i == --v.end()) ? '\n' : ' '); }
}
inline string getline() {
  string s;
  getline(cin, s);
  return s;
}
inline void yn(const bool b) { b ? fin("yes") : fin("no"); }
inline void Yn(const bool b) { b ? fin("Yes") : fin("No"); }
inline void YN(const bool b) { b ? fin("YES") : fin("NO"); }
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
  string s;
  cin >> n >> s;
  vvi v(3);
  ll ans = 0;
  vi w(n);
  rep(i, n) {
    if (s[i] == 'R')
      w[i] = 0;
    else if (s[i] == 'G')
      w[i] = 1;
    else if (s[i] == 'B')
      w[i] = 2;
  }
  rep(i, n) v[w[i]].pb(i);
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (w[i] == w[j])
        continue;
      int last;
      if (min(w[i], w[j]) == 0 && max(w[i], w[j]) == 1)
        last = 2;
      else if (min(w[i], w[j]) == 1 && max(w[i], w[j]) == 2)
        last = 0;
      else if (min(w[i], w[j]) == 0 && max(w[i], w[j]) == 2)
        last = 1;
      int tmp = 0;
      int pos = bs(v[last], j) + 1;
      // cout<<i<<" "<<j<<" "<<pos<<" ";
      if (pos == v[last].size())
        tmp += 0;
      else {
        tmp += v[last].size() - pos;
        if (j + (j - i) < w.size() && w[j + (j - i)] == last)
          tmp--;
        // cout<<w[j+(j-i)]<<" "<<last<<" ";
      }
      // cout<<tmp<<endl;
      ans += tmp;
    }
  }
  fin(ans);
}
