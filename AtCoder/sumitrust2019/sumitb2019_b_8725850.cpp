/*
問題文の引用元：https://atcoder.jp/contests/sumitrust2019/tasks/sumitb2019_b
B - Tax RateEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点: 200 点
問題文 : 高橋君は ABC 洋菓子店でアップルパイをひとつ買い、そのとき N
円を支払ったことを覚えています。  この店で食料品を購入する際には 8
パーセントの消費税が課されます。すなわち、税抜価格 X
円のアップルパイを買う際には X \times 1.08 円 (小数点以下切り捨て)
を支払わなければなりません。高橋君はアップルパイの税抜価格 X
を忘れてしまい、これを知りたくなりました。N を入力として X
を求めるプログラムを書いてください。なお、X は整数とします。
ただし、考えられる税抜価格が複数存在する場合はそのうちのいずれか 1
つを求めてください。また、高橋君が支払った金額 N
を覚え間違えている可能性もあるので、アップルパイの税抜価格として考えられるものが存在しない場合はその旨を報告してください。
制約1 \leq N \leq 50000N
は整数入力入力は以下の形式で標準入力から与えられます。N出力アップルパイの税抜価格
X として考えられるものが存在する場合は、そのような整数 X の値を 1
つ出力してください。そのような値が複数存在する場合は、そのうちのどれを出力しても構いません。アップルパイの税抜価格として考えられるものが存在しない場合は、:(
と出力してください。
// ソースコードの引用元 :
https://atcoder.jp/contests/sumitrust2019/submissions/8725850
// 提出ID : 8725850
// 問題ID : sumitb2019_b
// コンテストID : sumitrust2019
// ユーザID : xryuseix
// コード長 : 1743
// 実行時間 : 4



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
#define itn int
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
const ll MOD = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 62;

int main(void) {

  double x;
  int n;
  cin >> n;
  for (x = 0; x < 1000000; x++) {
    if (floor(x * 1.08) == n) {
      fin(x);
      return 0;
    }
  }
  fin(":(");
}
