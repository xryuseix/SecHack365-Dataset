/*
問題文の引用元：https://atcoder.jp/contests/agc005/tasks/agc005_a
A - STringEditorial
Time Limit : 1 sec / Memory Limit : 256 MB
配点 : 300 点
問題文 : 文字列 X が与えられます。X の長さは偶数であり、半分は S 、もう半分は T
からなります。高橋君は ST という文字列が苦手です。なので以下の操作を 10^{10000}
回行うことにしました。X の(連続な)部分文字列で ST
となるもののうち、最も左側にあるものを取り除く。存在しないならば何もしない。最終的に
X は何文字になるかを求めてください。
制約2 ≦ |X| ≦ 200,000X の長さは偶数X を構成する文字のうち半分は S
であり、もう半分は T である部分点200 点分のデータセットでは |X| ≦ 200
が成り立つ入力入力は以下の形式で標準入力から与えられる。X出力1
行に問題の答えを出力する。
// ソースコードの引用元 :
https://atcoder.jp/contests/agc005/submissions/10698500
// 提出ID : 10698500
// 問題ID : agc005_a
// コンテストID : agc005
// ユーザID : xryuseix
// コード長 : 2079
// 実行時間 : 10



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
#define STLL(s) strtoll(s.c_str(), NULL, 10)
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

int main() {

  string s;
  cin >> s;
  int ans = s.size();
  int tmp = 0;
  rep(i, s.size()) {
    if (s[i] == 'S') {
      tmp++;
    } else {
      tmp--;
      if (tmp < 0)
        tmp = 0;
      else
        ans -= 2;
    }
  }
  fin(ans);
}
