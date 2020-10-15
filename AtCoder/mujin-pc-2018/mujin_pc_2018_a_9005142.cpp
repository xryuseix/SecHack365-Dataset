/*
問題文の引用元：https://atcoder.jp/contests/mujin-pc-2018/tasks/mujin_pc_2018_a
A - コンテスト名Editorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : コンテストの名前の候補として、英大文字からなる文字列 S
が与えられます。この文字列の先頭 5 文字が MUJIN であるかどうか判定してください。
制約S は英大文字からなる1 \leq |S| \leq
10入力入力は以下の形式で標準入力から与えられる。S出力与えられる文字列の先頭 5
文字が MUJIN である場合は Yes 、そうでない場合は No を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/mujin-pc-2018/submissions/9005142
// 提出ID : 9005142
// 問題ID : mujin_pc_2018_a
// コンテストID : mujin-pc-2018
// ユーザID : xryuseix
// コード長 : 1757
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
  }
};
const ll MOD = 1000000007;
const double EPS = 1e-9;
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;

int main(void) {

  // int n,a;
  // cin>>n>>a;
  // cout<<n*n-a<<endl;
  string s;
  cin >> s;
  if (s.substr(0, 5) == "MUJIN")
    fin("Yes");
  else
    fin("No");
}
