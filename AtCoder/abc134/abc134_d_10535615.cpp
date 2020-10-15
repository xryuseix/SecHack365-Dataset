/*
問題文の引用元：https://atcoder.jp/contests/abc134/tasks/abc134_d
D - Preparing BoxesEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 400 点
問題文 : N 個の空の箱が横一列に並んでいます。左から i \ (1 \leq i \leq N)
番目の箱には整数 i が書かれています。すぬけさんは、それぞれの箱に対してボールを
1
個入れるか何も入れないかを選ぶことができます。ここで、以下の条件を満たすようなボールの入れ方を、いいボールの入れ方と定めます。1
以上 N 以下の任意の整数 i について、i
の倍数が書かれた箱に入っているボールの個数の和を 2 で割った余りが a_i
である。いいボールの入れ方は存在するでしょうか。存在するならば 1
つ求めてください。
制約入力は全て整数である。1 \leq N \leq 2 \times 10^5a_i は 0 または 1
である。入力入力は以下の形式で標準入力から与えられる。Na_1 a_2 ...
a_N出力いいボールの入れ方が存在しないなら -1
を出力せよ。存在するならば、そのような入れ方のうちの 1
つを以下の形式で出力せよ。Mb_1 b_2 ... b_Mここで M
はボールを入れる箱の個数を表し、b_1,\ b_2,\ ...,\ b_M
はボールを入れる箱に書かれた整数を任意の順番に並べたものである。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc134/submissions/10535615
// 提出ID : 10535615
// 問題ID : abc134_d
// コンテストID : abc134
// ユーザID : xryuseix
// コード長 : 2921
// 実行時間 : 496



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

vector<int> enum_div(int n) {
  vector<int> ret;
  for (int i = 1; i * i <= n; ++i) {
    if (n % i == 0) {
      ret.push_back(i);
      if (i != 1 && i * i != n) {
        ret.push_back(n / i);
      }
    }
  }
  return ret;
}

int main() {

  int n;
  cin >> n;
  vi a(n), b(n);
  rep(i, n) cin >> a[i];
  map<int, int> m;
  for (int i = n / 2; i < n; i++) {
    b[i] = a[i] % 2;
    vi yakusu = enum_div(i + 1);
    rep(j, yakusu.size()) m[yakusu[j]] += b[i];
  }
  for (int i = n / 2 - 1; i >= 0; i--) {
    vi yakusu = enum_div(i + 1);
    b[i] = 1 - (m[(i + 1)] % 2 == a[i]);
    rep(j, yakusu.size()) m[yakusu[j]] += b[i];
  }
  int sum = 0;
  rep(i, n - 1) sum += b[i + 1];
  sum %= 2;
  b[0] = 1 - (sum == a[0]);
  // rep(i,n){
  //     if(!i)cout<<b[0];
  //     else cout<<" "<<b[i];
  // }
  // cout<<endl;
  vi v;
  rep(i, n) if (b[i] > 0) v.pb(i + 1);
  // if(v.size()==0)fin(-1);
  {
    fin(v.size());
    rep(i, v.size()) {
      if (!i)
        cout << v[0];
      else
        cout << " " << v[i];
    }
  }
  if (v.size() > 0)
    cout << endl;
}
