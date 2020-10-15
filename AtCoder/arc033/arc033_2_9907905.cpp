/*
問題文の引用元：https://atcoder.jp/contests/arc033/tasks/arc033_2
B - メタ構文変数
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 :
「foo」や「bar」「hoge」などの、特に意味を持たない変数の名前に使用される文字列のことを「メタ構文変数」と呼びます。高橋君は今、メタ構文変数について調べています。メタ構文変数には色々な種類があることが分かり、見つけたメタ構文変数にそれぞれに番号をつけました。高橋君はアリの
Ant さんと Bug
くんのソースコードを読み、それぞれのソースコードに現れるメタ構文変数の番号を列挙しました。そして、Ant
さんと Bug
くんの使うメタ構文変数の集合がどれくらい似ているのかを調べるために「Jaccard
係数」を計算することにしました。Ant
さんのソースコードに現れるメタ構文変数の集合を S_A、Bug
くんのソースコードに現れるメタ構文変数の集合を S_B とするとこれらの集合の
Jaccard 係数は、||S_{A} ∩ S_{B}|| / ||S_{A} ∪
S_{B}||という式で計算できます。ここで、||S|| は集合 S
の要素数を表すものとします。別の言い方をすると、「S_{A} と S_{B}
の両方に現れる要素の個数」/「S_{A} と S_{B}
の少なくともどちらか一方には現れる要素の個数」となります。入力入力は以下の形式で標準入力から与えられる。N_A
N_BA_1 A_2 ... A_{N_A}B_1 B_2 ... B_{N_B}1 行目には、2 つの整数 N_A (1 ≦ N_A ≦
10^5), N_B (1 ≦ N_B ≦ 10^5) が空白区切りで与えられる。これは、Ant
さんのソースコードに N_A 個、Bug くんのソースコードに N_B
個のメタ構文変数が現れたということを表す。2 行目には、Ant
さんのソースコードに現れたメタ構文変数の番号を表す N_A
個の整数が空白区切りで与えられる。このうち i 番目の整数 A_i (1 ≦ A_i ≦ 10^9)
は、Ant さんのソースコードに A_i 番のメタ構文変数が現れることを表す。ただし、p
\neq q のとき A_p \neq A_q であることが保証される。3 行目には、Bug
くんのソースコードに現れたメタ構文変数の番号を表す N_B
個の整数が空白区切りで与えられる。このうち i 番目の整数 B_i (1 ≦ B_i ≦ 10^9)
は、Bug さんのソースコードに B_i 番のメタ構文変数が現れることを表す。ただし、p
\neq q のとき B_p \neq B_q
であることが保証される。部分点この問題には部分点が設定されている。N_A,N_B ≦ 1000
と A_i,B_i ≦ 10^5 を満たすテストケース全てに正解した場合は、40
点が与えられる。A_i,B_i ≦ 10^5 を満たすテストケース全てに正解した場合は、70
点が与えられる。出力Ant さんと Bug
くんのソースコードに現れるメタ構文変数の集合の Jaccard 係数を 1
行に出力せよ。小数点以下何桁でも出力してよいが、10^{-6}
を超える絶対誤差を含んではならない。出力の末尾に改行を入れること。



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
#define irep(it, stl) for (auto it = stl.begin(); it != stl.end(); it++)
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
#define itn int;
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

void intersect(set<int> &Set_A, set<int> &Set_B, set<int> &Set_res) {
  set_intersection(Set_A.begin(), Set_A.end(), Set_B.begin(), Set_B.end(),
                   inserter(Set_res, Set_res.end()));
}

int main(void) {
  int n, m;
  cin >> n >> m;
  vi v(n);
  vi w(m);
  rep(i, n) cin >> v[i];
  rep(i, m) cin >> w[i];
  set<int> inter, a, b, sum;
  rep(i, n) {
    a.insert(v[i]);
    sum.insert(v[i]);
  }
  rep(i, m) {
    b.insert(w[i]);
    sum.insert(w[i]);
  }
  intersect(a, b, inter);
  printf("%.8f\n", inter.size() / (double)sum.size());
}
