/*
問題文の引用元：https://atcoder.jp/contests/indeednow-quala/tasks/indeednow_2015_quala_2
B - Indeedなう！Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : あなたには、N 個の文字列 {S_1,S_2,...,S_N}が与えられます。それぞれの i
(1≦i≦N) について、S_i が indeednow
のアナグラムになっているかどうかを判定しなさい。文字列 A と B について、A
に含まれる文字を任意の順番で並び替えて B にできるとき、A を B
のアナグラムと呼びます。入力入力は以下の形式で標準入力から与えられる。NS_1S_2:S_N1
行目には、与えられる文字列の数 N (1≦N≦100) が与えられる。2 行目から N
行には、それぞれの文字列が与えられる。そのうち i (1≦i≦N) 行目には、S_i
が与えられる。S_i の長さは 1 以上 100 以下であり、半角小文字アルファベット a-z
のみからなる。出力1 行目から N
行には、それぞれの文字列に対する判定結果を出力せよ。そのうち i (1≦i≦N) 行目には
S_i が indeednow のアナグラムになっているならば YES を、そうでないならば NO
を出力せよ。末尾の改行を忘れないこと。
// ソースコードの引用元 :
https://atcoder.jp/contests/indeednow-quala/submissions/10982678
// 提出ID : 10982678
// 問題ID : indeednow_2015_quala_2
// コンテストID : indeednow-quala
// ユーザID : xryuseix
// コード長 : 2053
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

  string s = "indeednow";
  Sort(s);
  int n;
  cin >> n;
  rep(i, n) {
    string t;
    cin >> t;
    Sort(t);
    if (t == s) {
      fin("YES");
    } else
      fin("NO");
  }
}
