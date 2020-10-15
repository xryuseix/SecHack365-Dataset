/*
問題文の引用元：https://atcoder.jp/contests/abc126/tasks/abc126_b
B - YYMM or MMYYEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : 長さ 4 の数字列 S
が与えられます。あなたは、この数字列が以下のフォーマットのどちらであるか気になっています。YYMM
フォーマット: 西暦年の下 2 桁と、月を 2 桁で表したもの (例えば 1 月なら 01)
をこの順に並べたものMMYY フォーマット: 月を 2 桁で表したもの (例えば 1 月なら
01) と、西暦年の下 2
桁をこの順に並べたもの与えられた数字列のフォーマットとして考えられるものが YYMM
フォーマットのみである場合 YYMM を、MMYY フォーマットのみである場合 MMYY
を、YYMM フォーマット と MMYY フォーマットのどちらの可能性もある場合 AMBIGUOUS
を、どちらの可能性もない場合 NA を出力してください。
制約S は長さ 4 の数字列入力入力は以下の形式で標準入力から与えられる。S出力YYMM,
MMYY, AMBIGUOUS, NA のうち正しいものを出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc126/submissions/5457035
// 提出ID : 5457035
// 問題ID : abc126_b
// コンテストID : abc126
// ユーザID : xryuseix
// コード長 : 1426
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
#include <bits/stdc++.h>
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

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  int a, b, ans1 = 0, ans2 = 0;
  string s;
  cin >> s;
  a = (s[0] - '0') * 10 + (s[1] - '0');
  b = (s[2] - '0') * 10 + (s[3] - '0');
  if (a > 0 && b > 0 && a <= 12 && b <= 12)
    cout << "AMBIGUOUS" << endl;
  else if (a > 0 && a <= 12)
    fin("MMYY");
  else if (b > 0 && b <= 12)
    fin("YYMM");
  else
    fin("NA");

  //////////////////////////////////////////////////////
  return 0;
}
