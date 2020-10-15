/*
問題文の引用元：https://atcoder.jp/contests/abc018/tasks/abc018_4
D - バレンタインデー
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : あるクラスには女子が N 人、男子が M 人いる。女子には 1 から N
までの出席番号が、男子には 1 から M
までの出席番号が割り当てられている。幸運のキューピットはここから女子 P 人と男子
Q 人からなる、1 つの旅行グループを作る。N 人の女子は合わせて R
個のチョコレートを持っており、チョコレートには 1 から R
までの番号が付けられている。チョコレート i (1 ≦ i ≦ R) は出席番号が x_i
である女子が持っており、旅行中に出席番号が y_i
である男子に渡す予定である。そのため旅行グループに出席番号が x_i
である女子と出席番号が y_i
である男子が両方含まれていた場合に限り渡すことができる。無事にチョコレート i
が渡された場合の幸福度は z_i
である。無事に渡されたチョコレートによる幸福度の合計値として考えられる最大値はいくらか。入力入力は以下の形式で標準入力から与えられる。N
M P Q Rx_1 y_1 z_1x_2 y_2 z_2:x_R y_R z_R1 行目には、5 つの整数 N (1 ≦ N ≦ 18),
M (1 ≦ M ≦ 18), P (1 ≦ P ≦ N), Q (1 ≦ Q ≦ M), R (1 ≦ R ≦ N×M)
が空白区切りで書かれている。これは、クラスに女子が N 人、男子が M
人おり、旅行グループは女子 P 人、男子 Q 人からなり、チョコレートが R
個あることを表す。2 行目から R 行には、チョコレートに関する情報が与えられる。R
行のうち i (1 ≦ i ≦ R) 行目には、3 つの整数 x_i (1 ≦ x_i ≦ N), y_i (1 ≦ y_i ≦
M), z_i (1 ≦ z_i ≦ 10,000) が空白区切りで与えられる。これは、チョコレート i
を出席番号が x_i である女子が持っており、旅行中に出席番号が y_i
である男子に渡す予定であり、チョコレート i の幸福度が z_i であることを表す。1 ≦
i ＜ j ≦ R である整数 i,j に対して、x_i≠x_j または y_i≠y_j
が成り立つ。部分点この問題には部分点が設定されている。N ≦ 8 かつ M ≦ 8
を満たすデータセット 1 に正解した場合は、30
点が与えられる。出力無事に渡されたチョコレートによる幸福度の合計値として考えられる最大値を
1 行に出力せよ。(21:51 表現の変更)出力の末尾に改行を入れること。



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
constexpr double EPS = 1e-9;

ll ans = 0;
vll x(400), y(400), z(400);
ll n, m, p, q, r;
void solve(ll js) {
  int cnt = 0;
  for (int i = 0; i < n; ++i) {
    if (js & (1 << i)) {
      ++cnt;
      // cout<<js <<' '<< (1<<i)<<endl;
    }
  }
  if (cnt != p)
    return;
  // cout<<"cnt:"<<cnt<<endl;
  // cout<<js<<" ";
  vll d(m, 0);
  rep(i, r) {
    if ((1LL << (x[i])) & js) {
      d[y[i]] += z[i];
    }
  }
  Rort(d);
  ll sum = 0;
  rep(i, q) { sum += d[i]; }
  // cout<<sum<<endl;
  // if(sum==26)fin(js);
  chmax(ans, sum);
}

void dfs(string s, ll one) {
  if (s.size() == n) {
    ll binary = 0;
    reverse(all(s));
    rep(i, s.size()) {
      binary *= 2;
      binary += s[i] - '0';
    }
    solve(binary);
    return;
  }
  if (s.size() < n && n - s.size() - 1 >= p - one)
    dfs(s + '0', one);
  if (s.size() < n && one + 1 <= p)
    dfs(s + '1', one + 1);
  return;
}

int main() {
  cin >> n >> m >> p >> q >> r;
  rep(i, r) {
    cin >> x[i] >> y[i] >> z[i];
    x[i]--;
    y[i]--;
  }
  dfs("", 0);
  fin(ans);
}