/*
問題文の引用元：https://atcoder.jp/contests/abc026/tasks/abc026_c
C - 高橋君の給料Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 高橋君は、社員が N
人いる会社の社長です。高橋君の会社では、以下のように給料が決まっています。高橋君を含む社員の全員が、
1 から N までの社員番号を持っている。高橋君の社員番号はもちろん 1
である。高橋君以外の社員には、必ず自分より社員番号が小さい上司がただ一人存在する。自分が上司になっている社員のことを、直属の部下と呼ぶ。直属の部下がいない社員の給料は
1 であり、直属の部下がいる社員の給料は 、{\rm max}(その社員の直属の部下の給料) +
{\rm min}(その社員の直属の部下の給料) + 1
である。直属の部下が一人しかいない場合は、その部下の給料の 2 倍 + 1
が、その社員の給料となる。この時、高橋君の給料を求めなさい。入力入力は以下の形式で標準入力から与えられる。NB_2B_3:B_N1
行目には、社員の数を表す整数 N (1≦N≦20) が与えられる。2 行目からの N-1
行には、各社員の上司の情報が与えられる。このうち i 行目には、 社員番号 i + 1
番の社員の上司の社員番号を表す整数 B_i(1≦B_i≦i) が、 1
行で与えられる。出力高橋君の給料を 1
行で出力しなさい。出力の末尾には改行を入れること。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc026/submissions/13163201
// 提出ID : 13163201
// 問題ID : abc026_c
// コンテストID : abc026
// ユーザID : xryuseix
// コード長 : 3082
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
typedef vector<pair<ll, ll>> vpll;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef vector<vector<string>> vvs;
typedef vector<vector<ll>> vvll;
typedef map<int, int> mii;
typedef set<int> si;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
#define arep(i, v) for (auto i : v)
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
constexpr int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
constexpr int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
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
constexpr ll LLINF = 1LL << 60;
constexpr ll MOD = 1000000007;
constexpr double EPS = 1e-9;

vvi v(20);
vi ans(20, -1);
void dfs(int pos) {
  if (v[pos].size() == 0) {
    ans[pos] = 1;
    return;
  } else if (v[pos].size() == 1) {
    if (ans[v[pos][0]] == -1)
      dfs(v[pos][0]);
    ans[pos] = ans[v[pos][0]] * 2 + 1;
    return;
  } else {
    int mi = INF, ma = -INF;
    for (int i = 0; i < v[pos].size(); i++) {
      if (ans[v[pos][i]] == -1)
        dfs(v[pos][i]);
      chmax(ma, ans[v[pos][i]]);
      chmin(mi, ans[v[pos][i]]);
    }
    ans[pos] = ma + mi + 1;
  }
}

int main() {

  int n;
  cin >> n;
  rep(i, n - 1) {
    int a;
    cin >> a;
    a--;
    v[a].pb(i + 1);
  }
  dfs(0);
  fin(ans[0]);
}
