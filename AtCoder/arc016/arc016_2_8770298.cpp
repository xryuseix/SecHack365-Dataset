/*
問題文の引用元：https://atcoder.jp/contests/arc016/tasks/arc016_2
B - 音楽ゲームEditorial
Time Limit : 2 sec / Memory Limit : 64 MB
問題文 : 楽器を演奏できない高橋君は、音楽ゲームが大好きです。このゲームでは 9
個のボタンが存在し、曲に合わせてボタンをタイミングよく押したり、押しっぱなしにすることによって楽器を演奏してしている気分になります。あなたには高橋くんがプレイした楽曲の譜面が与えられます。ボタンを押す場所はx、押しっぱなしにする部分はo
で与えられます。他は.です。高橋くんが譜面をミスなくプレイしたとき、ボタンを押した回数を出力してください。入力入力は以下の形式で標準入力から与えられる。Nx_{11}x_{12}...x_{18}x_{19}x_{21}x_{22}...x_{28}x_{29}:x_{N1}x_{N2}...x_{N8}x_{N9}1
行目に、譜面の行数を表す整数 N (1≦N≦100) が与えられる。譜面は常に 9
列であることが保証されている。2 行目からの N
行で、高橋くんが遊ぶ譜面が与えられる。譜面の種類は x o . の 3 種類である。譜面が
x のとき、高橋くんはボタンを押す。譜面が o
のとき、高橋くんはボタンを押し、同じ列で o が続く限り押しっぱなしにする。譜面が
.
のとき、高橋くんは何もしない。出力高橋くんが譜面をミスなくプレイしたとき、ボタンを押した回数を出力せよ。なお、出力の最後には改行をいれること。
// ソースコードの引用元 : https://atcoder.jp/contests/arc016/submissions/8770298
// 提出ID : 8770298
// 問題ID : arc016_2
// コンテストID : arc016
// ユーザID : xryuseix
// コード長 : 2049
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

  int n;
  cin >> n;
  vs v(n);
  rep(i, n) cin >> v[i];
  int maru = 0, batu = 0;
  rep(i, n) rep(j, 9) if (v[i][j] == 'x') batu++;
  v.push_back("xxxxxxxxx");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 9; j++) {
      if (v[i][j] == 'o') {
        maru++;
        int x = j;
        int y = i;
        while (v[y][x] == 'o') {
          v[y][x] = '.';
          y++;
        }
      }
    }
  }
  fin(maru + batu);
}
