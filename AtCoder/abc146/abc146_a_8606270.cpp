/*
問題文の引用元：https://atcoder.jp/contests/abc146/tasks/abc146_a
A - Can't Wait for HolidayEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 100 点
問題文 : 今日の曜日を表す文字列 S が与えられます。S は
SUN,MON,TUE,WED,THU,FRI,SAT
のいずれかであり、それぞれ日曜日、月曜日、火曜日、水曜日、木曜日、金曜日、土曜日を表します。次の日曜日
(あす以降) が何日後か求めてください。
制約S は SUN,MON,TUE,WED,THU,FRI,SAT
のいずれか入力入力は以下の形式で標準入力から与えられる。S出力次の日曜日が何日後か出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc146/submissions/8606270
// 提出ID : 8606270
// 問題ID : abc146_a
// コンテストID : abc146
// ユーザID : xryuseix
// コード長 : 1805
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
const ll MOD = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 62;

int main(void) {

  string s;
  cin >> s;
  if (s == "SUN")
    fin(7);
  else if (s == "SAT")
    fin(1);
  else if (s == "FRI")
    fin(2);
  else if (s == "THU")
    fin(3);
  else if (s == "WED")
    fin(4);
  else if (s == "TUE")
    fin(5);
  else if (s == "MON")
    fin(6);
}
