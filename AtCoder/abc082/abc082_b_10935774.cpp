/*
問題文の引用元：https://atcoder.jp/contests/abc082/tasks/abc082_b
B - Two AnagramsEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : 英小文字のみからなる文字列 s, t が与えられます。あなたは、s
の文字を好きな順に並べ替え、文字列 s' を作ります。また、t
の文字を好きな順に並べ替え、文字列 t' を作ります。このとき、辞書順で s' < t'
となるようにできるか判定してください。注釈長さ N の文字列 a = a_1 a_2 ... a_N
および長さ M の文字列 b = b_1 b_2 ... b_M について、辞書順で a < b
であるとは、次の 2 つの条件のいずれかが成り立つことをいう;N < M かつ a_1 = b_1,
a_2 = b_2, ..., a_N = b_N である。ある i (1 \leq i \leq N, M) が存在して、a_1 =
b_1, a_2 = b_2, ..., a_{i - 1} = b_{i - 1} かつ a_i < b_i である。
ただし、文字どうしはアルファベット順で比較される。例えば、xy < xya
であり、atcoder < atlas である。
制約s, t の長さは 1 以上 100 以下である。s, t
は英小文字のみからなる。入力入力は以下の形式で標準入力から与えられる。st出力辞書順で
s' < t' となるようにできるならば Yes を、できないならば No を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc082/submissions/10935774
// 提出ID : 10935774
// 問題ID : abc082_b
// コンテストID : abc082
// ユーザID : xryuseix
// コード長 : 1948
// 実行時間 : 1



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

  string s, t;
  cin >> s >> t;
  Sort(s);
  Rort(t);
  if (s < t)
    fin("Yes");
  else
    fin("No");
}
