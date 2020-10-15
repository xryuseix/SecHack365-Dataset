/*
問題文の引用元：https://atcoder.jp/contests/sumitrust2019/tasks/sumitb2019_c
C - 100 to 105Editorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点: 300 点
問題文 : AtCoder 商店では、以下の 6 種類の品物が 1000000 個ずつ売られています。
1 個 100 円のおにぎり1 個 101 円のサンドイッチ1 個 102 円のクッキー1 個 103
円のケーキ1 個 104 円の飴1 個 105 円のパソコン高橋君は、合計価格がちょうど X
円となるような買い物をしたいです。そのような買い方が存在するか判定してください。ただし、消費税は考えないものとします。
制約1 \leq X \leq 100000X は整数入力入力は以下の形式で標準入力から与えられます。
X出力合計値段がちょうど X 円となるような買い物をすることが可能な場合は
1、そうでない場合は 0 と出力してください。
// ソースコードの引用元 :
https://atcoder.jp/contests/sumitrust2019/submissions/8753358
// 提出ID : 8753358
// 問題ID : sumitb2019_c
// コンテストID : sumitrust2019
// ユーザID : xryuseix
// コード長 : 2214
// 実行時間 : 609



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

  int x;
  cin >> x;
  set<int> s;
  s.insert(0);
  vi a{100, 101, 102, 103, 104, 105};
  for (int i = 0; i < 1001; i++) {
    set<int> tmp;
    for (auto it = s.begin(); it != s.end(); it++) {
      for (int j = 0; j < 6; j++) {
        if (a[j] + (*it) <= x)
          tmp.insert(a[j] + (*it));
      }
    }
    // for (auto it = tmp.begin(); it != tmp.end(); it++)
    // {
    //     s.insert(*it);
    // }
    if (s.find(x) != s.end()) {
      fin(1);
      return 0;
    }
    s.clear();
    s = tmp;
  }
  fin(s.find(x) != s.end());
}
