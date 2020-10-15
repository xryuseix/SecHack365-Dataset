/*
問題文の引用元：https://atcoder.jp/contests/abc019/tasks/abc019_3
C - 高橋くんと魔法の箱Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 :
高橋くんは魔法の箱を持っています。この箱に整数を入れるとそれに対応した整数が出てきます。出てくる整数は入れた整数だけによって決まり、同じ整数を入れると毎回同じ結果が得られます。高橋くんは任意の整数
x について、x を入れた時と 2x
を入れた時に出てくる整数が同じであることに気づきました。高橋くんが入れた整数が N
個与えられるので、最大で何種類の整数が出てくるか答えてください。入力入力は以下の形式で標準入力から与えられる。Na_1
a_2 .. a_N1 行目には、高橋くんが箱に入れる整数の個数 N ( 1 ≦ N ≦ 10^5)
が与えられる。2 行目には、高橋くんが箱に入れる N
個の整数が空白を区切りとして与えられる。1 ≦ a_i ≦ 10^9 ( 1 ≦ i ≦ N)
であることが保証される。i ≠ j のとき、a_i ≠ a_j
であることが保証される。出力最大で何種類の整数が出てくるかを標準出力に出力せよ。末尾の改行を忘れないこと。部分点この問題には部分点が設定されている。20
点分のテストケースにおいて、1 ≦ N ≦ 3,000 を満たす。別の 30
点分のテストケースにおいて、1 ≦ a_i ≦ 5*10^5 ( 1 ≦ i ≦ N)  を満たす。
// ソースコードの引用元 : https://atcoder.jp/contests/abc019/submissions/7984249
// 提出ID : 7984249
// 問題ID : abc019_3
// コンテストID : abc019
// ユーザID : xryuseix
// コード長 : 2048
// 実行時間 : 177



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
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
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
const int MOD = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;

map<int, int> m;
int maxint = 0;

int check(int n) {
  if (m.find(n) != m.end()) {
    return m[n];
  } else if (n % 2 == 1) {
    m[n] = maxint;
    maxint++;
    return 0;
  } else {
    m[n] = check(n / 2);
    return 0;
  }
}

int main(void) {

  int n;
  cin >> n;
  vi a(n);
  rep(i, n) cin >> a[i];
  for (int i = 0; i < n; i++) {
    check(a[i]);
  }
  set<int> s;
  for (auto it = m.begin(); it != m.end(); it++) {
    s.insert(it->second);
    // cout<<it->first<<" "<<it->second<<endl;
  }
  fin(s.size());
}
