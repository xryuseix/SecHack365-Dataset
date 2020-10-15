/*
引用元：https://atcoder.jp/contests/abc134/tasks/abc134_d
D - Preparing BoxesEditorial
// ソースコードの引用元 : https://atcoder.jp/contests/abc134/submissions/6465655
// 提出ID : 6465655
// 問題ID : abc134_d
// コンテストID : abc134
// ユーザID : xryuseix
// コード長 : 2348
// 実行時間 : 26



*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cctype>
#include <climits>
#include <string>
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
#define STI(s) atoi(s.c_str())
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
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
const int P = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;
// g++ -std=c++1z temp.cpp
//./a.out

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////
  int n;
  cin >> n;
  vi a(n + 1), ans(n + 1);
  for (int i = 1; i <= n; i++)
    cin >> a[i];
  int sum;
  for (int i = n / 2 + 1; i <= n; i++) {
    ans[i] = a[i];
  }
  // cout<<"AAAA"<<endl;
  for (int i = n / 2; i > 0; i--) {
    //今いる位置
    sum = 0;
    for (int j = i + i; j <= n; j += i) {
      sum += ans[j];
    }
    // cout<<i<<" "<<a[i]<<" "<<sum<<endl;
    if (sum % 2 == a[i]) {
      ans[i] = 0;
    } else {
      ans[i] = 1;
    }
  }
  // cout<<"BBBB"<<endl;
  int bef, count = 0;
  for (int i = 1; i <= n; i++) {
    if (ans[i] == 1) {
      bef = i;
      count++;
    }
  }
  cout << count << endl;
  // for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
  // cout<<endl;
  for (int i = 1; i <= n; i++) {
    if (ans[i] == 1 && i != bef)
      cout << i << " ";
    else if (i == bef)
      cout << i << endl;
  }

  //////////////////////////////////////////////////////
  return 0;
}
