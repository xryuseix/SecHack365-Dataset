/*
引用元：https://atcoder.jp/contests/agc006/tasks/agc006_b
B - Median Pyramid EasyEditorial
// ソースコードの引用元 : https://atcoder.jp/contests/agc006/submissions/7842291
// 提出ID : 7842291
// 問題ID : agc006_b
// コンテストID : agc006
// ユーザID : xryuseix
// コード長 : 3218
// 実行時間 : 378


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

int main(void) {

  int n, x;
  cin >> n >> x;
  if (x == 1 || x == 2 * n - 1) {
    cout << "No" << endl;
  } else {
    if (n == 2) {
      cout << "Yes" << endl;
      cout << 1 << endl;
      cout << 2 << endl;
      cout << 3 << endl;
    } else if (x == 2) {
      vector<int> v(2 * n - 1, -1);
      set<int> use;
      for (int i = 1; i <= 2 * n - 1; i++) {
        use.insert(i);
      }
      v[n - 1] = x;
      v[n] = x - 1;
      v[n + 1] = x + 2;
      v[n - 2] = x + 1;
      use.erase(x);
      use.erase(x + 1);
      use.erase(x - 1);
      use.erase(x + 2);
      for (int i = 0; i < 2 * n - 1; i++) {
        if (v[i] == -1) {
          v[i] = *use.begin();
          use.erase(*use.begin());
        }
      }
      cout << "Yes" << endl;
      for (int i = 0; i < 2 * n - 1; i++) {
        cout << v[i] << endl;
      }
    } else {
      vector<int> v(2 * n - 1, -1);
      set<int> use;
      for (int i = 1; i <= 2 * n - 1; i++) {
        use.insert(i);
      }
      v[n - 1] = x;
      v[n] = x + 1;
      v[n + 1] = x - 2;
      v[n - 2] = x - 1;
      use.erase(x);
      use.erase(x + 1);
      use.erase(x - 1);
      use.erase(x - 2);
      for (int i = 0; i < 2 * n - 1; i++) {
        if (v[i] == -1) {
          v[i] = *use.begin();
          use.erase(*use.begin());
        }
      }
      cout << "Yes" << endl;
      for (int i = 0; i < 2 * n - 1; i++) {
        cout << v[i] << endl;
      }
    }
  }
}
