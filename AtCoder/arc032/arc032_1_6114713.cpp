/*
問題文の引用元：https://atcoder.jp/contests/arc032/tasks/arc032_1
A - ホリドッグEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 :
とても賢い犬であるホリドッグ(Holidog)くんは、足し算と素数判定をすることができます。ホリドッグくんはある正整数についてそれが素数であるか尋ねられたとき、それが素数であるなら
WANWAN、そうでなければ BOWWOW と吠えます。あなたは、ホリドッグくんに 1 から n
までの総和 1 + 2 + 3 + … + n
が素数であるかどうかを尋ねました。ホリドッグくんがどう吠えたかを出力するプログラムを書いて下さい。素数とは、1
とその数自身以外の正整数で割り切ることが出来ない 2
以上の正整数のことを言います。例えば 2 や 3 や 17 は素数です。1 や 10
は素数ではありません。入力入力は以下の形式で標準入力から与えられる。n1
行目には、1 つの整数 n (1 ≦ n ≦ 1000) が与えられる.出力1 行目には、1 + 2 + 3 + …
+ n が素数ならば WANWAN、 そうでなければ BOWWOW
を出力せよ。末尾の改行を忘れないこと。
// ソースコードの引用元 : https://atcoder.jp/contests/arc032/submissions/6114713
// 提出ID : 6114713
// 問題ID : arc032_1
// コンテストID : arc032
// ユーザID : xryuseix
// コード長 : 1549
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
typedef vector<pair<int, int>> vpii;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef vector<vector<string>> vvs;
#define rep(i, n) for (int i = 0; i < (n); ++i)
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

bool isPrime(int x) {
  int i;
  if (x < 2)
    return 0;
  else if (x == 2)
    return 1;
  if (x % 2 == 0)
    return 0;
  for (i = 3; i * i <= x; i += 2)
    if (x % i == 0)
      return 0;
  return 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////
  int n;
  cin >> n;
  if (isPrime(n * (n + 1) / 2))
    fin("WANWAN");
  else
    fin("BOWWOW");

  //////////////////////////////////////////////////////
  return 0;
}
