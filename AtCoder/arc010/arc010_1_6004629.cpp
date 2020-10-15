/*
問題文の引用元：https://atcoder.jp/contests/arc010/tasks/arc010_1
A - 名刺交換Editorial
Time Limit : 2 sec / Memory Limit : 64 MB
問題文 : 青木君は就職活動をおこなっている大学生で、名刺を N
枚持っています。これから M 日間の就職活動を予定しており、 i 日目には名刺を c_{i}
枚消費することがわかっています。就職活動を行うにあたり、名刺が足りなくなると非常に困ります。そこで、青木君はそれぞれの日のはじめに名刺の所持枚数を確認し、A
枚以下ならば B 枚名刺を補充することにしました。B 枚補充しても A
枚以下にしかならないような場合でも、それ以上の補充はできません。最初から持っている
N
枚とこのような補充で、就職活動の最後の日まで乗りきれるかどうか判定してください。もし、足りなくなる場合は、その日付を青木君に教えてあげてください。入力入力は以下の形式で標準入力から与えられる。N
M A Bc_{1}c_{2}::c_{M}1 行目に N , M , A , B
が半角スペースで区切られて与えられる。N は持っている名刺の枚数で 1≦N≦1,000
を満たす。M は就職活動の日数で 0≦M≦100 を満たす。A
は名刺を補充するタイミングの枚数を示す数で 0≦A≦1,000 を満たす。B
は補充する名刺の枚数で 0≦B≦1,000 を満たす。N , M , A , B は全て整数である。2
行目から M+1 行目までの M 行間で、名刺を配る枚数がそれぞれ与えられる。c_{i} は
i(1≦i≦M) 日目に配る名刺の枚数を表す整数で 0≦c_{i}≦1,000
を満たす。出力就職活動の最後の日まで乗り切ることができればcompleteと出力すること。もし、名刺を配りきってしまった場合は、足りなくなった日の日付を出力すること。出力は標準出力におこない、末尾には改行をいれること。
// ソースコードの引用元 : https://atcoder.jp/contests/arc010/submissions/6004629
// 提出ID : 6004629
// 問題ID : arc010_1
// コンテストID : arc010
// ユーザID : xryuseix
// コード長 : 1483
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
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<pair<int, int>> vpii;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef vector<vector<string>> vvs;
#define rep(i, n) for (i = 0; i < n; i++)
#define fin(ans) cout << (ans) << endl
#define P 1000000007
#define STI(s) atoi(s.c_str()) // string to int
#define mp(p, q) make_pair(p, q)
#define Sort(a) sort(a.begin(), a.end())
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
const int INF = INT_MAX;
const long long LLINF = 1LL << 60;
// g++ -std=c++1z temp.cpp
//./a.out

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////
  int i, n, m, a, b, c;
  cin >> n >> m >> a >> b;
  rep(i, m) {
    if (n <= a)
      n += b;
    cin >> c;
    n -= c;
    if (n < 0) {
      cout << i + 1 << endl;
      return 0;
    }
  }
  cout << "complete" << endl;
  //////////////////////////////////////////////////////
  return 0;
}
