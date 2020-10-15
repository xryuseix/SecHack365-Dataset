/*
問題文の引用元：https://atcoder.jp/contests/abc145/tasks/abc145_a
A - CircleEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : 整数 r が与えられます。半径 r の円の面積が半径 1
の円の面積の何倍になるかを求めてください。なお答えは
制約の下では必ず整数になることが示せます。
制約1 \leq r \leq
100入力中のすべての値は整数である。入力入力は以下の形式で標準入力から与えられる。r出力半径
r の円の面積が半径 1 の円の面積の何倍になるかを整数で出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc145/submissions/8465337
// 提出ID : 8465337
// 問題ID : abc145_a
// コンテストID : abc145
// ユーザID : xryuseix
// コード長 : 1898
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
const int MOD = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 62;

int main(void) {

  // int n;
  // cin>>n;
  // string s;
  // cin>>s;
  // if(n%2==1){
  //     fin("No");
  //     return 0;
  // }
  // if(s.substr(0,n/2)==s.substr(n/2)){
  //     fin("Yes");
  //     return 0;
  // } else {
  //     fin("No");
  // }
  int n;
  cin >> n;
  cout << n *n << endl;
}
