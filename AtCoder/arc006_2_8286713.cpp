/*
引用元：https://atcoder.jp/contests/arc006/tasks/arc006_2
B - あみだくじEditorial
// ソースコードの引用元 : https://atcoder.jp/contests/arc006/submissions/8286713
// 提出ID : 8286713
// 問題ID : arc006_2
// コンテストID : arc006
// ユーザID : xryuseix
// コード長 : 2394
// 実行時間 : 1



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
#include <cfloat>
#include <unordered_set>
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef vector<double> vd;
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
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
#define MATHPI acos(-1)
#define itn int
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
struct io {
  io() {
    ios::sync_with_stdio(false);
    cin.tie(0);
  };
};
const int MOD = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 62;

int main(void) {

  int n, l;
  scanf("%d %d", &n, &l);
  vector<string> s(l + 2);
  for (int i = 0; i < l + 2; i++) {
    getline(cin, s[i]);
  }
  // cout<<endl;
  // for(int i=0;i<l+2;i++){
  //     cout<<s[i]<<endl;
  // }
  int posy = l, posx;
  for (int i = 0; i < 2 * n - 1; i++) {
    if (s[l + 1][i] == 'o')
      posx = i;
  }
  while (1) {
    // cout<<posx<<" "<<posy<<endl;
    if (posx >= 2 && s[posy][posx - 1] == '-') {
      // cout<<"A"<<endl;
      s[posy][posx - 1] = ' ';
      posx -= 2;
      continue;
    } else if (posx + 2 < 2 * n - 1 && s[posy][posx + 1] == '-') {
      // cout<<"B"<<endl;
      s[posy][posx + 1] = ' ';
      posx += 2;
    } else if (posy == 0) {
      cout << posx / 2 + 1 << endl;
      return 0;
    } else {
      posy--;
    }
  }
}
