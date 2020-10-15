/*
引用元：https://atcoder.jp/contests/abc128/tasks/abc128_b
B - GuidebookEditorial
// ソースコードの引用元 : https://atcoder.jp/contests/abc128/submissions/5647927
// 提出ID : 5647927
// 問題ID : abc128_b
// コンテストID : abc128
// ユーザID : xryuseix
// コード長 : 1741
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

  int n, i, t, j, k;
  string s, str;
  cin >> n;
  vector<pair<string, int>> v;
  string a[n], c[n];
  int b[n];
  rep(i, n) {
    cin >> s >> t;
    a[i] = s;
    b[i] = t;
    c[i] = s;
    v.push_back(make_pair(s, t));
  }
  int ans[n] = {0};
  sort(c, c + n);
  sort(v.begin(), v.end());
  for (i = 0; i < n; i++) {
    str = c[i];
    //		cout<<c[i]<<endl;
    for (j = n - 1; j >= 0; j--) {
      if (v[j].first == str) {
        for (k = 0; k < n; k++) {
          if (v[j].first == a[k] && v[j].second == b[k]) {
            cout << k + 1 << endl;
            break;
          }
        }
        v[j].first = "###";

        //				cout<<j<<endl;
        break;
      }
    }
  }
  //	rep(i,n)cout<<ans[i]<<endl;

  //////////////////////////////////////////////////////
  return 0;
}
