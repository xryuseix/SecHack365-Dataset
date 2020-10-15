/*
問題文の引用元：https://atcoder.jp/contests/abc042/tasks/arc058_a
C - こだわり者いろはちゃん / Iroha's Obsession
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 300 点
問題文 : いろはちゃんはこだわりもので、嫌いな数字が K 個あり、それぞれ D_1, D_2,
..., D_K です。いろはちゃんはお店でお買い物をしていて、 N
円の品物を買おうとしています。もちろん、この品物は N
円以上のお金を支払えば買うことができます。しかし、先ほど述べたようにいろはちゃんは強いこだわりがあるので、自分がお店に支払う金額の
10
進表記にいろはちゃんの嫌いな数字が出現しないような最も少ない金額を支払おうとします。いろはちゃんが支払う金額を求めてください。
制約 1 ≦ N < 10000 1 ≦ K < 10 0 ≦ D_1 < D_2 < … < D_K≦9\{D_1,D_2,...,D_K\} ≠
\{1,2,3,4,5,6,7,8,9\}入力入力は以下の形式で標準入力から与えられる。N KD_1 D_2 …
D_K出力いろはちゃんが支払う金額を出力せよ。



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
  }
};
const ll MOD = 1000000007;
const double EPS = 1e-9;
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;

int ans = INF;
vi v;

void rec(int n, int t) {
  // cout<<"rec"<<t<<endl;
  rep(i, v.size()) {
    if (n <= t * 10 + v[i]) {
      ans = min(ans, t * 10 + v[i]);
    } else {
      if (t == 0 && v[i] == 0)
        continue;
      rec(n, t * 10 + v[i]);
    }
  }
  return;
}

int main(void) {

  int n, k;
  cin >> n >> k;
  set<int> s;
  rep(i, k) {
    int d;
    cin >> d;
    s.insert(d);
  }
  rep(i, 10) {
    if (!s.count(i))
      v.push_back(i);
  }
  rec(n, 0);
  fin(ans);
}
