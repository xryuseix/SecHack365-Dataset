/*
問題文の引用元：https://atcoder.jp/contests/abc144/tasks/abc144_e
E - GluttonyEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点: 500 点
問題文 : 高橋君は早食い大会に出ることにしました。この大会は N
人でのチーム戦であり、高橋君のチームは年齢順に 1 から N までの番号がついた N
人のメンバーからなります。メンバー i の 消化コスト は A_i です。大会では 1 から
N までの番号がついた N 個の食べ物が用意されており、食べ物 i の 食べにくさ は F_i
です。大会のルールは以下の通りです。1 個の食べ物につき 1
人のチームメンバーを割り当てる。同じメンバーを複数の食べ物に割り当てることはできない。あるメンバーについて、そのメンバーの消化コストが
x、担当する食べ物の食べにくさが y のとき、その食べ物の完食には x \times y
秒かかる。N
人のメンバーそれぞれが完食にかかる時間のうち最大値が、チーム全体の成績となる。コンテストの前に、高橋君のチームは修行をすることにしました。各メンバーは、自分の消化コストが
0 より小さくならない限り、1 回修行するごとに自分の消化コストを 1
減らすことができます。ただし、修行には膨大な食費がかかるため、N 人合計で K
回までしか修行することができません。各メンバーの修行回数と担当する食べ物を適切に選んだとき、チーム全体の成績は最小でいくらになるでしょうか。
制約入力はすべて整数1 \leq N \leq 2 \times 10^50 \leq K \leq 10^{18}1 \leq A_i
\leq 10^6\ (1 \leq i \leq N)1 \leq F_i \leq 10^6\ (1 \leq i \leq
N)入力入力は以下の形式で標準入力から与えられます。N KA_1 A_2 ... A_NF_1 F_2 ...
F_N出力チーム全体の成績の最小値を出力してください。
// ソースコードの引用元 : https://atcoder.jp/contests/abc144/submissions/8189397
// 提出ID : 8189397
// 問題ID : abc144_e
// コンテストID : abc144
// ユーザID : xryuseix
// コード長 : 2047
// 実行時間 : 233



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
#define fin(ans) cout << (ans) << endl
#define STI(s) atoi(s.c_str())
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
#define MATHPI acos(-1)
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
  };
};
const int MOD = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 62;

int main(void) {

  ll n, k;
  cin >> n >> k;
  vi a(n), f(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> f[i];
  Sort(a);
  Rort(f);

  ll UP = pow(10, 12); //可能
  ll DO = -1;          //不可能

  while (UP - DO != 1) {
    // cout<<UP<<" "<<DO<<endl;
    ll X = (UP + DO) / 2;
    ll sum = 0;
    for (int i = 0; i < n; i++) {
      sum += max(a[i] - X / f[i], (ll)0);
    }
    if (sum <= k) {
      UP = min(UP, X);
    } else {
      DO = max(DO, X);
    }
  }
  cout << UP << endl;
}
