/*
引用元：https://atcoder.jp/contests/abc141/tasks/abc141_e
E - Who Says a Pun?Editorial
// ソースコードの引用元 : https://atcoder.jp/contests/abc141/submissions/7540658
// 提出ID : 7540658
// 問題ID : abc141_e
// コンテストID : abc141
// ユーザID : xryuseix
// コード長 : 2785
// 実行時間 : 1573



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
const int P = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;

class BoyerMoore {
public:
  std::string text;
  std::string pattern;
  int n;
  int m;
  std::map<char, int> lambda;
  BoyerMoore(std::string text_, std::string pattern_)
      : text(text_), pattern(pattern_), n(text_.size()), m(pattern_.size()) {
    compute_lambda();
  };
  void compute_lambda() {
    for (int j = 1; j <= m; j++) {
      lambda[pattern.at(j - 1)] = j;
    }
  };
  int get_lambda(const char &c) {
    if (lambda.find(c) != lambda.end()) {
      return lambda[c];
    } else {
      return 0;
    }
  };
  bool match() {
    int s = 0;
    while (s <= n - m) {
      int j = m;
      while (j > 0 && pattern.at(j - 1) == text.at(s + j - 1)) {
        j--;
      }
      if (j == 0) {
        return true;
        s++;
      } else {
        s += std::max(1, j - get_lambda(text.at(s + j - 1)));
      }
    }
    return false;
  };
};

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  int n;
  cin >> n;
  string s;
  cin >> s;
  string tmp;
  ll ans = 0;
  for (int i = 0; i < n - 1; i++) {
    tmp.push_back(s[i]);
    BoyerMoore bm(s.substr(i + 1), tmp);
    // cout<<s.substr(i)<<" "<<tmp<<" "<<bm.match()<<endl;
    if (!bm.match()) {
      tmp = tmp.substr(1);
    } else {
      ans = max((int)ans, (int)tmp.size());
    }
  }
  fin(ans);

  //////////////////////////////////////////////////////
  return 0;
}
