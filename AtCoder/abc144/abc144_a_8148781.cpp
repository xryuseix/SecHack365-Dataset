/*
問題文の引用元：https://atcoder.jp/contests/abc144/tasks/abc144_a
A - 9x9Editorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : 高橋君は九九を覚えたので、1 以上 9 以下の 2
つの整数の積を計算することができます。それ以外の計算はできません。2 つの整数 A,
B が与えられます。高橋君が A \times B
を計算できるならその結果を、できないなら代わりに -1 を出力してください。
制約1 \leq A \leq 201 \leq B \leq
20入力中のすべての値は整数である。入力入力は以下の形式で標準入力から与えられる。A
B出力高橋君が A \times B を計算できるならその結果を、できないなら -1
を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc144/submissions/8148781
// 提出ID : 8148781
// 問題ID : abc144_a
// コンテストID : abc144
// ユーザID : xryuseix
// コード長 : 1848
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
  // bool ch=false;
  // for(int i=1;i<10;i++){
  //     for(int j=1;j<10;j++){
  //         if(i*j==n)ch=true;
  //     }
  // }
  // if(ch)fin("Yes");
  // else fin("No");
  int a, b;
  cin >> a >> b;
  if (a < 10 && b < 10)
    cout << a *b << endl;
  else
    fin(-1);
}
