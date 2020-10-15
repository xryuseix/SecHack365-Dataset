/*
問題文の引用元：https://atcoder.jp/contests/code-festival-2016-qualb/tasks/codefestival_2016_qualB_b
B - Qualification simulatorEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 : CODE FESTIVAL
2016の予選にはN人が参加しました。参加者は、国内の学生であるか、海外の学生であるか、どちらでもないかのどれかです。予選は国内または海外の学生のみが通過することができ、上位の学生から順に、以下の条件を満たすときに通過します。学生でない参加者は予選を通過できません。国内の学生は、現在予選の通過が確定した参加者がA+B人に満たなければ、予選を通過する海外の学生は、現在予選の通過が確定した参加者がA+B人に満たず、さらに海外の学生の中での順位がB位以内なら、予選を通過する参加者の情報を表す文字列Sが与えられます。Sのi文字目がaのとき予選でi位の参加者が国内の学生であることを、Sのi文字目がbのとき予選でi位の参加者が海外の学生であることを、Sのi文字目がcのとき予選でi位の参加者がそのどちらでもないことを表しています。すべての参加者について、上位から順に、予選を通過した場合はYes、そうでない場合はNoを出力するプログラムを作成してください。
制約1 ≦ N,A,B ≦ 100000A+B ≦ NS の長さはNである。S
は文字aとbとcのみからなる。入力入力は以下の形式で標準入力から与えられる。N A
BS出力N
行出力せよ。i行目には、i位の参加者が予選を通過した場合Yes、そうでない場合Noを出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/code-festival-2016-qualb/submissions/8016865
// 提出ID : 8016865
// 問題ID : codefestival_2016_qualB_b
// コンテストID : code-festival-2016-qualb
// ユーザID : xryuseix
// コード長 : 1924
// 実行時間 : 156



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
  int n, a, b;
  cin >> n >> a >> b;
  string s;
  cin >> s;
  int pass = 0, rank = 0;
  int A = 0, B = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'a') {
      A++;
      if (pass < a + b) {
        pass++;
        fin("Yes");
      } else {
        fin("No");
      }
    } else if (s[i] == 'b') {
      B++;
      rank++;
      if (pass < a + b && B <= b) {
        pass++;
        fin("Yes");
      } else {
        fin("No");
      }
    } else {
      fin("No");
    }
  }
}
