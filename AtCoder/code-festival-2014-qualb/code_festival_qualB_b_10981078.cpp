/*
問題文の引用元：https://atcoder.jp/contests/code-festival-2014-qualb/tasks/code_festival_qualB_b
B - 歩く人Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 高橋君は健康のために N
日間ウォーキングをしました。歩数は日によって違います。i 日目に歩いた歩数は a_i
歩です。高橋君の元々の目標は計 K
歩歩くことでした。高橋君は何日目にその目標が達成されたか気になりました。高橋君が歩いた歩数の情報が与えられるので、何日目に累計
K 歩を達成したか求めてください。入力入力は以下の形式で標準入力から与えられるN
Ka_1a_2:a_N1 行目には高橋君がウォーキングをした日数 N (1 ≦ N ≦ 10^5)と目標の歩数
K (1 ≦ K ≦ 10^9) が空白区切りで与えられる。2 行目からの N 行のうち i
行目には高橋君が i 日目に歩いた歩数a_i (1 ≦ a_i ≦ 10^5)
が与えられる。いずれかの日に目標が達成されることが保証されている。出力高橋君が目標を達成した日を
1 行で出力せよ。出力の末尾には改行をいれること。
// ソースコードの引用元 :
https://atcoder.jp/contests/code-festival-2014-qualb/submissions/10981078
// 提出ID : 10981078
// 問題ID : code_festival_qualB_b
// コンテストID : code-festival-2014-qualb
// ユーザID : xryuseix
// コード長 : 2036
// 実行時間 : 8



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
#define endl '\n';
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

  int n, k;
  cin >> n >> k;
  int sum = 0;
  rep(i, n) {
    int N;
    cin >> N;
    sum += N;
    if (sum >= k) {
      fin(i + 1);
      return 0;
    }
  }
}
