/*
引用元：https://atcoder.jp/contests/agc022/tasks/agc022_a
A - Diverse WordEditorial
// ソースコードの引用元 : https://atcoder.jp/contests/agc022/submissions/8533060
// 提出ID : 8533060
// 問題ID : agc022_a
// コンテストID : agc022
// ユーザID : xryuseix
// コード長 : 2383
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

  string s;
  cin >> s;
  if (s == "zyxwvutsrqponmlkjihgfedcba") {
    fin(-1);
    return 0;
  }
  map<char, int> m;
  for (int i = 0; i < 26; i++) {
    m['a' + i] = 0;
  }
  for (int i = 0; i < s.size(); i++) {
    m[s[i]]++;
  }
  if (s.size() < 26) {
    for (auto it = m.begin(); it != m.end(); it++) {
      if (it->second == 0) {
        s += it->first;
        break;
      }
    }
    fin(s);
    return 0;
  } else {
    for (int i = 25; i >= 0; i--) {
      int c = s[i];
      m.erase(s[i]);
      s.pop_back();
      for (char C = c + 1; C <= 'z'; C++) {
        if (m[C] == 0) {
          cout << s << C << endl;
          return 0;
        }
      }
    }
    return 0;
  }
}
