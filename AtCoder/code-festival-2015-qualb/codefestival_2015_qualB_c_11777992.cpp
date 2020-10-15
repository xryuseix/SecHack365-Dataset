/*
問題文の引用元：https://atcoder.jp/contests/code-festival-2015-qualb/tasks/codefestival_2015_qualB_c
C - HotelEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 高橋君は部屋が N 室ある旅館を経営しています。今日は M
組の予約が入っていますが、全ての予約を適切に部屋に割り振ることができるかを確認していませんでした。各予約について、その組の人数以上の定員の部屋を割り振る必要があります。各予約について必ず
1 つの部屋が割り当てられる必要があり、1
つの予約について複数の部屋を割り当てたり、複数の予約を 1
つの部屋に割り当てたりすることはできません。全ての予約に部屋を割り振ることができるならば
YES を、割り振ることができないならば NO
を出力してください。入力入力は以下の形式で標準入力から与えられる。N MA_1 A_2 ...
A_NB_1 B_2 ... B_M1 行目には、2 つの整数 N (1 ≦ N ≦ 10^5), M (1 ≦ M ≦ 10^5)
が空白区切りで与えられる。2 行目には、N
個の整数が空白区切りで与えられる。このうち i (1 ≦ i ≦ N) 番目には、i
番目の部屋の定員を表す整数 A_i (1 ≦ A_i ≦ 10^5) が与えられる。3 行目には、M
個の整数が空白区切りで与えられる。このうち i (1 ≦ i ≦ M) 番目には、i
番目の予約の人数を表す整数 B_i (1 ≦ B_i ≦ 10^5)
が与えられる。出力全ての予約に部屋を割り振ることができるならば YES
を、割り振ることができないならば NO を 1
行に出力せよ。出力の末尾に改行を入れること。部分点この問題には部分点が設定されている。N
≦ 100, M ≦ 100 を満たすデータセットに正解した場合は、60 点が与えられる。追加の
制約のないデータセットに正解した場合は、上記とは別に 40 点が与えられる。
// ソースコードの引用元 :
https://atcoder.jp/contests/code-festival-2015-qualb/submissions/11777992
// 提出ID : 11777992
// 問題ID : codefestival_2015_qualB_c
// コンテストID : code-festival-2015-qualb
// ユーザID : xryuseix
// コード長 : 2544
// 実行時間 : 69



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

int main() {

  int n, m;
  cin >> n >> m;
  vi v(n), w(m);
  rep(i, n) cin >> v[i];
  rep(i, m) cin >> w[i];
  Rort(v);
  Rort(w);
  if (n < m) {
    fin("NO");
    return 0;
  }
  int wpos = 0;
  for (int i = 0; wpos < m && i < n; i++) {
    if (v[i] >= w[wpos]) {
      wpos++;
    }
  }

  YN(wpos == m);
}
