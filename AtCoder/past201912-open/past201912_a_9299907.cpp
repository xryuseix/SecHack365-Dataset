/*
問題文の引用元：https://atcoder.jp/contests/past201912-open/tasks/past201912_a
A - Is It a Number?Editorial
Time Limit : 2 sec / Memory Limit : 1024
MB注意この問題に対する言及は、2019年12月29日 05:00 JST
まで禁止されています。言及がなされた場合、賠償が請求される可能性があります。試験後に総合得点や認定級を公表するのは構いませんが、どの問題が解けたかなどの情報は発信しないようにお願いします。
問題文 : あなたは、3 桁の整数を入力として受け取り、それを 2
倍して出力するプログラムの作成を頼まれた。ところが、どうやらプログラムに入力される文字列
S
に英小文字が紛れ込むことがあるようだ。そこで、その場合はエラーを出力することにした。S
が 3 桁の整数である場合 (0 で始まる場合を含む) はその 2
倍の値を出力し、そうでなければ error と出力するプログラムを作成せよ。
制約S は長さ 3 の文字列である。S
の各文字は数字または英小文字である。入力入力は以下の形式で標準入力から与えられる。S出力
問題文 : で指示された通りに整数または文字列 error を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/past201912-open/submissions/9299907
// 提出ID : 9299907
// 問題ID : past201912_a
// コンテストID : past201912-open
// ユーザID : xryuseix
// コード長 : 1875
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

int main(void) {

  string s;
  cin >> s;
  if (s.size() == 3) {
    if ((s[0] >= '0' && s[0] <= '9') && (s[1] >= '0' && s[1] <= '9') &&
        (s[2] >= '0' && s[2] <= '9')) {
      fin(STI(s) * 2);
    } else {
      fin("error");
    }
  } else
    fin("error");
}
