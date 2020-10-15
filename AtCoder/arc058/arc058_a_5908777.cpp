/*
問題文の引用元：https://atcoder.jp/contests/arc058/tasks/arc058_a
C - Iroha's ObsessionEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 300 点
問題文 : いろはちゃんはこだわりもので、嫌いな数字が K 個あり、それぞれ D_1, D_2,
..., D_K です。いろはちゃんはお店でお買い物をしていて、 N
円の品物を買おうとしています。もちろん、この品物は N
円以上のお金を支払えば買うことができます。しかし、先ほど述べたようにいろはちゃんは強いこだわりがあるので、自分がお店に支払う金額の
10
進表記にいろはちゃんの嫌いな数字が出現しないような最も少ない金額を支払おうとします。いろはちゃんが支払う金額を求めてください。
制約 1 ≦ N < 10000 1 ≦ K < 10 0 ≦ D_1 < D_2 < … < D_K≦9\{D_1,D_2,...,D_K\} ≠
\{1,2,3,4,5,6,7,8,9\}入力入力は以下の形式で標準入力から与えられる。N KD_1 D_2 …
D_K出力いろはちゃんが支払う金額を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/arc058/submissions/5908777
// 提出ID : 5908777
// 問題ID : arc058_a
// コンテストID : arc058
// ユーザID : xryuseix
// コード長 : 1692
// 実行時間 : 2



*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cctype>
#include <climits>
#include <bitset>
#define ld long double
#define ll long long int
#define ull unsigned long long int
#define rep(i, n) for (i = 0; i < n; i++)
#define fin(ans) cout << (ans) << endl
#define INF INT_MAX
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vpii vector<pair<int, int>>
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define vvs vector<vector<string>>
#define P 1000000007
#define STI(s) atoi(s.c_str()) // string to int
#define mp(p, q) make_pair(p, q)
#define Sort(a) sort(a.begin(), a.end())
using namespace std;
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
const long long LLINF = 1LL << 60;
// set<int>::iterator it;
//|\_
// g++ -std=c++1z temp.cpp
//./a.out

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////
  int n, k, i, t, u;
  cin >> n >> k;
  set<int> s;
  rep(i, k) {
    cin >> t;
    s.insert(t);
  }
  for (i = n;; i++) {
    t = i;
    bool ch = true;
    while (t > 0) {
      u = t % 10;
      t /= 10;
      if (s.find(u) != s.end()) {
        ch = false;
        break;
      }
    }
    if (ch) {
      cout << i << endl;
      return 0;
    }
  }

  //////////////////////////////////////////////////////
  return 0;
}
