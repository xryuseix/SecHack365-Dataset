/*
問題文の引用元：https://atcoder.jp/contests/code-festival-2015-quala/tasks/codefestival_2015_qualA_c
C - 8月31日Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : とある星のとある 8 月 31
日のことです。とある星の高橋君はあることに気づいてしまいました。今日で夏休みが終わりであるにもかかわらず、宿題が全く終わっていないのです！宿題のタイムリミットまではあと
T 分あります。そして、高橋君がやらなければいけない宿題は N 個あります。i
番目の宿題を高橋君が解くには A_i
分かかりますが、高橋君の友達である青木君が解いた宿題を丸写ししてしまうことで B_i
分で終わらせることもできます。しかし友達の宿題を写すのはあまり良くないことなので、高橋君はできるだけ写さないようにしたいと思っています。タイムリミットまでに全ての宿題を終わらせるために高橋君が写す必要のある宿題の個数の最小値を出力してください。ただし、全ての宿題を写してもタイムリミットまでに終わらせることができない場合は代わりに
-1 を出力してください。入力入力は以下の形式で標準入力から与えられる。N TA_1
B_1A_2 B_2:A_N B_N1 行目には、2 つの整数 N (1 ≦ N ≦ 10^5), T (0 ≦ T ≦ 10^9)
が空白区切りで与えられる。これは、宿題が N 個あり、タイムリミットまでの時間が T
分であることを表す。2 行目からの N
行には、宿題にかかる時間の情報が与えられる。このうち i (1 ≦ i ≦ N) 行目には、2
つの整数 A_i, B_i (0 ≦ B_i < A_i ≦ 10^4) が空白区切りで与えられる。これは、i
番目の宿題を高橋君が解くと A_i 分かかり、写すと B_i 分かかることを表す。B_i <
A_i であることに注意せよ。部分点この問題には部分点が設定されている。B_i = 0
を満たすデータセットに正解した場合は、30 点が与えられる。追加の
制約のないデータセットに正解した場合は、上記とは別に 70 点が与えられる。出力T
分以内に全ての宿題を終わらせるために高橋君が写す必要のある宿題の個数の最小値を 1
行に出力せよ。ただし、全ての宿題を写しても T
分以内に終わらせることができない場合は代わりに -1
を出力せよ。出力の末尾に改行を入れること。
// ソースコードの引用元 :
https://atcoder.jp/contests/code-festival-2015-quala/submissions/11779175
// 提出ID : 11779175
// 問題ID : codefestival_2015_qualA_c
// コンテストID : code-festival-2015-quala
// ユーザID : xryuseix
// コード長 : 2922
// 実行時間 : 59



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

  int n, m;
  cin >> n >> m;
  vpii v(n);
  rep(i, n) cin >> v[i].fi >> v[i].se;
  sort(all(v), [](auto const &lhs, auto const &rhs) {
    return lhs.fi - lhs.se >
           rhs.fi - rhs.se; // このbool式が成り立つ時入れ替える
  });
  int sum1 = 0, sum2 = 0;
  rep(i, n) {
    sum1 += v[i].fi;
    sum2 += min(v[i].fi, v[i].se);
  }
  if (sum2 > m) {
    fin(-1);
    return 0;
  }
  if (sum1 <= m) {
    fin(0);
    return 0;
  }
  int ans = 0;
  for (int i = 0; i < n; i++) {
    ans++;
    sum1 = sum1 - v[i].fi + v[i].se;
    // cout<<sum1<<" "<<v[i].fi<<" "<<v[i].se<<endl;
    if (sum1 <= m)
      break;
  }
  fin(ans);
}
