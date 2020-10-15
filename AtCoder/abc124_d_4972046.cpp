/*
引用元：https://atcoder.jp/contests/abc124/tasks/abc124_d
D - HandstandEditorial
// ソースコードの引用元 : https://atcoder.jp/contests/abc124/submissions/4972046
// 提出ID : 4972046
// 問題ID : abc124_d
// コンテストID : abc124
// ユーザID : xryuseix
// コード長 : 1641
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

  int i, j, n, k;
  string s;
  cin >> n >> k >> s;
  vector<int> v;

  int ans = 0, add = 2 * k + 1, left = 0, right = 0;
  int tmp = 0;
  int cnt = 0;
  int now = 1;
  for (i = 0; i < n; i++) {
    if (s[i] == (char)('0' + now))
      cnt++;
    else {
      v.push_back(cnt);
      now = 1 - now; // 0と1を切り替える時の計算 now ^= 1;
      cnt = 1; //新しいのをカウントし始める
    }
  }
  if (cnt != 0)
    v.push_back(cnt);
  if (v.size() % 2 == 0)
    v.push_back(0);

  //	rep(i,v.size())cout<<v[i];
  for (i = 0; i < v.size(); i += 2) {
    int nextleft = i;
    int nextright = min(i + add, (int)v.size());

    while (nextleft > left) {
      tmp -= v[left];
      left++;
    }
    while (nextright > right) {
      tmp += v[right];
      right++;
    }
    ans = max(tmp, ans);
    //		cout<<tmp<<endl;
  }
  fin(ans);

  //////////////////////////////////////////////////////
  return 0;
}
