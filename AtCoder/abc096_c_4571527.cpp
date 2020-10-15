/*
引用元：https://atcoder.jp/contests/abc096/tasks/abc096_c
C - Grid Repainting 2Editorial
// ソースコードの引用元 : https://atcoder.jp/contests/abc096/submissions/4571527
// 提出ID : 4571527
// 問題ID : abc096_c
// コンテストID : abc096
// ユーザID : xryuseix
// コード長 : 1669
// 実行時間 : 6



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
#define ld long double
#define ll long long int
#define ull unsigned long long int
#define rep(i, n) for (i = 0; i < n; i++)
#define fin(ans) cout << (ans) << endl
#define INF INT_MAX;
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

bool dfs(vector<vector<char>> v, int i, int j, int h, int w) {
  if (j - 1 >= 0 && v[i][j - 1] == '#')
    return true;
  else if (i + 1 < h && v[i + 1][j] == '#')
    return true;
  else if (i - 1 >= 0 && v[i - 1][j] == '#')
    return true;
  else if (j + 1 < w && v[i][j + 1] == '#')
    return true;
  else {
    //		cout<<i<<" "<<j<<" "<<v[i][j-1]<<" "<<v[i-1][j]<<"
    //"<<v[i][j+1]<<endl;
    return false;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  int h, w, i, j;
  string s;
  char c;
  bool ch = true, sh = false;
  ;
  cin >> h >> w;
  vector<vector<char>> v(h, vector<char>());
  for (i = 0; i < h; i++) {
    cin >> s;
    for (j = 0; j < w; j++) {
      v[i].push_back(s[j]);
    }
  }
  //	for(i=0;i<h;i++){
  //		for(j=0;j<w;j++){
  //			cout<<v[i][j];
  //		}
  //		cout<<endl;
  //	}
  for (i = 0; i < h; i++) {
    for (j = 0; j < w; j++) {
      if (v[i][j] == '#') {
        if (!dfs(v, i, j, h, w))
          ch = false;
      }
    }
  }
  if (ch)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  //////////////////////////////////////////////////////
  return 0;
}
