/*
引用元：https://atcoder.jp/contests/agc032/tasks/agc032_a
A - Limited InsertionEditorial
// ソースコードの引用元 : https://atcoder.jp/contests/agc032/submissions/5770991
// 提出ID : 5770991
// 問題ID : agc032_a
// コンテストID : agc032
// ユーザID : xryuseix
// コード長 : 2029
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
//|\_
// g++ -std=c++1z temp.cpp
//./a.out

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  int i, n, t;
  list<int> li;
  vector<int> v;
  cin >> n;
  rep(i, n) {
    cin >> t;
    li.push_back(t);
  }
  auto it = li.rbegin();
  auto itr = li.begin();
  t = li.size();
  int bt;
  while (t > 0) {
    t = li.size();
    bt = t;
    itr = li.begin();
    for (it = li.rbegin(); it != li.rend(); it++) {
      // cout<<*it<<"  "<<t<<endl;
      if (t == *it) {
        v.push_back(*it);
        advance(itr, t - 1);
        li.erase(itr);
        break;
      }
      t--;
      if (t < 0) {
        cout << -1 << endl;
        return 0;
      }
    }

    t = li.size();
    if (bt == t) {
      cout << -1 << endl;
      return 0;
    }
  }

  for (i = v.size() - 1; i >= 0; i--) {
    cout << v[i] << endl;
  }
  //////////////////////////////////////////////////////
  return 0;
}
