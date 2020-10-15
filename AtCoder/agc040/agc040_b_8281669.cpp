/*
問題文の引用元：https://atcoder.jp/contests/agc040/tasks/agc040_b
B - Two ContestsEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 600 点
問題文 : 1 から 10^9 までの番号のついた 10^9
人が参加する大会があります．この大会では，2
回のコンテストが行われます．コンテストで出題する問題として，1 から N
までの番号のついた N 問が準備されています．問題 i が出題された場合，番号が L_i
以上 R_i
以下の参加者は全員正解し，逆にそれ以外の参加者は誰も解けません．これらの N
問を，2 回のコンテストに分けて出題します．どの問題も，ちょうど 1
回のコンテストで出題されなくてはいけません．また，どちらのコンテストも，少なくとも
1
問以上の問題が出題される必要があります．それぞれのコンテストの楽しさは，そのコンテストの全ての問題を解く参加者の人数です．2
回のコンテストの楽しさの和としてありうる最大の値を求めてください．
制約2 \leq N \leq 10^51 \leq L_i \leq R_i \leq
10^9入力される値はすべて整数である．入力入力は以下の形式で標準入力から与えられる．NL_1
R_1L_2 R_2\vdotsL_N R_N出力2
回のコンテストの楽しさの和としてありうる最大の値を出力せよ．
// ソースコードの引用元 : https://atcoder.jp/contests/agc040/submissions/8281669
// 提出ID : 8281669
// 問題ID : agc040_b
// コンテストID : agc040
// ユーザID : xryuseix
// コード長 : 2811
// 実行時間 : 94



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

pair<ll, ll> insec(pair<ll, ll> a, pair<ll, ll> b) {
  if (a.first > a.second || b.first > b.second) {
    return mp(-1, -2);
  }
  if (a.first > b.first) {
    swap(a, b);
  }
  if (a.second < b.first) {
    return mp(-1, -2);
  }
  if (a.second >= b.second) {
    return b;
  } else {
    return mp(b.first, a.second);
  }
}
ll calc(pair<ll, ll> a, pair<ll, ll> b) {
  ll suma = max(a.second - a.first + 1, (ll)0);
  ll sumb = max(b.second - b.first + 1, (ll)0);
  return suma + sumb;
}

int main(void) {

  int n;
  cin >> n;
  vector<pair<ll, ll>> v(n);
  rep(i, n) {
    ll l, r;
    cin >> l >> r;
    v[i] = mp(l, r);
  }
  Sort(v);
  ll ans = 0;
  vector<pair<ll, ll>> up(n), down(n);
  {
    up[0] = v[0];
    for (int i = 1; i < n; i++) {
      pair<ll, ll> tmp;
      tmp = insec(v[i], up[i - 1]);
      up[i] = tmp;
    }
    down[n - 1] = v[n - 1];
    for (int i = n - 2; i >= 0; i--) {
      pair<ll, ll> tmp;
      tmp = insec(v[i], down[i + 1]);
      down[i] = tmp;
    }
    for (int i = 0; i < n - 1; i++) {
      ans = max(ans, calc(up[i], down[i + 1]));
    }
    // for(int i=0;i<n;i++){
    // 	cout<<up[i].first<<":"<<up[i].second<<"
    // "<<down[i].first<<":"<<down[i].second<<endl;
    // }
  }
  for (int i = 1; i < n - 1; i++) {
    ll a = v[i].second - v[i].first + 1;
    pair<ll, ll> tmp = insec(up[i - 1], down[i + 1]);
    ans = max(ans, a + max(tmp.second - tmp.first + 1, (ll)0));
  }

  fin(ans);
}
