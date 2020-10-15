/*
問題文の引用元：https://atcoder.jp/contests/arc021/tasks/arc021_2
B - Your Numbers are XORed...Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 小学 N 年生になったばかりの妹は、授業で 排他的論理和
というものについて学びました。排他的論理和とは、例えば非負整数 P と Q
の排他的論理和を R としたとき、以下のように定義されます。R を 2
進数表記したときの 2^k (0 ≦ k，k は整数) の位の値は、P を 2 進数表記したときの
2^k の位の値を p、Q を 2 進数表記したときの 2^k の位の値を q としたとき、p=q
なら 0、p≠q なら 1 となります。具体的には、3 と 5 の排他的論理和の値は、3 の 2
進数表記が 011、5 の 2 進数表記が 101 のため、2 進数表記が 110 となる 6
が排他的論理和の値となります。排他的論理和の素晴らしさを知った妹は、嬉しさの余り、周囲にあった非負整数の値を手当たり次第に排他的論理和された値に書き換えました。ところが、その中には兄が提出する予定の書類が入っていたのです！兄は外出中なので、今のうちに元の数列に復元することにしました。手がかりとして、以下のことが分かっています。書類には
L 個の非負整数 A_1，A_2，…，A_L
が書いてありました。これらの数は今や書類には書き残されていません。妹の目的は、これらの数を知ることです。書類には
L 個の非負整数 B_1，B_2，…，B_L
が書いてあります。これらの数は書類に書き残されているので知ることができます。B_1，B_2，…，B_L
は、以下の定義で表される数です。1 ≦ i ≦ L-1 を満たす整数 i に関して、B_i の値は
A_i と A_{i+1} を排他的論理和した値に等しい。B_L の値は A_L と A_1
を排他的論理和した値に等しい。大変残念なことに場合によっては該当する元の数列が存在しないことや、複数通り存在する場合があります。どうしましょう！困った妹は、今日の占いのラッキーアイテムが辞書であったことを思い出しました。辞書、じしょ、辞書順…最終的に、以下のルールを追加することにしました。該当する元の数列が存在しない場合は、仕方がないので存在しないむねを示す
-1
を答えとします。該当する元の数列が複数存在する場合は、辞書順最小な数列を出力します。ここで、2
つの数列 S_1，S_2，…，S_L と T_1，T_2，…，T_L に関して、 S_1，S_2，…，S_L が
T_1，T_2，…，T_L
より辞書順で小さいというのは、以下の条件を満たす場合とします。ある整数 i (1 ≦ i
≦ L) に関して、1 ≦ j ≦ i-1 を満たすどの整数 j に関しても S_j=T_j が成立し、かつ
S_i＜T_i
が成立する。あなたは妹の代わりに上記の条件を満たす数列を出力するプログラムを作成してください。入力入力は以下の形式で標準入力から与えられる。LB_1B_2:B_L1
行目には、書類に書かれている数字の個数を表す整数 L (2 ≦ L ≦ 10^5)
が与えられる。2 行目から L
行では、書類に残されている非負整数について書かれている。このうち i 行目では整数
B_i (0 ≦ B_i ＜ 2^{31}) が与えられる。出力元の非負整数列 A_1，A_2，…，A_L
として考えられるものが存在する場合は、それらのうち辞書順最小なものを L
行にわたって出力せよ。このうち i 行目には整数 A_i を出力せよ。存在しない場合は
-1 を出力せよ。出力の末尾にも改行を入れること。
// ソースコードの引用元 :
https://atcoder.jp/contests/arc021/submissions/11343096
// 提出ID : 11343096
// 問題ID : arc021_2
// コンテストID : arc021
// ユーザID : xryuseix
// コード長 : 2423
// 実行時間 : 54



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
const int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
const int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
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
inline string getline() {
  string s;
  getline(cin, s);
  return s;
}
inline void yn(const bool b) { b ? fin("yes") : fin("no"); }
inline void Yn(const bool b) { b ? fin("Yes") : fin("No"); }
inline void YN(const bool b) { b ? fin("YES") : fin("NO"); }
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

  int n;
  cin >> n;
  vll v(n);
  rep(i, n) cin >> v[i];
  ll allxor = 0;
  rep(i, n) allxor ^= v[i];
  vll ans;
  rep(i, n) {
    ans.pb(allxor);
    allxor ^= v[i];
  }
  ans.pb(allxor);
  if (ans[0] != *ans.rbegin())
    fin(-1);
  else {
    rep(i, ans.size() - 1) { fin(ans[i]); }
  }
}
