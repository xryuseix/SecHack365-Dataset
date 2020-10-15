/*
問題文の引用元：https://atcoder.jp/contests/arc031/tasks/arc031_2
B - 埋め立て
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 :
とある所に島国がありました。島国にはいくつかの島があります。このたび、この島国で埋め立て計画が立案されたのですが、どこを埋め立てるか決まっていません。できることなら埋め立てによって島を繋いで、1
つの島にしてしまいたいのですが、たくさん埋め立てるわけにもいきません。10 マス ×
10 マスのこの島国の地図が与えられるので、1 マスを埋め立てた時に 1
つの島にできるか判定してください。ただし、地図で陸地を表すマスが上下左右につながっている領域のことを島と呼びます。入力入力は以下の形式で標準入力から与えられる。A1,1A1,2...A1,10A2,1A2,2...A2,10:A10,1A10,2...A10,10島国の地図が
10 行にわたって与えられる。各行は 10 文字からなり、o は陸地を、x
は海を表す。少なくとも 1 マスは陸地があることが保証される。少なくとも 1
マスは海があることが保証される。出力海を 1 マスだけ陸地にすることで全体を 1
つの島にできるなら YES 、できないなら NO
を出力せよ。出力の末尾には改行をつけること。ただし、元から 1 つの島だった場合も
YES を出力せよ。



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
#include <cassert>
#include <climits>
#include <string>
#include <bitset>
#include <cfloat>
#include <unordered_set>
#pragma GCC optimize("Ofast")
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
#define irep(it, stl) for (auto it = stl.begin(); it != stl.end(); it++)
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define fin(ans) cout << (ans) << '\n'
#define STI(s) atoi(s.c_str())
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
#define MATHPI acos(-1)
#define itn int;
int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
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
  }
};
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;
const ll MOD = 1000000007;
const double EPS = 1e-9;

bool judge(vs s) {
  vs t = s;
  queue<pair<int, int>> q; // y,x
  bool ch = 0;
  rep(i, 10) {
    rep(j, 10) {
      if (s[i][j] == 'o') {
        q.push(mp(i, j));
        ch = 1;
        break;
      }
    }
    if (ch)
      break;
  }
  s[q.front().first][q.front().second] = 'x';
  while (!q.empty()) {
    auto now = q.front();
    q.pop();
    rep(i, 4) {
      // cout<<now.first<<" "<<now.second<<endl;
      int nx = now.second + dx[i];
      int ny = now.first + dy[i];
      if (nx < 0 || ny < 0 || nx > 9 || ny > 9)
        continue;
      if (s[ny][nx] == 'x')
        continue;
      s[ny][nx] = 'x';
      q.push(mp(ny, nx));
      // cout<<" :: "<<q.size()<<" "<<q.front().first<<"
      // "<<q.front().second<<endl;
      // cout<<" :: "<<ny<<" "<<nx<<endl;
    }
    // cout<<"--------"<<endl;
  }

  rep(i, 10) rep(j, 10) {
    if (s[i][j] == 'o')
      return false;
  }
  // rep(i,10){
  //     cout<<t[i]<<endl;
  // }
  // cout<<endl;
  return true;
}

int main(void) {

  vs s(10);
  rep(i, 10) cin >> s[i];
  bool ans = 0;
  rep(i, 10) rep(j, 10) {
    if (s[i][j] == 'o')
      continue;
    s[i][j] = 'o';
    ans |= judge(s);
    s[i][j] = 'x';
  }
  if (ans)
    fin("YES");
  else
    fin("NO");
}
