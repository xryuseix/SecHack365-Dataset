/*
問題文の引用元：https://atcoder.jp/contests/abc146/tasks/abc146_f
F - SugorokuEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 600 点
問題文 : 高橋君は双六で遊んでいます。この双六には 0 から N までの番号がついた N
+ 1 個のマスがあります。高橋君はマス 0 からスタートし、ゴールするにはマス N
にちょうど止まらなければなりません。この双六では、1 から M までの M
種類の目が出るルーレットを使います。各手番で、高橋君はルーレットを回して出た目の数だけ進みます。この結果マス
N
を越えて進むことになる場合、ゲームオーバーとなります。また、いくつかのマスは「ゲームオーバーマス」であり、それらのマスに止まってもゲームオーバーとなります。マスの情報は長さ
N + 1 の文字列 S で与えられます。各 i (0 \leq i \leq N) について、S[i] = 1
のときマス i はゲームオーバーマスであり、S[i] = 0 のときマス i
はゲームオーバーマスではありません。高橋君がゲームオーバーとならずに最短手数でゴールするときの出目を順に答えてください。そのような目の出方が複数存在するときは、そのうち出目の列が辞書順で最小であるものを出力してください。ゲームオーバーとならずにゴールすることが不可能である場合は、
-1 を出力してください。
制約1 ≤ N ≤ 10^51 ≤ M ≤ 10^5|S| = N + 1S は0と1から成るS[0] = 0S[N] =
0入力入力は以下の形式で標準入力から与えられる。N
MS出力ゴールすることが可能である場合、そのような最短の出目の列のうち辞書順で最小のものを出力せよ。ゴールすることが不可能である場合、-1
を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc146/submissions/8635967
// 提出ID : 8635967
// 問題ID : abc146_f
// コンテストID : abc146
// ユーザID : xryuseix
// コード長 : 3132
// 実行時間 : 13



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
const ll MOD = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 62;

bool isgoal(vi &v, vi &w, int m) {
  for (int i = 0; i < v.size(); i++) {
    if (w[i] - v[i] + 1 >= m) {
      return false;
    }
  }
  return true;
}

int main(void) {

  int n, m;
  cin >> n >> m;
  string s;
  vi v, w;

  cin >> s;
  reverse(all(s));
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '1') {
      int maxpos = i;
      v.push_back(i);
      while (s[i + 1] == '1') {
        maxpos = i + 1;
        i++;
      }
      w.push_back(maxpos);
    }
  }
  if (!isgoal(v, w, m)) {
    fin(-1);
    return 0;
  }
  int pos = 0;
  vi pass;
  while (pos != n) {
    auto nextpos = lower_bound(all(v), pos + m);
    if (nextpos == v.end()) {
    } else if (*nextpos != pos + m && nextpos != v.begin()) {
      nextpos--;
    }
    // cout<<m+pos<<" "<<*nextpos<<"
    // "<<*(abs(distance(nextpos,v.begin()))+w.begin())<<endl;
    // cout<<distance(nextpos,v.begin())<<endl;
    if (m + pos >= n) {
      // cout<<"A"<<endl;
      pass.push_back(n - pos);
      pos = n;
    } else if (nextpos != v.end() && m + pos >= *nextpos &&
               *(abs(distance(nextpos, v.begin())) + w.begin()) >= m + pos) {
      // cout<<"B"<<endl;
      pass.push_back(*nextpos - 1 - pos);
      pos = *nextpos - 1;
    } else {
      // cout<<"C"<<endl;
      pass.push_back(m);
      pos += m;
    }
  }
  reverse(all(pass));
  rep(i, pass.size()) {
    if (i == 0)
      cout << pass[i];
    else
      cout << " " << pass[i];
  }
  cout << endl;
}
