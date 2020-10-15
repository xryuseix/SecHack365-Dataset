/*
問題文の引用元：https://atcoder.jp/contests/arc024/tasks/arc024_2
B - 赤と黒の木Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 :
にミスがあったため、正しいものに差し替えました。「何日後に全ての木の色が…」→「何日目に全ての木の色が…」（22:00）
問題文 :
レッドブラックアイランドには特殊な性質を持った木が生えています。この木は赤色になったり黒色になったりする変わった木です。
この木には複数の個体が 1 箇所に集まって、ある円の円周上に 1
列に並ぶように生えるという特徴があります。            また、この木は同じ色が 1
箇所に集中しないように1日ごとに「バランスをとる」という性質があります。具体的には、自分とその両隣の木の色がすべて同じ色だったら、その木は次の日は異なる色に変わるという性質です。
より形式的に言うと、ある3つの木 A, B,C がこの順に並んでいて、それぞれの色が C_A,
C_B, C_C であるとします。このとき C_A = C_B = C_C =  赤だったならば次の日 C_B
は黒になります。黒と赤が反対の場合も同様です。
しかし、この木は隣の木が次の日どうなるかに関わらず、その日の自分の状況だけを見て「バランスをとる」ことをします。そのため
1 日たっても同じ色の木が 3 つ連続で並ぶという事もあり得ます(下の
// ソースコードの引用元 :
https://atcoder.jp/contests/arc024/submissions/12234028
// 提出ID : 12234028
// 問題ID : arc024_2
// コンテストID : arc024
// ユーザID : xryuseix
// コード長 : 2832
// 実行時間 : 20



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
typedef vector<pair<ll, ll>> vpll;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef vector<vector<string>> vvs;
typedef vector<vector<ll>> vvll;
typedef map<int, int> mii;
typedef set<int> si;
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
#define itn int
// #define endl '\n';
#define fi first
#define se second
#define NONVOID [[nodiscard]]
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
const ll LLINF = 1LL << 60;
const ll MOD = 1000000007;
const double EPS = 1e-9;

int main() {

  int n;
  cin >> n;
  vi v(n), w;
  ;
  rep(i, n) cin >> v[i];
  int maxlen = 0;
  bool allsame = 1;
  for (int i = 1; i < n; i++)
    allsame &= v[0] == v[i];
  if (allsame) {
    fin(-1);
    return 0;
  }
  w = v;
  rep(i, v.size()) w.pb(v[i]);
  v = w;
  for (int i = 0; i < v.size(); i++) {
    int j = i;
    while (j < 2 * n && v[j] == v[i]) {
      j++;
    }
    chmax(maxlen, j - i);
    j--;
    i = j;
  }
  fin((maxlen - 1) / 2 + 1);
}
