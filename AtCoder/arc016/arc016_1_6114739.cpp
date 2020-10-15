/*
問題文の引用元：https://atcoder.jp/contests/arc016/tasks/arc016_1
A - クイズゲームEditorial
Time Limit : 2 sec / Memory Limit : 64 MB
問題文 :
高橋君はクイズゲームを作っています。ヒント機能として、「不正解の選択肢を 1
つ消す」という機能を作りたいです。あなたには選択肢の数 N
と、その問題の正解である番号 M が与えられます。消してもよい選択肢の番号を 1
つ出力してください（消す選択肢は、正解である番号でなければ何でも構いません）。入力入力は以下の形式で標準入力から与えられる。N
M1 行目には、選択肢を示す整数 N(2≦N≦5) と、正解の番号を示す整数である M(1≦M≦N)
が与えられる。選択肢の範囲は 1 から N
までである。出力消してもよい選択肢の番号を出力せよ。また、出力の末尾には改行を入れること。
// ソースコードの引用元 : https://atcoder.jp/contests/arc016/submissions/6114739
// 提出ID : 6114739
// 問題ID : arc016_1
// コンテストID : arc016
// ユーザID : xryuseix
// コード長 : 1347
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

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////
  int n, m;
  cin >> n >> m;
  if (m - 1 > 0)
    cout << m - 1;
  else
    cout << m + 1 << endl;
  //////////////////////////////////////////////////////
  return 0;
}
