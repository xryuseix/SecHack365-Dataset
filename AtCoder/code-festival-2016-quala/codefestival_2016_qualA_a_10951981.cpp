/*
問題文の引用元：https://atcoder.jp/contests/code-festival-2016-quala/tasks/codefestival_2016_qualA_a
A - CODEFESTIVAL 2016Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 100 点
問題文 : このコンテストの名前は CODE FESTIVAL です。しかし、高橋君はいつも
CODEFESTIVAL と書き間違えてしまいます。つまり、CODE と FESTIVAL
の間の半角スペースを省いてしまいます。そこで高橋君は、省いてしまった半角スペースを復元するプログラムを作ることにしました。長さ
12 の文字列 s が与えられます。s の前半 4 文字と後半 8 文字の間に半角スペースを 1
つ挿入し、出力してください。
制約s は長さ 12 である。s
は英大文字のみからなる。入力入力は以下の形式で標準入力から与えられる。s出力s
の前半 4 文字と後半 8 文字の間に半角スペースを 1
つ挿入し、出力せよ。出力の末尾には改行を入れること。
// ソースコードの引用元 :
https://atcoder.jp/contests/code-festival-2016-quala/submissions/10951981
// 提出ID : 10951981
// 問題ID : codefestival_2016_qualA_a
// コンテストID : code-festival-2016-quala
// ユーザID : xryuseix
// コード長 : 1910
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

int main() {
  string s;
  cin >> s;
  cout << s.substr(0, 4) + " " + s.substr(4) << endl;
}
