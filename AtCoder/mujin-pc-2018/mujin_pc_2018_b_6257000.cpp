/*
問題文の引用元：https://atcoder.jp/contests/mujin-pc-2018/tasks/mujin_pc_2018_b
B - セキュリティEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : 初めロボットがある部屋には A
人おり、その後人が出入りしましたが、部屋に誰もいなくなった瞬間があるかどうかが気になっています。人の出入りを表す文字列
S が与えられます。S の i 文字目が + の場合は時刻 i に 1
人が部屋に入ってきたこと、- の場合は 1
人が部屋から出ていったことを表します。記録が始まる前後も含めて、部屋の中が 0
人になったことがあるかどうか判定してください。
制約0 \leq A \leq 1001 \leq |S| \leq 100S は + または -
から成る部屋に人がいない状態で - が記録されていることはないA
は整数入力入力は以下の形式で標準入力から与えられる。AS出力部屋に人がいない瞬間がある場合は
Yes を、ない場合は No を出力してください。
// ソースコードの引用元 :
https://atcoder.jp/contests/mujin-pc-2018/submissions/6257000
// 提出ID : 6257000
// 問題ID : mujin_pc_2018_b
// コンテストID : mujin-pc-2018
// ユーザID : xryuseix
// コード長 : 1784
// 実行時間 : 1



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
#define P 1000000007
#define STI(s) atoi(s.c_str()) // string to int
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
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

  int a;
  string s;
  cin >> a >> s;
  if (a == 0) {
    cout << "Yes" << endl;
    return 0;
  }
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == '+')
      a++;
    else
      a--;
    if (a == 0) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;

  //////////////////////////////////////////////////////
  return 0;
}
