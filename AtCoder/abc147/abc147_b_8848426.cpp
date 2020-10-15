/*
問題文の引用元：https://atcoder.jp/contests/abc147/tasks/abc147_b
B - Palindrome-philiaEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 :
高八士君は回文が大好きで、回文でない文字列が許せません。高八士君は文字列を 1
回ハグするごとに、文字列から 1
文字を選んで任意の文字に変えることができます。文字列 S が与えられます。S
を回文にするために必要なハグの最小回数を答えてください。
制約S は半角英小文字のみから成る文字列S の長さは 1 以上 100
以下入力入力は以下の形式で標準入力から与えられます。S出力S
を回文にするために必要なハグの最小回数を出力してください。
// ソースコードの引用元 : https://atcoder.jp/contests/abc147/submissions/8848426
// 提出ID : 8848426
// 問題ID : abc147_b
// コンテストID : abc147
// ユーザID : xryuseix
// コード長 : 1680
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
const int INF = INT_MAX;
const ll LLINF = 1LL << 62;

int main(void) {

  int ans = 0;
  string s;
  cin >> s;
  rep(i, s.size() / 2) if (s[i] != s[s.size() - 1 - i]) ans++;
  fin(ans);
}
