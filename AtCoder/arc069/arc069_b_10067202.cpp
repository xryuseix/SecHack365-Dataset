/*
問題文の引用元：https://atcoder.jp/contests/arc069/tasks/arc069_b
D - Menagerie
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 500 点
問題文 : すぬけくんは動物が好きなので動物園を作りました。この動物園では 1,2,3,
..., N の番号を割り振られた N 匹の動物が円環状に並べられています。i (2≦i≦N-1)
番の動物は i-1 番の動物と i+1 番の動物と隣り合っています。また、1 番の動物は N
番の動物と 2 番の動物と隣り合っており、N 番の動物は N-1 番の動物と 1
番の動物と隣り合っています。動物園には本当のことしか言わない正直者の羊と、嘘しか言わない嘘つきの狼の
2
種類の動物がいます。すぬけくんには羊と狼の区別がつかないので、それぞれの動物に両隣の動物が同じ種類かどうかを訪ねたところ、i
番目の動物は s_i と答えました。s_i が o ならば両隣の動物が同じ種類であると、x
ならば異なる種類であると i
番の動物が言ったことを示します。より形式的には、羊は両隣の動物がどちらも羊あるいはどちらも狼のとき
o と答え、そうでないとき x
と答えます。狼は両隣の動物がどちらも羊あるいはどちらも狼のとき x
と答え、そうでないとき o
と答えます。これらの回答結果と矛盾しないような各動物の種別の割り当てが存在するか、すぬけくんは気になっています。存在するならば一例を示し、存在しないならば
-1 を出力しなさい。
制約3 ≦ N ≦ 10^{5}s は o と x のみからなる長さ N
の文字列入力入力は以下の形式で標準入力から与えられる。Ns出力s
と矛盾しないような各動物の種類の割当てが存在しないならば -1
を出力してください。存在するならば以下の形式で文字列 t を出力してください。 t
で示される割り当てが s と矛盾しないならば正解となります。t は長さ N で S と W
のみからなる文字列t_i が S ならば i 番の動物が羊であることを、W
ならば狼であることを示す



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

void umeru(string &s, vc &v, int n) {
  if (v[0] == 'S') {
    if (s[0] == 'o') {
      v[n - 1] = v[1];
    } else {
      if (v[1] == 'W')
        v[n - 1] = 'S';
      else
        v[n - 1] = 'W';
    }
  } else {
    if (s[0] == 'o') {
      if (v[1] == 'W')
        v[n - 1] = 'S';
      else
        v[n - 1] = 'W';
    } else {
      v[n - 1] = v[1];
    }
  }
  for (int i = 1; i < n - 2; i++) {
    if (v[i] == 'S') {
      if (s[i] == 'o') {
        v[i + 1] = v[i - 1];
      } else {
        if (v[i - 1] == 'W')
          v[i + 1] = 'S';
        else
          v[i + 1] = 'W';
      }
    } else {
      if (s[i] == 'o') {
        if (v[i - 1] == 'W')
          v[i + 1] = 'S';
        else
          v[i + 1] = 'W';
      } else {
        v[i + 1] = v[i - 1];
      }
    }
  }
}

bool judge(string &s, vc &v, int n) {
  bool ch = true;
  rep(i, n) {
    if (v[i] == 'S') {
      if (s[i] == 'o') {
        if (v[(i - 1 + n) % n] != v[(i + 1) % n])
          ch = false;
      } else {
        if (v[(i - 1 + n) % n] == v[(i + 1) % n])
          ch = false;
      }
    } else {
      if (s[i] == 'o') {
        if (v[(i - 1 + n) % n] == v[(i + 1) % n])
          ch = false;
      } else {
        if (v[(i - 1 + n) % n] != v[(i + 1) % n])
          ch = false;
      }
    }
  }
  return ch;
}

int main(void) {

  int n;
  cin >> n;
  string s;
  cin >> s;
  vc v(n);
  rep(i, 4) {
    v.clear();
    if (i == 0) {
      v[0] = 'S';
      v[1] = 'S';
    } else if (i == 1) {
      v[0] = 'S';
      v[1] = 'W';
    } else if (i == 2) {
      v[0] = 'W';
      v[1] = 'S';
    } else if (i == 3) {
      v[0] = 'W';
      v[1] = 'W';
    }
    umeru(s, v, n);
    if (judge(s, v, n)) {
      rep(i, n) { cout << v[i]; }
      cout << endl;
      return 0;
    }
  }
  fin(-1);
}
