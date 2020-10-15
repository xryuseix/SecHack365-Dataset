/*
問題文の引用元：https://atcoder.jp/contests/abc024/tasks/abc024_d
D - 動的計画法Editorial
Time Limit : 2 sec / Memory Limit : 256
MB(21:52)ジャッジに使われているサンプルテストケースのうち1つのテストケースが
問題文 :
のものと異なることが判明致しました。ご不便をおかけして申し訳ありません。なお、テストケース自体は正しいものであるため、リジャッジ等は行いません。ご了承ください。
問題文 : 高橋君はタテ、ヨコともに 10^8
マスずつある方眼紙を使って以下の問題を解くことにしました。「一番左下のマスから開始して、右もしくは上に1マス移動するという操作を繰り返して、各マスにたどり着く方法の個数を
1,000,000,007
で割った余りを求めよ。」高橋君は動的計画法が好きなので、この問題が動的計画法を使って解けるということにすぐ気づきました。具体的には最も左の列もしくは最も下の行に属する全てのマスに
1
を書き込む。まだ整数が書き込まれていないマスについて、左のマスにも下のマスにも整数が書かれていたら、その
2 マスの和を1,000,000,007
で割った余りをそのマスに書き込む。整数が書かれていないマスがなくなるまで操作2を繰り返す。というアルゴリズムによって、答えを求めることが出来ます。高橋君は上記のアルゴリズムですべてのマスに「左下からたどり着く方法の個数を
1,000,000,007
で割った余り」を書き込みました。できあがった方眼紙の左下の一部は下図のようになります。しかし書き込み終わったあと、達成感のために舞い上がってしまい、方眼紙の一部を破いてしまいました。高橋君の手元には、あるマスと、その上のマスと右のマスの部分のみが書かれている方眼紙の欠片があります。高橋君はこの欠片を元の位置に戻そうと思ったのですが、方眼紙が大きすぎるので、どこに置けばいいのかわかりません。欠片の情報から、この欠片が元々の方眼紙の左から何マス、下から何マスの位置にあったのか求めてください。つまり、左からxマス、下からyマスのマスのことを
(x, y) と書くとして、(r, c)、(r, c + 1)、(r + 1,
c)のマスに書かれている整数が与えられるので、 r と c
を求めてください。なお、一番左下のマスは (0, 0)
です。入力入力は以下の形式で標準入力から与えられる。ABC1 行目には (r, c)
のマスに書かれている整数 A(0 ≦ A ＜ 1,000,000,007) が与えられる。2 行目には (r,
c + 1) のマスに書かれている整数 B(0 ≦ B ＜ 1,000,000,007) が与えられる。3
行目には (r + 1, c) のマスに書かれている整数 C(0 ≦ C ＜ 1,000,000,007)
が与えられる。0 ≦ r, c ＜ 99,999,999となるような答えが存在するような A, B, C
が与えられる。出力欠片が元々あった位置を表す 2 つの整数 r(0 ≦ r ＜ 99,999,999)
と c(0 ≦ c ＜ 99,999,999) を空白区切りで出力せよ。答えとして考えられる r, c
が複数あった場合はそのなかで r が最小のものを出力せよ。それでも答えが 1
つに定まらない場合は、rが最小のもののなかで c
が最小のものを出力せよ。出力の末尾には改行を入れること。
// ソースコードの引用元 : https://atcoder.jp/contests/abc024/submissions/7951767
// 提出ID : 7951767
// 問題ID : abc024_d
// コンテストID : abc024
// ユーザID : xryuseix
// コード長 : 2110
// 実行時間 : 1



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
const ll LLINF = 1LL << 60;

// (a/b)%P の場合は，(a%P)*modinv(b)%P とする
ll modinv(ll a) {
  ll b = MOD, u = 1, v = 0;
  while (b) {
    ll t = a / b;
    a -= t * b;
    swap(a, b);
    u -= t * v;
    swap(u, v);
  }
  u %= MOD;
  if (u < 0)
    u += MOD;
  return u;
}

int main(void) {

  ll a, b, c;
  cin >> a >> b >> c;
  ll C1 = ((b * c % MOD) + MOD - (a * b % MOD)) % MOD;
  ll C2 = (((a * c % MOD) + MOD - (b * c % MOD)) % MOD + a * b % MOD) % MOD;
  ll C = (C1 % MOD) * modinv(C2) % MOD;

  ll R1 = ((b * c % MOD) + MOD - (a * c % MOD)) % MOD;
  ll R2 = (((a * b % MOD) + MOD - (b * c % MOD)) % MOD + a * c % MOD) % MOD;
  ll R = (R1 % MOD) * modinv(R2) % MOD;

  cout << R << " " << C << endl;
}
