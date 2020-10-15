/*
問題文の引用元：https://atcoder.jp/contests/abc004/tasks/abc004_2
B - 回転Editorial
Time Limit : 2 sec / Memory Limit : 64 MB
問題文 :             高橋君は 4 x 4 マスの盤面を見つけました。        各マスには
.ox のいずれかの文字が書かれています。
彼はこの盤面を回転させた後、どういった状態になるのか気になりました。
盤面を正面から見たときの状態が与えられるので、180
度回転させた後の盤面を出力してください。        入力
入力は以下の形式で標準入力から与えられる。c_{0,0} c_{0,1} c_{0,2} c_{0,3}c_{1,0}
c_{1,1} c_{1,2} c_{1,3}c_{2,0} c_{2,1} c_{2,2} c_{2,3}c_{3,0} c_{3,1} c_{3,2}
c_{3,3}        1 行目から 4
行目にわたって、盤面の初期状態が半角スペース区切りで与えられる。
c_{i,j} (0≦i, j≦3) は 盤面のマスを意味し、 .ox から構成される。
出力            180
度回転させた後の盤面を入力と同じフォーマットで出力してください。また、出力の末尾には改行を入れること。
// ソースコードの引用元 : https://atcoder.jp/contests/abc004/submissions/4550624
// 提出ID : 4550624
// 問題ID : abc004_2
// コンテストID : abc004
// ユーザID : xryuseix
// コード長 : 1016
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

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  char a[4][4];
  int i, j;
  rep(i, 4) rep(j, 4) cin >> a[i][j];
  //    for(i=0;i<4;i++){
  //    	for(j=0;j<4;j++)cout<<a[i][j];
  //    	cout<<endl;
  //	}
  for (i = 3; i >= 0; i--) {
    for (j = 3; j >= 0; j--) {
      cout << a[i][j];
      if (j > 0)
        cout << " ";
    }
    cout << endl;
  }

  return 0;
}
