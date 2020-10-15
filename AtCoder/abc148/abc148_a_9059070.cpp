/*
問題文の引用元：https://atcoder.jp/contests/abc148/tasks/abc148_a
A - Round OneEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点: 100 点
問題文 :
高橋君はペーパークイズを解いています。高橋君はすらすらと解いていき、残すは最終問題のみとなりました。この問題は、答えが
1,2,3 のいずれかである 3 択問題です。高橋君は超能力によって、A と B
が誤答であることがわかりました。この問題の答えを出力してください。
制約A,B は 1,2,3 のいずれかA と B
は異なる入力入力は以下の形式で標準入力から与えられる。AB出力答えを出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc148/submissions/9059070
// 提出ID : 9059070
// 問題ID : abc148_a
// コンテストID : abc148
// ユーザID : xryuseix
// コード長 : 1930
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
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define fin(ans) cout << (ans) << '\n'
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

  //     string s,t;
  // int n;
  // cin>>n;
  //     cin>>s>>t;
  //     for(int i=0;i<s.size();i++){
  //         cout<<s[i]<<t[i];
  //     }
  //     cout<<endl;

  int a, b;
  cin >> a >> b;
  if (a > b)
    swap(a, b);
  if (a == 1 && b == 2)
    fin(3);
  else if (a == 1 && b == 3)
    fin(2);
  else if (a == 2 && b == 3)
    fin(1);
}
