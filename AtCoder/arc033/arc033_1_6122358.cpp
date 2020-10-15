/*
問題文の引用元：https://atcoder.jp/contests/arc033/tasks/arc033_1
A - 隠れた言葉Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 :
高橋君は、隠れた言葉を探す遊びが好きです。例えば、「じきゅうりょく」の中には「きゅうり」という言葉が隠れています。高橋君は今、長さ
N
の文字列の中に隠れた言葉を探そうとしています。隠れた言葉の候補を列挙するためにまず、この文字列の「部分文字列」の個数を計算してみることにしました。文字列
S の「部分文字列」とは、文字列 S
に含まれるある区間を取り出した文字列のことです。例えば、「すぬけ」の部分文字列は「す」「ぬ」「け」「すぬ」「ぬけ」「すぬけ」の
6
つです。「すけ」や「ぬす」などは部分文字列ではないことに注意してください。また、文字列
S には同じ文字が 2
回以上現れないことが分かっています。そのため「しょうぼうしょ」における「しょ」のように、異なる場所から取り出した文字列が一致することはありません。入力入力は以下の形式で標準入力から与えられる。N1
行目には、文字列の長さを表す整数 N (1 ≦ N ≦ 1000) が与えられる。出力長さ N
の文字列の「部分文字列」の個数を 1 行に出力せよ。出力の末尾に改行を入れること。
// ソースコードの引用元 : https://atcoder.jp/contests/arc033/submissions/6122358
// 提出ID : 6122358
// 問題ID : arc033_1
// コンテストID : arc033
// ユーザID : xryuseix
// コード長 : 1470
// 実行時間 : 2



*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cctype>
#include <climits>
#include <bitset>
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<pair<int, int>> vpii;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef vector<vector<string>> vvs;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define fin(ans) cout << (ans) << endl
#define P 1000000007
#define STI(s) atoi(s.c_str()) // string to int
#define mp(p, q) make_pair(p, q)
#define Sort(a) sort(a.begin(), a.end())
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
const int INF = INT_MAX;
const long long LLINF = 1LL << 60;
// g++ -std=c++1z temp.cpp
//./a.out

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  int n;
  cin >> n;
  int ans = 0;
  for (int i = 1; i <= n; i++)
    ans += i;
  cout << ans << endl;

  //////////////////////////////////////////////////////
  return 0;
}
