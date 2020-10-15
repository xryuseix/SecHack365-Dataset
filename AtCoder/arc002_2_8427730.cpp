/*
引用元：https://atcoder.jp/contests/arc002/tasks/arc002_2
B - 割り切れる日付Editorial
// ソースコードの引用元 : https://atcoder.jp/contests/arc002/submissions/8427730
// 提出ID : 8427730
// 問題ID : arc002_2
// コンテストID : arc002
// ユーザID : xryuseix
// コード長 : 3540
// 実行時間 : 3



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
const int MOD = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 62;

bool ch(int i, int j, int k) {
  if (i % j == 0 && (i / j) % k == 0) {
    return 1;
  } else {
    return 0;
  }
}

int main(void) {

  int year, month, day;
  string s;
  cin >> s;

  year = (s[0] - '0') * 1000 + (s[1] - '0') * 100 + (s[2] - '0') * 10 +
         (s[3] - '0');
  month = (s[5] - '0') * 10 + (s[6] - '0');
  day = (s[8] - '0') * 10 + (s[9] - '0');

  for (int i = year; i < 3001; i++) {
    for (int j = 1; j <= 12; j++) {
      int M = j;
      if (i == year && j < month)
        M = month;
      if (month == 2) {
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
          for (int k = 1; k <= 29; k++) {
            int K = k;
            if (M == month && k < day)
              K = day;
            // cout<<i<<M<<K<<endl;
            if (ch(i, M, K)) {
              printf("%4d/%02d/%02d\n", i, M, K);
              return 0;
            }
          }
        } else {
          for (int k = 1; k < 29; k++) {
            int K = k;
            if (M == month && k < day)
              K = day;
            if (ch(i, M, K)) {
              printf("%4d/%02d/%02d\n", i, M, K);
              return 0;
            }
          }
        }
      } else if (M == 1 || M == 3 || M == 5 || M == 7 || M == 8 || M == 10 ||
                 M == 12) {
        for (int k = 1; k <= 31; k++) {
          int K = k;
          if (M == month && k < day)
            K = day;
          if (ch(i, M, K)) {
            printf("%4d/%02d/%02d\n", i, M, K);
            return 0;
          }
        }
      } else {
        for (int k = 1; k < 31; k++) {
          int K = k;
          if (M == month && k < day)
            K = day;
          if (ch(i, M, K)) {
            printf("%4d/%02d/%02d\n", i, M, K);
            return 0;
          }
        }
      }
    }
  }
}
