/*
問題文の引用元：https://atcoder.jp/contests/abc029/tasks/abc029_c
C - Brute-force Attack
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 :
あなたはスーパーハッカーです。高橋君を攻撃対象に定めたあなたは、高橋君のパソコンのパスワードに関して次の事実を突き止めました。長さは
N 文字である。a, b, c
以外の文字は含まれない。高橋君のパソコンのパスワードの候補として考えられる文字列をすべて列挙してしまいましょう。入力入力は以下の形式で標準入力から与えられる。N1
行目にパスワードの長さ N (1 ≦ N ≦ 8) が与えられる。出力標準出力に、
問題文 :
中の二つの条件をともに満たす文字列すべてを一行に一個ずつ辞書順に出力せよ。「辞書順」に関しては出力例2の注釈を見よ。最後の文字列の後ろにも改行を入れること。大文字と小文字は区別される。



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
  }
};
const ll MOD = 1000000007;
const double EPS = 1e-9;
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;

vs ans;

void rec(string s, int n) {
  if (s.size() == n) {
    ans.pb(s);
  } else {
    rec(s + "a", n);
    rec(s + "b", n);
    rec(s + "c", n);
  }
}

int main(void) {

  int n;
  cin >> n;
  rec("", n);
  Sort(ans);
  rep(i, ans.size()) { fin(ans[i]); }
}
