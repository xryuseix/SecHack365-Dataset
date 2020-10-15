/*
問題文の引用元：https://atcoder.jp/contests/code-festival-2017-quala/tasks/code_festival_2017_quala_b
B - fLIPEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : N 行 M 列のマス目があり、最初は全てのマスが白いです。各行各列には 1
つずつボタンがあります。ある行のボタンを押すと、その行のマスの色が全て反転します。すなわち、白なら黒、黒なら白に色が変わります。また、ある列のボタンを押すと、その列のマスの色が全て反転します。高橋君は、ボタンを押す操作を好きな回数行うことができます。黒く塗られたマスの個数をちょうど
K 個にすることができるかどうか判定してください。
制約1 \leq N,M \leq 10000 \leq K \leq
NM入力入力は以下の形式で標準入力から与えられる。N M
K出力黒く塗られたマスの個数をちょうど K 個にできるなら Yes を、そうでないなら No
を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/code-festival-2017-quala/submissions/8235116
// 提出ID : 8235116
// 問題ID : code_festival_2017_quala_b
// コンテストID : code-festival-2017-quala
// ユーザID : xryuseix
// コード長 : 2060
// 実行時間 : 242



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

  int h, w, k;
  cin >> h >> w >> k;
  set<int> s;
  for (int i = 0; i <= h; i++) {
    s.insert(i * w);
  }
  for (int i = 0; i <= w; i++) {
    s.insert(i * h);
  }
  for (int i = 0; i <= h; i++) {
    for (int j = 0; j <= w; j++) {
      int c = i * w + j * h - 2 * i * j;
      s.insert(c);
    }
  }
  if (s.find(k) != s.end()) {
    fin("Yes");
  } else {
    fin("No");
  }
  // for(auto it=s.begin();it!=s.end();it++){
  //     cout<<*it<<" ";
  // }
  // cout<<endl;
}
