/*
問題文の引用元：https://atcoder.jp/contests/arc061/tasks/arc061_a
C - Many Formulas
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 300 点
問題文 : 1 以上 9 以下の数字のみからなる文字列 S
が与えられます。この文字列の中で、あなたはこれら文字と文字の間のうち、いくつかの場所に
+ を入れることができます。一つも入れなくてもかまいません。ただし、+
が連続してはいけません。このようにして出来る全ての文字列を数式とみなし、和を計算することができます。ありうる全ての数式の値を計算し、その合計を出力してください。
制約1 \leq |S| \leq 10S に含まれる文字は全て 1 〜 9
の数字入力入力は以下の形式で標準入力から与えられる。S出力ありうる全ての数式の値の総和を
1 行に出力せよ。



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

ll calc(string s, string t) {
  ll res = 0;
  ll tmp = 0;
  t += '+';
  // cout<<t<<endl;
  for (int i = 0; i < s.size(); i++) {
    if (t[i] == '-') {
      tmp *= 10;
      tmp += s[i] - '0';
    } else {
      tmp *= 10;
      tmp += s[i] - '0';
      res += tmp;
      tmp = 0;
    }
  }
  // cout<<res<<endl;
  return res;
}

int main(void) {

  string s;
  int n;
  cin >> s;
  n = s.size();
  ll ans = 0;
  for (int i = 0; i < pow(2, n - 1); i++) {
    string t = "";
    ll tmp = i;
    while (tmp > 0) {
      if (tmp % 2 == 0)
        t += '-';
      else
        t += '+';
      tmp /= 2;
    }
    while (t.size() < n - 1)
      t += '-';
    reverse(all(t));
    ans += calc(s, t);
  }
  fin(ans);
}
