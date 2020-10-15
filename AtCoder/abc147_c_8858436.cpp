/*
引用元：https://atcoder.jp/contests/abc147/tasks/abc147_c
C - HonestOrUnkind2Editorial
// ソースコードの引用元 : https://atcoder.jp/contests/abc147/submissions/8858436
// 提出ID : 8858436
// 問題ID : abc147_c
// コンテストID : abc147
// ユーザID : xryuseix
// コード長 : 2859
// 実行時間 : 23



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

  int bit = 0;
  int ans = 0;
  int n;
  cin >> n;
  vector<vpii> v(n, vpii());
  rep(i, n) {
    int a;
    cin >> a;
    for (int j = 0; j < a; j++) {
      int x, y;
      cin >> x >> y;
      x--;
      v[i].pb(mp(x, y));
    }
  }
  while (bit < pow(2, n)) {
    // fin(bit);
    string s = "";
    int tmp = bit;
    while (tmp > 0) {
      s += tmp % 2 + '0';
      tmp /= 2;
    }
    while (s.size() < n)
      s += '0';
    reverse(all(s));
    // fin(s);

    int onestcount = 0;
    bool allonest = true;
    for (int i = 0; i < n; i++) {
      bool isonest = true;
      if (s[i] == '1') {
        for (int j = 0; j < v[i].size(); j++) {
          if (bit == 6) {
            // cout<<i<<j<<" "<<s[v[i][j].first]-'0'<<" "<<v[i][j].first<<"
            // "<<v[i][j].second<<endl;
          }
          if (s[v[i][j].first] - '0' == v[i][j].second) {
            ;
          } else
            isonest = false;
        }
      }
      if (isonest)
        onestcount++;
      else
        allonest = false;
    }
    if (allonest)
      ans = max(ans, (int)count(s.cbegin(), s.cend(), '1'));
    // cout<<onestcount<<endl<<endl;

    bit++;
  }
  fin(ans);
}
