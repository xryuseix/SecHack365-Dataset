/*
問題文の引用元：https://atcoder.jp/contests/agc007/tasks/agc007_b
B - Construct Sequences / $('#task-lang-btn span').click(function() {var ts =
$('#task-statement span.lang');if (ts.children('span').size() > 1) {var l =
$(this).data('lang');ts.children('span').hide();ts.children('span.lang-' +
l).show();}});
Time Limit : 2 sec / Memory Limit : 256 MBScore : 400 pointsProblem Statement
#nck {      width: 30px;      height: auto;   }You are given a permutation p of
the set {1, 2, ..., N}. Please construct two sequences of positive integers a_1,
a_2, ..., a_N and b_1, b_2, ..., b_N satisfying the following conditions:1 \leq
a_i, b_i \leq 10^9 for all ia_1 < a_2 < ... < a_Nb_1 > b_2 > ... >
b_Na_{p_1}+b_{p_1} < a_{p_2}+b_{p_2} < ... < a_{p_N}+b_{p_N}Constraints2 \leq N
\leq 20,000p is a permutation of the set {1, 2, ..., N}InputThe input is given
from Standard Input in the following format:Np_1 p_2 ... p_N OutputThe output
consists of two lines. The first line contains a_1, a_2, ..., a_N seperated by a
space. The second line contains b_1, b_2, ..., b_N seperated by a space. It can
be shown that there always exists a solution for any input satisfying the
constraints.Sample Input 121 2Sample Output 11 45 4a_1 + b_1 = 6 and a_2 + b_2 =
8. So this output satisfies all conditions.Sample Input 233 2 1Sample Output 21
2 35 3 1Sample Input 332 3 1Sample Output 35 10 100100 10 1
配点 : 400 点
問題文 :    #nck {      width: 30px;      height: auto;   }集合 {1, 2, ..., N}
の要素を並び替えた順列 p が与えられます。以下の条件をすべて満たす 2 つの正整数列
a_1, a_2, ..., a_N および b_1, b_2, ..., b_N を構成してください。すべての i
に対し、1 \leq a_i, b_i \leq 10^9a_1 < a_2 < ... < a_Nb_1 > b_2 > ... >
b_Na_{p_1}+b_{p_1} < a_{p_2}+b_{p_2} < ... < a_{p_N}+b_{p_N}
制約2 \leq N \leq 20,000p は集合 {1, 2, ..., N}
の要素を並び替えた順列である。入力入力は以下の形式で標準入力から与えられる。Np_1
p_2 ... p_NOutput2 行出力せよ。1 行目に整数列 a_1, a_2, ..., a_N を、2
行目に整数列 b_1, b_2, ..., b_N を、それぞれ空白区切りで出力せよ。なお、
制約を満たす任意の入力に対して解が存在することが示せる。



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
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define fin(ans) cout << (ans) << endl
#define STI(s) atoi(s.c_str())
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
#define MATHPI acos(-1)
#define itn int
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
  };
};
const ll MOD = 1000000007;
const double EPS = 1e-9;
const int INF = INT_MAX;
const ll LLINF = 1LL << 62;

int main(void) {

  int n;
  cin >> n;
  vi p(n);
  rep(i, n) cin >> p[i];
  vi a(n), b(n);
  rep(i, n) a[i] = i * n + 1;
  rep(i, n) b[i] = a[n - i - 1];

  rep(i, n) {
    int idx = p[i] - 1;
    a[idx] += i;
  }

  rep(i, n) {
    if (!i)
      cout << a[i];
    else
      cout << " " << a[i];
  }
  cout << endl;
  rep(i, n) {
    if (!i)
      cout << b[i];
    else
      cout << " " << b[i];
  }
  cout << endl;
}
