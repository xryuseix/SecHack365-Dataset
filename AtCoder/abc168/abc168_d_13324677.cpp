/*
問題文の引用元：https://atcoder.jp/contests/abc168/tasks/abc168_d
D - .. (Double Dots)
Time Limit : 2 sec / Memory Limit : 1024 MB
配点: 400 点
問題文 : あるところに、洞窟があります。洞窟には N 個の部屋と M
本の通路があり、部屋には 1 から N の、通路には 1 から M
の番号がついています。通路 i は部屋 A_i と部屋 B_i
を双方向につないでいます。どの 2
部屋間も、通路をいくつか通って行き来できます。部屋 1
は洞窟の入り口がある特別な部屋です。洞窟の中は薄暗いので、部屋 1 以外の各部屋に
1
つずつ道しるべを設けることにしました。各部屋の道しるべは、その部屋と通路で直接つながっている部屋の
1 つを指すように置きます。洞窟の中は危険なので、部屋 1
以外のどの部屋についても以下の条件を満たすことが目標です。その部屋から出発し、「いまいる部屋にある道しるべを見て、それが指す部屋に移動する」ことを繰り返すと、部屋
1
に最小の移動回数でたどり着く。目標を達成できる道しるべの配置が存在するか判定し、存在するならばそのような配置を
1 つ出力してください。
制約入力はすべて整数2 \leq N \leq 10^51 \leq M \leq 2 \times 10^51 \leq A_i, B_i
\leq N\ (1 \leq i \leq M)A_i \neq B_i\ (1 \leq i \leq M)どの 2
部屋間も、通路をいくつか通って行き来できる入力入力は以下の形式で標準入力から与えられる。N
MA_1 B_1:A_M B_M出力目標を達成できる道しるべの配置が存在しなければ No
を出力せよ。存在する場合、N 行出力せよ。1 行目には Yes を、i\ (2 \leq i \leq N)
行目には部屋 i の道しるべが指す部屋の番号を出力せよ。



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

vi ans(101010, -1);
// 各座標に格納したい情報を構造体にする
// 今回はX座標,Y座標,深さ(距離)を記述している

queue<int> q;
void bfs(vector<vector<int>> v, int n) {
  while (!q.empty()) {
    int now = q.front();
    q.pop();
    // cout<<"now: "<<now<<endl;
    for (int i = 0; i < v[now].size(); i++) {
      int next = v[now][i];
      // cout<<"next: "<<next<<endl;

      // 次に探索する場所が既に探索済みの場合
      if (ans[next] >= 0)
        continue;
      // cout<<"ch"<<endl;
      ans[next] = now;
      q.push(next);
    }
  }
}

int main() {

  int n, m;
  cin >> n >> m;
  vvi v(n);
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    v[a].pb(b);
    v[b].pb(a);
  }
  q.push(0);
  ans[0] = 0;
  bfs(v, n);
  fin("Yes");
  for (int i = 1; i < n; i++) {
    fin(ans[i] + 1);
  }
}
