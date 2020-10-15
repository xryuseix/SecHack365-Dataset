/*
問題文の引用元：https://atcoder.jp/contests/tenka1-2015-qualb/tasks/tenka1_2015_qualB_b
B - 天下一リテラルEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 :       スクリプト言語 hnw には 3
つの型が存在します。整数型、辞書型、集合型です。      整数型のリテラルは、 0
以上 10^6 以下の整数を十進数で表記したものとして表現できます。
辞書型のリテラルは、“key” と “value” を : でつなげたものを { と }
の間にカンマ区切りで並べたものとして表現できます。
空でない集合型のリテラルは、要素を{と}の間にカンマ区切りで並べたものとして表現できます。
辞書型の “key” と “value”
および集合型の要素は、整数型、辞書型、集合型のいずれかです。
スクリプト言語 hnw のリテラルは上記のものですべてであり、以下のEBNFに従います。
ただし、INTEGER は整数型、SET は集合型、DICT は辞書型を表します。
DICT = "{" , EXPR , ":" , EXPR , { "," , EXPR , ":" , EXPR } , "}" | "{}" ;SET
= "{" , EXPR , { "," , EXPR } , "}" ;EXPR = DICT | SET | INTEGER ;
集合型か辞書型のリテラルが与えられます。型がどちらなのかを判別してください。
入力        入力は以下の形式で標準入力から与えられる。        S
問題文 : 中の EBNF に沿った集合型あるいは辞書型の値を示す文字列 S が 1
行で与えられる。        文字列 S の長さは 50000 以下である。
入力に空白は含まれない。                            出力
値が集合型の場合は set を、辞書型の場合は dict を 1 行に出力しなさい。
出力の末尾には改行を入れること。
配点
この問題には部分点が設定されていない。全てのテストケースに正解した場合は、 40
点が与えられる。
// ソースコードの引用元 :
https://atcoder.jp/contests/tenka1-2015-qualb/submissions/13257694
// 提出ID : 13257694
// 問題ID : tenka1_2015_qualB_b
// コンテストID : tenka1-2015-qualb
// ユーザID : xryuseix
// コード長 : 2928
// 実行時間 : 3



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
#include <random>
#include <iomanip>
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
typedef vector<pair<ll, ll>> vpll;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef vector<vector<string>> vvs;
typedef vector<vector<ll>> vvll;
typedef map<int, int> mii;
typedef set<int> si;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
#define arep(i, v) for (auto i : v)
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
#define itn int
// #define endl '\n';
#define fi first
#define se second
#define NONVOID [[nodiscard]]
constexpr int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
constexpr int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
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
template <class T> inline void dump(T &v) {
  irep(i, v) { cout << *i << ((i == --v.end()) ? '\n' : ' '); }
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
constexpr ll LLINF = 1LL << 60;
constexpr ll MOD = 1000000007;
constexpr double EPS = 1e-9;

int main() {

  string s;
  cin >> s;
  if (s == "{}") {
    fin("dict");
    return 0;
  }
  int sum = 0;

  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '{')
      sum++;
    else if (s[i] == '}')
      sum--;
    else if (sum == 1 && s[i] == ':') {
      fin("dict");
      return 0;
    }
  }
  fin("set");
}

// DICT = "{" , EXPR , ":" , EXPR , { "," , EXPR , ":" , EXPR } , "}" | "{}" ;
// SET  = "{" , EXPR , { "," , EXPR } , "}" ;
// EXPR = DICT | SET | INTEGER ;
// {{111}:111{1,1,1}}
// {{1}:{1}}