/*
問題文の引用元：https://atcoder.jp/contests/abc164/tasks/abc164_b
B - BattleEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : 高橋君と青木君がモンスターを闘わせます。高橋君のモンスターは体力が A
で攻撃力が B です。青木君のモンスターは体力が C で攻撃力が D
です。高橋君→青木君→高橋君→青木君→...
の順に攻撃を行います。攻撃とは、相手のモンスターの体力の値を自分のモンスターの攻撃力のぶんだけ減らすことをいいます。このことをどちらかのモンスターの体力が
0 以下になるまで続けたとき、先に自分のモンスターの体力が 0
以下になった方の負け、そうでない方の勝ちです。高橋君が勝つなら Yes、負けるなら
No を出力してください。
制約1 \leq A,B,C,D \leq
100入力はすべて整数である。入力入力は以下の形式で標準入力から与えられる。A B C
D出力高橋君が勝つなら Yes、負けるなら No を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc164/submissions/12345086
// 提出ID : 12345086
// 問題ID : abc164_b
// コンテストID : abc164
// ユーザID : xryuseix
// コード長 : 2645
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

int main() {

  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int turn = 0;
  while (a > 0 && c > 0) {
    if (!turn) {
      c -= b;
    } else {
      a -= d;
    }
    turn = 1 - turn;
    // cout<<a<<" "<<c<<endl;
  }
  if (a <= 0)
    fin("No");
  else
    fin("Yes");
}
