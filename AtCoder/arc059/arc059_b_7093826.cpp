/*
問題文の引用元：https://atcoder.jp/contests/arc059/tasks/arc059_b
D - UnbalancedEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 400 点
問題文 : 文字列 t について、t の長さが 2 以上であり、かつ t
の中の文字のうち過半数が同じ文字であるとき、t
をアンバランスであると呼ぶことにします。例えば、voodoo や melee
はアンバランスであり、noon や a
はアンバランスではありません。小文字のアルファベットからなる文字列 s
が与えられます。s にアンバランスな (連続する)
部分文字列が存在するか判定してください。存在する場合は、s
の中でそのような部分文字列が存在する位置を一つ示してください。
制約2 ≦ |s| ≦ 10^5s は小文字のアルファベットのみからなる。部分点2 ≦ |s| ≦ 100
を満たすデータセットに正解した場合は、200
点が与えられる。入力入力は以下の形式で標準入力から与えられる。s出力s
にアンバランスな部分文字列が存在しない場合は、-1 -1 と出力せよ。s
にアンバランスな部分文字列が存在する場合は、そのような部分文字列の一つを s_a
s_{a+1} ... s_{b} (1 ≦ a < b ≦ |s|) として、a b
と出力せよ。そのような部分文字列が複数存在する場合は、いずれも正解とみなされる。
// ソースコードの引用元 : https://atcoder.jp/contests/arc059/submissions/7093826
// 提出ID : 7093826
// 問題ID : arc059_b
// コンテストID : arc059
// ユーザID : xryuseix
// コード長 : 1877
// 実行時間 : 2



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
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
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

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  string s;
  cin >> s;
  if (s.length() == 2) {
    if (s[0] == s[1])
      cout << "1 2" << endl;
    else
      cout << "-1 -1" << endl;
    return 0;
  }
  for (int i = 0; i < s.length() - 2; i++) {
    if (s[i + 0] == s[i + 1] || s[i + 1] == s[i + 2] || s[i + 0] == s[i + 2]) {
      cout << i + 1 << " " << i + 3 << endl;
      return 0;
    }
  }
  cout << "-1 -1" << endl;

  //////////////////////////////////////////////////////
  return 0;
}
