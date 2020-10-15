/*
問題文の引用元：https://atcoder.jp/contests/arc062/tasks/arc062_b
D - AtCoDeer and Rock-PaperEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 300 点
問題文 :
シカのAtCoDeerくんは友達のTopCoDeerくんとあるゲームをして対戦しています。このゲームは
N
ターンからなります。各ターンではそれぞれのプレイヤーはじゃんけんのグーかパーを出します。ただし、各プレイヤーは次の条件を満たす必要があります。(※)
各ターンの後で、(今までにパーを出した回数)≦(今までにグーを出した回数)　を満たすこのゲームでの各プレイヤーの得点は、(勝ったターンの数)
- (負けたターンの数)
です。AtCoDeerくんは特殊能力を持っているので、ゲームが始まる前にTopCoDeerくんの出す
N ターンの手を全て知ることが出来ました。
AtCoDeerくんの各ターンでの手を決めて、AtCoDeerくんの得点を最大化してください。TopCoDeerくんの出す手の情報は文字列
s で与えられます。 s の i(1≦i≦N) 文字目が gのときは i
ターン目でTopCoDeerくんがグーを出すことを、 pのときはパーを出すことを表します。
制約1≦N≦10^5N=|s|s の各文字はgかps
で表される手は、条件(※)を満たしている入力入力は以下の形式で標準入力から与えられる。s出力AtCoDeerくんの得点の最大値を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/arc062/submissions/11346523
// 提出ID : 11346523
// 問題ID : arc062_b
// コンテストID : arc062
// ユーザID : xryuseix
// コード長 : 2311
// 実行時間 : 6



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

  string s;
  cin >> s;
  int ans = 0;
  for (int i = 0; i < s.size(); i++) {
    if (i < (s.size() + 1) / 2) {
      if (s[i] == 'p')
        ans--;
    } else {
      if (s[i] == 'g')
        ans++;
    }
  }
  fin(ans);
}
