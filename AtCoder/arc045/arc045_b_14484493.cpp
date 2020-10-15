/*
問題文の引用元：https://atcoder.jp/contests/arc045/tasks/arc045_b
B - ドキドキデート大作戦高橋君
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 高橋君の通っている学校で大掃除が行われることになりました．学校には N
個の教室があり，各教室は 1 から N
まで順番に番号付けられており，左から右に並んでいます．高橋君の学校には高橋君を含め
M 人の生徒がおり，掃除すべき連続した教室の区間(掃除区間と呼ぶ)は M
個既に決まっています．しかし，それらの掃除区間を誰が担当するかは決まっていません．異なる生徒には異なる掃除区間が割り当てられ，割り当てられた生徒はそれに含まれる全ての教室を掃除しなければなりません．1
つの教室が複数の掃除区間に含まれることがあります．高橋君は大掃除の日に女の子とのデートの約束をしていることに気づきました．デートをサボってしまうと何が起こるか分からないので大掃除をサボることに決めました．前述の通りいくつかの教室については複数の掃除区間に含まれていることがあるので，高橋君の担当分をサボっても全ての教室を誰かが掃除してくれさえすれば，サボったことがバレないことに気づきました．掃除されていない教室があった場合には，サボったことがバレます．あなたの仕事は高橋君のために，サボってもバレない掃除区間を全て教えてあげることです．なお，この学校の生徒は高橋君を除きみんな真面目なので，高橋君以外がサボることは無いと仮定してください．入力入力は以下の形式で標準入力から与えられる．N
Ms_1 t_1s_2 t_2:s_M t_M1 行目には，学校の教室の数を表す整数 N (1 ≦ N ≦ 300,000)
と生徒の数を表す整数 M(1 ≦ M ≦ 100,000) が与えられる．続く M 行には，M
個の掃除区間が与えられる．このうち i(1≦i≦M) 行目には，i番目の掃除区間を表す整数
s_i,t_i(1≦s_i≦t_i≦N)
が与えられる．これは，もしある生徒がその掃除区間を割り当てられた時，s_i≦x≦t_i
を満たす全ての教室 x
について掃除を行わなければならないことを表す．全く同じ区間が複数個与えられることもありえる．任意の教室は少なくとも
1 つの掃除区間に含まれることが保証される．出力出力は標準出力に行うこと．1
行目に，サボってもバレない掃除区間の数 k を出力せよ．続く k
行に，サボってもバレない掃除区間の番号を昇順に改行区切りで出力せよ．最後の行の末尾にも改行を入れること．部分点上記の
制約に加え，以下の
制約を追加で満たすデータセットに正解した場合は 30 点が与えられる。任意の教室 i
(1≦i≦N) について，その教室を含む掃除区間の数は高々 2 つである．



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

  int n, m;
  cin >> n >> m;
  vpii v(m);
  vi imos(n + 1, 0);
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    v[i] = mp(a, b);
    imos[a - 1]++;
    imos[b]--;
  }
  vi csum;
  int sum = 0;
  csum.pb(0);
  rep(i, n) {
    sum += imos[i];
    csum.pb((sum >= 2) + csum[csum.size() - 1]);
  }
  // dump(imos);
  // dump(csum);
  vi ans;
  rep(i, m) {
    if (csum[v[i].se] - csum[v[i].fi - 1] == v[i].se - v[i].fi + 1) {
      ans.pb(i + 1);
    }
  }
  fin(ans.size());
  rep(i, ans.size()) { fin(ans[i]); }
}

// 111110011011
//      1001011
// 3995
