/*
引用元：https://atcoder.jp/contests/code-festival-2016-qualb/tasks/codefestival_2016_qualB_b
B - Qualification simulatorEditorial
// ソースコードの引用元 :
https://atcoder.jp/contests/code-festival-2016-qualb/submissions/8016865
// 提出ID : 8016865
// 問題ID : codefestival_2016_qualB_b
// コンテストID : code-festival-2016-qualb
// ユーザID : xryuseix
// コード長 : 1924
// 実行時間 : 156



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
const ll LLINF = 1LL << 62;

int main(void) {
  int n, a, b;
  cin >> n >> a >> b;
  string s;
  cin >> s;
  int pass = 0, rank = 0;
  int A = 0, B = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'a') {
      A++;
      if (pass < a + b) {
        pass++;
        fin("Yes");
      } else {
        fin("No");
      }
    } else if (s[i] == 'b') {
      B++;
      rank++;
      if (pass < a + b && B <= b) {
        pass++;
        fin("Yes");
      } else {
        fin("No");
      }
    } else {
      fin("No");
    }
  }
}
