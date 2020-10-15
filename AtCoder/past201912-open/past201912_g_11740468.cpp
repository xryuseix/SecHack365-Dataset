/*
問題文の引用元：https://atcoder.jp/contests/past201912-open/tasks/past201912_g
G - DivisionEditorial
Time Limit : 2 sec / Memory Limit : 1024
MB注意この問題に対する言及は、2019年12月29日 05:00 JST
まで禁止されています。言及がなされた場合、賠償が請求される可能性があります。試験後に総合得点や認定級を公表するのは構いませんが、どの問題が解けたかなどの情報は発信しないようにお願いします。
問題文 : あなたは、N 人の社員、社員 1, \ldots, N を 3
つ以下のグループに最適に分割するプログラムを作ろうとしている。すでに、社員のペア
i, j (1 \leqq i < j \leqq N)
すべてに対して、彼らを同じグループに含めた際に生じる幸福度 A_{i,j}
(正とは限らない) が AI
によって計算されている。グループ分けの好ましさを、同じグループに含まれる社員のペア
i, j すべてに対する A_{i,j} の総和 (そのようなペアが存在しなければ 0)
と定義する。グループ分けの好ましさの最大値を求めよ。
制約2 \leqq N \leqq 10-1,000,000 \leqq A_{i,j} \leqq
1,000,000入力中の値はすべて整数である。入力入力は以下の形式で標準入力から与えられる。Na_{1,2}
a_{1,3} \ldots a_{1, N}a_{2,3} a_{2,4} \ldots a_{2,
N}:a_{N-1,N}出力グループ分けの好ましさの最大値を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/past201912-open/submissions/11740468
// 提出ID : 11740468
// 問題ID : past201912_g
// コンテストID : past201912-open
// ユーザID : xryuseix
// コード長 : 3228
// 実行時間 : 60



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
#define endl '\n';
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

  int n;
  cin >> n;
  ll ans = -LLINF;
  vvi v(n, vi(n));
  rep(i, n - 1) {
    for (int j = i + 1; j < n; j++) {
      cin >> v[i][j];
    }
  }
  ll MAX = pow(3, n);
  rep(I, MAX) {
    string s = "";
    ll t = I;
    while (t > 0) {
      s += char(t % 3 + '0');
      t /= 3;
    }
    while (s.size() < n)
      s += '0';
    reverse(all(s));
    vvi group(3);
    rep(i, s.size()) { group[s[i] - '0'].pb(i); }
    ll tans = 0;
    rep(i, 3) {
      rep(j, group[i].size()) {
        for (int k = j + 1; k < group[i].size(); k++) {
          tans += v[group[i][j]][group[i][k]];
        }
      }
    }
    // if(tans==60){
    //     rep(i,3){
    //         rep(j,group[i].size()){
    //             cout<<group[i][j]<<" ";
    //         }
    //         cout<<endl;
    //     }
    // }
    chmax(ans, tans);
  }
  fin(ans);
}
