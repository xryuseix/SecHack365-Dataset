/*
問題文の引用元：https://atcoder.jp/contests/m-solutions2020/tasks/m_solutions2020_c
C - Marks
Time Limit : 2 sec / Memory Limit : 1024 MB
配点: 300 点
問題文 : M 君は青木高校の生徒です。青木高校では、1 年間の課程を N
個の学期に分割する N 学期制が用いられています。各学期には期末テストが 1
回行われ、その点数に応じて、以下のように各学期の評点が付けられます。  1 学期から
K-1 学期までの評点：付けられない。K 学期から N
学期までの評点：その学期を含めた直近 K 回の期末テストの点数を掛け算したもの。M
君は i 学期の期末テストで A_i 点を取りました。K+1 \leq i \leq N
を満たすそれぞれの i について、i 学期の評点が i-1
学期の評点より真に高かったかどうか判定してください。
制約2 \leq N \leq 2000001 \leq K \leq N-11 \leq A_i \leq
10^{9}入力はすべて整数入力入力は以下の形式で標準入力から与えられます。  N KA_1
A_2 A_3 \ldots A_N出力答えを N-K 行に出力してください。i 行目には、K+i
学期の評点が K+i-1 学期の評点より高い場合は Yes を、そうでない場合は No
を出力してください。



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
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef vector<vc> vvc;
typedef vector<vs> vvs;
typedef vector<vll> vvll;
typedef map<int, int> mii;
typedef set<int> si;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
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
#define fi first
#define se second
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
  irep(i, v) { cout << (*i) << ((i == --v.end()) ? '\n' : ' '); }
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
constexpr ld EPS = 1e-11;

int main() {
  int n, k;
  cin >> n >> k;
  vll v(n);
  rep(i, n) cin >> v[i];
  int l = 0, r = k;
  while (r < n) {
    Yn(v[l] < v[r]);
    l++;
    r++;
  }
}
