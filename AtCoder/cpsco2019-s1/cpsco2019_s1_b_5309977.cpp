/*
問題文の引用元：https://atcoder.jp/contests/cpsco2019-s1/tasks/cpsco2019_s1_b
B - Beautiful HarmonyEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 :     英小文字からなる文字列 S が「美しい」とは、 S に 1
つ以上含まれるアルファベットについて、その出現回数がすべて等しいことを言います。例えば、abba
や ddddd，xyz は美しいですが、aab  や xyxyxyz  は美しくありません。    文字列 S
が与えられるので、S が美しいかどうかを判定してください。
制約    S の長さは 1 以上 10^5 以下    S は英小文字のみからなる
入力    入力は以下の形式で標準入力から与えられます。    S
出力     S が美しいならYes  、美しくないならNo  と 1 行に出力してください。
// ソースコードの引用元 :
https://atcoder.jp/contests/cpsco2019-s1/submissions/5309977
// 提出ID : 5309977
// 問題ID : cpsco2019_s1_b
// コンテストID : cpsco2019-s1
// ユーザID : xryuseix
// コード長 : 1401
// 実行時間 : 8



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
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define vvs vector<vector<string>>
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

  string s;
  cin >> s;
  // sort(s.begin(),s.end()));
  int i;
  map<char, int> m;
  rep(i, s.length()) {
    if (m.find(s[i]) == m.end()) {
      m[s[i]] = 1;
    } else {
      m[s[i]]++;
    }
  }
  map<char, int>::iterator it;
  int len = m[s[0]];
  bool ch = true;
  for (i = 0; i < s.length(); i++) {
    if (m[s[i]] != len) {
      ch = false;
    }
  }
  if (ch)
    fin("Yes");
  else
    fin("No");

  //////////////////////////////////////////////////////
  return 0;
}
