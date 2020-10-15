/*
問題文の引用元：https://atcoder.jp/contests/abc038/tasks/abc038_c
C - 単調増加Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 :
N個の数からなる数列が与えられます。i番目の数をa_iと呼びましょう。a_l,a_{l+1},...,a_r
が単調増加、すなわち l≦r であって a_i<a_{i+1} がl≦i<r
を満たす全てのiに対して成り立つような(l,r)の数を求めてください。
制約1≦N≦10^51≦a_i≦10^5a_iは全て整数である部分点N ≦ 3,000
を満たすテストケース全てに正解した場合、部分点として40点が与えられる。入力入力は以下の形式で標準入力から与えられる。Na_1
a_2 … a_N出力a_l,a_{l+1},...,a_r が単調増加となるような(l,r)の数を 1
行に出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc038/submissions/6760130
// 提出ID : 6760130
// 問題ID : abc038_c
// コンテストID : abc038
// ユーザID : xryuseix
// コード長 : 2116
// 実行時間 : 10



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
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
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
const int P = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;

ll nCk(ll n) { return (ll)n * (ll)(n - 1) / 2; }

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  int n;
  cin >> n;
  vi a(n);
  ll ans = n;
  rep(i, n) cin >> a[i];
  ll f = 0, l = 0;
  vector<ll> num;
  for (int i = 0; i < n; i++) {
    f = i;
    l = f;
    while ((l < n) && (l == f || a[f] < a[l])) {
      if (l != f)
        f++;
      l++;

      // cout<<f<<" "<<l<<endl;
    }
    // cout<<"---------"<<endl;
    num.push_back(l - i);
    i += l - i - 1;
  }
  rep(i, num.size()) {
    if (num[i] == 1)
      continue;
    else {
      ans += nCk(num[i]);
    }
  }
  fin(ans);

  //////////////////////////////////////////////////////
  return 0;
}
