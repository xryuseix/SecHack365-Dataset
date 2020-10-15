/*
問題文の引用元：https://atcoder.jp/contests/past201912-open/tasks/past201912_e
E - RestoreEditorial
Time Limit : 2 sec / Memory Limit : 1024
MB注意この問題に対する言及は、2019年12月29日 05:00 JST
まで禁止されています。言及がなされた場合、賠償が請求される可能性があります。試験後に総合得点や認定級を公表するのは構いませんが、どの問題が解けたかなどの情報は発信しないようにお願いします。
問題文 : あなたは、N 人のユーザが参加する SNS を運営している。彼らはユーザ 1,
\ldots, N
と呼ばれ、別のユーザを何人でもフォローすることができる。しかし、あるトラブルにより、どのユーザがどのユーザをフォローしているかの情報がすべて失われてしまった。幸い、ユーザがこの
SNS
で行ったすべての操作のログが残っており、あなたは操作ログをもとにフォロー状況を復元しようとしている。操作ログは
Q 行からなり、その i 行目 (1 \leqq i \leqq Q) は文字列 S_i
である。各ユーザは以下の 3 種類の操作を行うことができ、S_i は SNS 全体で i
番目に行われた操作に対応する。フォロー: ユーザ a がユーザ b (a \neq b)
をフォローする。ログには 1 a b という行が記載される。フォロー全返し: ユーザ a
が、その時点でユーザ a をフォローしているユーザ全員をフォローする。ログには 2 a
という行が記載される。フォローフォロー: その時点でユーザ a
がフォローしている各ユーザ x に対し、ユーザ a が次を行う: 「その時点でユーザ x
がフォローしているすべてのユーザ (ユーザ a 自身を除く)
をフォローする」。ログには 3 a という行が記載される。なお、この SNS
が開設された時点では、どのユーザも誰もフォローしていなかった。また、ユーザ a
がユーザ b を既にフォローしているとき、ユーザ a がユーザ b
を再びフォローしても何も起こらない。フォロー状況を復元せよ。
制約2 ≦ N ≦ 1000 ≦ Q ≦ 500S_i は以下のいずれかの形式の文字列である。1 a b (1
\leqq a, b \leqq N かつ a \neq b)2 a (1 \leqq a \leqq N)3 a (1 \leqq a \leqq
N)入力入力は以下の形式で標準入力から与えられる。N　QS_1S_2:S_Q出力各 i, j (1
\leq i, j \leq N) に対し、ユーザ i がユーザ j をフォローしているとき f_{i,j} =
Y, そうでないとき f_{i,j} =  N として、以下の形式で出力せよ。f_{1,1}f_{1,2}
\ldots f_{1,N}f_{2,1}f_{2,2} \ldots f_{2,N}:f_{N,1}f_{N,2} \ldots f_{N,N}
// ソースコードの引用元 :
https://atcoder.jp/contests/past201912-open/submissions/11739672
// 提出ID : 11739672
// 問題ID : past201912_e
// コンテストID : past201912-open
// ユーザID : xryuseix
// コード長 : 3081
// 実行時間 : 2



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
  vvc v(n, vc(n, 'N'));

  int Q;
  cin >> Q;
  rep(_, Q) {
    int q;
    cin >> q;
    if (q == 1) {
      int a, b;
      cin >> a >> b;
      a--;
      b--;
      v[a][b] = 'Y';
    } else if (q == 2) {
      int a;
      cin >> a;
      a--;
      for (int j = 0; j < n; j++) {
        if (v[j][a] == 'Y')
          v[a][j] = 'Y';
      }
    } else {
      int a;
      cin >> a;
      a--;
      vc w = v[a];
      rep(k, n) {
        if (w[k] == 'Y') {
          for (int j = 0; j < n; j++) {
            if (j == a)
              continue;
            if (v[k][j] == 'Y')
              v[a][j] = 'Y';
          }
        }
      }
    }
  }
  rep(i, n) {
    rep(j, n) cout << v[i][j];
    cout << endl;
  }
}
