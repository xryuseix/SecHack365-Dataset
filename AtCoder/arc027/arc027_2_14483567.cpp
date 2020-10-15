/*
問題文の引用元：https://atcoder.jp/contests/arc027/tasks/arc027_2
B - 大事な数なのでZ回書きまLた。
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 私は 10 進数のある正の整数を覚えておくように言われました。その数字は N
桁で、先頭の数字は 0 ではないです。大事な数なのでメモ帳に 2
回書きました。ところで私は文字を書くのが下手です。後でメモ帳を読み返すと、メモ帳に書いた数字のうちいくつかについて、元はどの数字だったかわからなくなってしまいました。元の数字がわからない文字は最大
26 文字で、以下では A から Z
までの大文字アルファベットで表すことにします。これらの文字は、元は 0 から 9
までの 1
桁の数字のいずれかです。メモ帳に書いた文字には、同じアルファベットが複数出てくるかもしれません。同じアルファベットが複数回出てきた場合、それらのアルファベットについてはいずれも元は同じ数字となります。1
回目に書いた文字列と 2
回目に書いた文字列に共通して登場するアルファベットが存在する場合もありますが、その場合でも、それらのアルファベットについて元は同じ数字となります。また、異なる種類のアルファベットの元の数字が同じ数字である場合も考えられます。例えば、メモ帳の
1 回目の文字列が 1XYX であった場合、覚えておくように言われた数字としては 1101 (X
= 1, Y = 0) や 1111 (X = 1, Y = 1), 1848 (X = 8, Y = 4)
などが考えれますが、一方で例えば 1132 (Y = 3) は X に対する元の数字が 1 と 2
の複数種類存在するので、覚えておくように言われた数字としては考えられません。メモ帳に書いた
2
つの文字列が与えられるので、覚えておくように言われた数字として全部で何通り考えられるかを求めるプログラムを作成してください。入力入力は以下の形式で標準入力から与えられる。Ns_1s_21
行目には、覚えておくように言われた整数の桁数 N (1 ≦ N ≦ 18) が書かれている。2
行目には、1 回目にメモ帳に書いた文字列 s_1 が与えられる。s_1 の長さはちょうど N
文字で、半角の大文字アルファベットと数字のみで構成されている。3 行目には、2
回目にメモ帳に書いた文字列 s_2 が与えられる。s_2 の長さはちょうど N
文字で、半角の大文字アルファベットと数字のみで構成されている。採点で用いられるすべての入力に関して、覚えておくように言われた整数として考えられる整数は少なくとも
1 つは存在する。つまり、どのようにアルファベットに数字を割り当てたとしても、s_1
と s_2 の最上位桁が 0 になってしまうか、s_1 と s_2
が異なる数字を表してしまう、ということはないものとして良い。部分点この問題には部分点が設定されている。N
≦ 6 を満たすデータセット 1 に正解した場合は、30 点が与えられる。追加
制約のないデータセット 2 に正解した場合は、上記とは別に 70
点が与えられる。出力覚えておくように言われた整数として考えれられるものの個数を 1
行で出力せよ。出力の末尾にも改行を入れること。なお、この問題での出力は 32-bit
整数に収まらない場合があることに注意せよ。



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
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef vector<vc> vvc;
typedef vector<vs> vvs;
typedef vector<vll> vvll;
typedef map<int, int> mii;
typedef set<int> si;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
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
#define fi first
#define se second
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
constexpr ld EPS = 1e-11;

int main() {

  int n;
  cin >> n;
  vs s(2);
  cin >> s[0] >> s[1];
  rep(j, 2) rep(i, n) {
    if (s[j][i] >= 'A' && s[j][i] <= 'Z') {
      char c = s[1 - j][i];
      if (c <= '9' && c >= '0')
        continue;
      rep(k, 2) {
        rep(l, n) {
          if (s[k][l] == c)
            s[k][l] = s[j][i];
        }
      }
    }
  }
  rep(j, 2) rep(i, n) {
    if (s[j][i] >= '0' && s[j][i] <= '9') {
      char c = s[1 - j][i];
      if (c <= '9' && c >= '0')
        continue;
      rep(k, 2) {
        rep(l, n) {
          if (s[k][l] == c)
            s[k][l] = s[j][i];
        }
      }
    }
  }
  // dump(s);
  ll ans = 1;
  int al[26] = {0};
  rep(i, n) {
    if (s[0][i] <= '9' && s[0][i] >= '0')
      continue;
    if (!al[s[0][i] - 'A']) {
      al[s[0][i] - 'A'] = 1;
      if (i)
        ans *= 10;
      else
        ans *= 9;
    }
  }
  fin(ans);
}
