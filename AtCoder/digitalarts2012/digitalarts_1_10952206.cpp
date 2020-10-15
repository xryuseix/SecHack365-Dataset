/*
問題文の引用元：https://atcoder.jp/contests/digitalarts2012/tasks/digitalarts_1
A - C-FilterEditorial
Time Limit : 2 sec / Memory Limit : 64 MB
問題文 :
セキュリティに興味がある高橋君は、デジタルアーツ株式会社に就職したい青年です。彼は、面接で自分をアピールするために、得意なプログラミングでフィルタリングソフト「C-Filter」を作ろうと考えています。「C-Filter」は、与えられた文字列
s
に、あらかじめ登録しておいた「NGワード」と一致する文字列が存在する場合、その文字列の長さと等しい数の
*に置き換えて出力するソフトウェアです。この文字列を置き換える処理をフィルタリングと呼びます。「NGワード」とは、半角英小文字と*から構成されます。*はすべての半角英小文字
1 文字と一致します。例えば myonmyon
は、NGワードmyo*myonと一致します。ただし、NGワードは単語ごとに適用されるため、myo
myon はNGワード
myo*myonとは一致しません。また、NGワードはある単語に対して完全に一致する必要があります。例えば、abcdeは、NGワードabcやbcd、cdeに一致しません。文字列
s
と、NGワードが与えられるので、C-Filterの出力する文字列を答えてください。入力入力は以下の形式で標準入力から与えられる。sNt_{1}::t_{N}入力は
N+2 行からなる。1 行目には 1 文字以上 1,000 文字以下の文字列 s が与えられる。s
はフィルタリングする対象の文字列を半角スペースで区切って繋げた文字列である。2
行目にはNGワードの個数を表す整数 N(0≦N≦50) が与えられる。3 行目から N+2
行目までNGワードを表す文字列 t_{i}(1≦i≦N)が与えられる。文字列 t_{i}
は半角英小文字と * から構成される。文字列 t_{i} の長さは 1 文字以上、 20
文字以下である。文字列 t_{i} に含まれる *
は、半角スペースを除くすべての半角英小文字 1
文字をフィルタリングの対象とします。出力入力された文字列 s
をC-Filterでフィルタリングした結果を 1
行で出力せよ。なお、最後には改行を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/digitalarts2012/submissions/10952206
// 提出ID : 10952206
// 問題ID : digitalarts_1
// コンテストID : digitalarts2012
// ユーザID : xryuseix
// コード長 : 2919
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
#define STLL(s) strtoll(s.c_str(), NULL, 10)
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
#define MATHPI acos(-1)
#define itn int;
#define endl '\n';
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

bool isnum(string s) {
  bool res = 1;
  rep(i, s.size()) {
    if (s[i] < '0' || s[i] > '9')
      res = 0;
  }
  return res;
}

bool ch(string &t, string &v) {
  // cout<<t<<" "<<v<<endl;
  if (t.size() != v.size())
    return false;
  bool res = 1;
  rep(i, t.size()) {
    if (t[i] == v[i])
      continue;
    else {
      if (t[i] == '*')
        continue;
      else
        res = 0;
    }
  }
  // cout<<res<<endl;
  return res;
}

int main() {
  vs v;
  int n;
  while (1) {
    string s;
    cin >> s;
    if (isnum(s)) {
      n = STLL(s);
      break;
    } else {
      v.pb(s);
    }
  }
  vs t(n);
  rep(i, n) cin >> t[i];
  vb b(v.size(), false);
  rep(i, n) {
    rep(j, v.size()) {
      if (b[j])
        continue;
      b[j] = ch(t[i], v[j]);
    }
  }
  rep(i, v.size()) {
    if (b[i]) {
      rep(j, v[i].size()) cout << '*';
      if (i != v.size() - 1)
        cout << ' ';
    } else {
      cout << v[i];
      if (i != v.size() - 1)
        cout << ' ';
    }
  }
  cout << endl;
}
