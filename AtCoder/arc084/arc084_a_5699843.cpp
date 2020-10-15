/*
問題文の引用元：https://atcoder.jp/contests/arc084/tasks/arc084_a
C - Snuke FestivalEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 300 点
問題文 :
今年もすぬけ祭の季節がやってきました。りんごさんは、まず手始めにすぬけ君召喚の儀式を執り行おうと思っています。儀式には祭壇が必要で、祭壇は上部、中部、下部の
3 つのカテゴリーのパーツ 1 つずつからなります。祭壇の 3
カテゴリーのパーツがそれぞれ N 個ずつあります。i 個目の上部のパーツのサイズは
A_i 、i 個目の中部のパーツのサイズは B_i 、i 個目の下部のパーツのサイズは C_i
です。祭壇を作るにあたっては、中部のパーツのサイズは上部のパーツのサイズより真に大きく、下部のパーツのサイズは中部のパーツのサイズより真に大きくなければなりません。逆に、この条件を満たす任意の
3
つのピースを組み合わせて祭壇を作ることができます。りんごさんが作ることのできる祭壇は何種類あるでしょうか。ただし、2
つの祭壇が異なるとは、上部、中部、下部に使われるピースのうち少なくとも 1
つが異なることを言います。
制約1 \leq N \leq 10^51 \leq A_i \leq 10^9(1\leq i\leq N)1 \leq B_i \leq
10^9(1\leq i\leq N)1 \leq C_i \leq 10^9(1\leq i\leq
N)入力は全て整数である入力入力は以下の形式で標準入力から与えられる。NA_1 ...
A_NB_1 ... B_NC_1 ...
C_N出力りんごさんが作ることのできる祭壇の種類数を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/arc084/submissions/5699843
// 提出ID : 5699843
// 問題ID : arc084_a
// コンテストID : arc084
// ユーザID : xryuseix
// コード長 : 1677
// 実行時間 : 60



*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cctype>
#include <climits>
#include <bitset>
#define ld long double
#define ll long long int
#define ull unsigned long long int
#define rep(i, n) for (i = 0; i < n; i++)
#define fin(ans) cout << (ans) << endl
#define INF INT_MAX
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vpii vector<pair<int, int>>
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define vvs vector<vector<string>>
#define P 1000000007
using namespace std;
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
const long long LLINF = 1LL << 60;
// set<int>::iterator it;
//_|

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  int i, n, an, cn;
  cin >> n;

  vector<int> a(n, 0), b(n, 0), c(n, 0);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];
  rep(i, n) cin >> c[i];

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  sort(c.begin(), c.end());
  //	rep(i,n)cout<<a[i]<<" ";
  //	cout<<endl;
  //	rep(i,n)cout<<b[i]<<" ";
  //	cout<<endl;
  //	rep(i,n)cout<<c[i]<<" ";
  //	cout<<endl;

  ll ans = 0;
  rep(i, n) {
    an = (lower_bound((a).begin(), (a).end(), b[i]) - a.begin());
    cn = c.end() - upper_bound((c).begin(), (c).end(), b[i]);
    ans += (ll)an * cn;
    //		cout<<an<<" "<<cn<<endl;
  }
  fin(ans);

  //////////////////////////////////////////////////////
  return 0;
}
