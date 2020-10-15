/*
問題文の引用元：https://atcoder.jp/contests/dwango2016-prelims/tasks/dwango2016qual_b
B - 積み鉛筆Editorial
Time Limit : 2.525 sec / Memory Limit : 246 MB
問題文 :
ニワンゴくんは鉛筆を積むのが好きです。今日は以下の方法で鉛筆を積むことにしました。まず、N本の鉛筆を左右に1列に床に並べます。左からi番目の鉛筆の長さはL_iです。次に、N-1本の鉛筆を、床に並べた隣り合う2つの鉛筆の間の上に積みます。ただし、上に積む鉛筆の長さは、その下にある2つの鉛筆の長さのうち長い方と等しいです。すなわち、上に積む鉛筆のうち、左からj番目のものの長さをK_jと表すと、K_j=max\{L_j,L_{j+1}\}が成り立ちます。例えば、上図のような鉛筆の積み方があります。ここで、円の中に書かれている数は鉛筆の長さを表します。積んだ鉛筆を上から見たとき、上に積まれたN-1本の鉛筆の長さのみ見え、N本の土台にある鉛筆の長さは分かりません。この状態で、土台となるN本の鉛筆の長さとしてありうるものを考えるゲームをニワンゴくんは思いつきました。あなたの仕事はこのゲームに正解するプログラムを書くことです。ただし、土台となる鉛筆の長さの組み合わせは存在することが保証されています。すなわち、N-1個の数からなる数列\{K_j\}が与えられたとき、K_j=max\{L_j,L_{j+1}\}
(1 ≦ j ≦
N-1)がすべてのjについて成り立つような数列\{L_i\}を求めてください。入出力入力は以下の形式で標準入力から与えられる。NK_1
K_2 … K_{N-1}1 行目には、土台となる鉛筆の本数 N (2 ≦ N ≦ 10^5)が与えられる。2
行目には、上に積まれている鉛筆の長さを表すN-1個の整数K_1,...,K_{N-1}が空白区切りで与えられる。1
≦ K_i ≦ 10^9(1 ≦ i ≦
N)が成り立つ。出力土台となる鉛筆の長さL_1,...,L_Nを空白区切りで1行に出力せよ。出力の末尾には改行をいれること。
// ソースコードの引用元 :
https://atcoder.jp/contests/dwango2016-prelims/submissions/11014494
// 提出ID : 11014494
// 問題ID : dwango2016qual_b
// コンテストID : dwango2016-prelims
// ユーザID : xryuseix
// コード長 : 2109
// 実行時間 : 49



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
inline string getline() {
  string s;
  getline(cin, s);
  return s;
}
inline void yn(bool b) { b ? fin("Yes") : fin("No"); }
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
  n--;
  vi v(n);
  rep(i, n) cin >> v[i];
  cout << v[0];
  rep(i, n - 1) cout << ' ' << min(v[i], v[i + 1]);
  cout << ' ' << v[n - 1] << endl;
}
