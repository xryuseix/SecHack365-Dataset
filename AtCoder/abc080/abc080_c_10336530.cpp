/*
問題文の引用元：https://atcoder.jp/contests/abc080/tasks/abc080_c
C - Shopping StreetEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 300 点
問題文 :
joisinoお姉ちゃんは、ある商店街に店を開こうとしています。その商店街の店は、月曜日から金曜日の
5 つの曜日を午前と午後の 2 つの時間帯に分けて、これら 10
個の時間帯それぞれについて店を営業するか否かを決めることとなっています。ただし、1
つ以上の時間帯で店を営業しなければなりません。商店街には既に N 個の店があり、1
から N までの番号がついています。これらの店の営業時間の情報として F_{i,j,k}
が与えられ、月曜日 = 曜日 1、火曜日 = 曜日 2、水曜日 = 曜日 3、木曜日 = 曜日
4、金曜日 = 曜日 5、 午前 = 時間帯 1、午後 = 時間帯 2
と対応させたとき、F_{i,j,k}=1 なら曜日 j の時間帯 k に店 i
が営業しており、F_{i,j,k}=0 なら営業していないことを意味します。店 i
とjoisinoお姉ちゃんの開く店の両方が営業している時間帯の個数を c_i
としたとき、joisinoお姉ちゃんの店の利益は P_{1,c_1}+P_{2,c_2}+...+P_{N,c_N}
となります。ただし、利益は負にもなりうることに注意してください。1
つ以上の時間帯で店を営業しなければならないことに注意しつつ、10
個の時間帯それぞれについて店を営業するか否かを決めるとき、joisinoお姉ちゃんの店の利益のあり得る最大値を求めてください。
制約1≦N≦1000≦F_{i,j,k}≦11≦i≦N を満たす全ての整数 i に対して、F_{i,j,k}=1
を満たす (j,k) が必ず 1
つ以上存在する-10^7≦P_{i,j}≦10^7入力は全て整数入力入力は以下の形式で標準入力から与えられる。NF_{1,1,1}
F_{1,1,2} ... F_{1,5,1} F_{1,5,2}:F_{N,1,1} F_{N,1,2} ... F_{N,5,1}
F_{N,5,2}P_{1,0} ... P_{1,10}:P_{N,0} ...
P_{N,10}出力joisinoお姉ちゃんの店の利益のあり得る最大値が x のとき、x
を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/abc080/submissions/10336530
// 提出ID : 10336530
// 問題ID : abc080_c
// コンテストID : abc080
// ユーザID : xryuseix
// コード長 : 2422
// 実行時間 : 4



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

int main(void) {

  ll n;
  cin >> n;
  vvll v(n, vll(10));
  rep(i, n) rep(j, 10) cin >> v[i][j];
  vvll p(n, vll(11));
  rep(i, n) rep(j, 11) cin >> p[i][j];
  ll ans = -LLINF;
  for (ll i = 1; i < (1 << 10); i++) {
    vll open(10, 0);
    ll t = i;
    ll pos = 0;
    while (t > 0) {
      open[pos] = t % 2;
      t /= 2;
      pos++;
    }
    ll tmp = 0;
    for (ll j = 0; j < n; j++) {
      ll itti = 0;
      rep(k, 10) {
        if (v[j][k] == open[k] && open[k] == 1) {
          itti++;
        }
      }
      tmp += p[j][itti];
    }
    chmax(ans, tmp);
  }
  fin(ans);
}
