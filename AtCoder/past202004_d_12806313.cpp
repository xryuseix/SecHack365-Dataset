/*
引用元：https://atcoder.jp/contests/past202004-open/tasks/past202004_d
D - String MatchEditorial
// ソースコードの引用元 :
https://atcoder.jp/contests/past202004-open/submissions/12806313
// 提出ID : 12806313
// 問題ID : past202004_d
// コンテストID : past202004-open
// ユーザID : xryuseix
// コード長 : 3356
// 実行時間 : 22



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
#include <random>
#include <iomanip>
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
typedef vector<pair<ll, ll>> vpll;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef vector<vector<string>> vvs;
typedef vector<vector<ll>> vvll;
typedef map<int, int> mii;
typedef set<int> si;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
#define arep(i, v) for (auto i : v)
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
#define itn int
// #define endl '\n';
#define fi first
#define se second
#define NONVOID [[nodiscard]]
constexpr int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
constexpr int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
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
template <class T> inline void dump(T &v) {
  irep(i, v) { cout << *i << ((i == --v.end()) ? '\n' : ' '); }
}
inline string getline() {
  string s;
  getline(cin, s);
  return s;
}
inline void yn(const bool b) { b ? fin("yes") : fin("no"); }
inline void Yn(const bool b) { b ? fin("Yes") : fin("No"); }
inline void YN(const bool b) { b ? fin("YES") : fin("NO"); }
struct io {
  io() {
    ios::sync_with_stdio(false);
    cin.tie(0);
  }
};
const int INF = INT_MAX;
constexpr ll LLINF = 1LL << 60;
constexpr ll MOD = 1000000007;
constexpr double EPS = 1e-9;

int main() {

  string s;
  cin >> s;
  set<string> se;
  rep(i, 27) {
    string s1 = "";
    s1 += ('a' + i);
    if (i == 26)
      s1 = '.';
    se.insert(s1);
    rep(j, 27) {
      string s2 = s1 + (char)('a' + j);
      if (j == 26)
        s2 = s1 + '.';
      se.insert(s2);
      rep(k, 27) {
        string s3 = s2 + (char)('a' + k);
        if (k == 26)
          s3 = s2 + '.';
        se.insert(s3);
      }
    }
  }
  int ans = 0;
  irep(i, se) {
    string t = *i;
    // fin(t);
    bool ch2 = 0;
    if (s.size() < t.size())
      continue;
    for (int j = 0; j < s.size() - t.size() + 1; j++) {
      bool ch1 = 1;
      for (int k = 0; k < t.size(); k++) {
        if (t[k] == '.')
          ;
        else if (t[k] != s[j + k])
          ch1 = 0;
      }
      if (ch1)
        ch2 = 1;
      if (ch2)
        break;
    }
    // if(ch2)cout<<t<<endl;
    ans += ch2;
  }
  fin(ans);
}
