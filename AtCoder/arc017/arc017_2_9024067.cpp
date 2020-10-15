/*
問題文の引用元：https://atcoder.jp/contests/arc017/tasks/arc017_2
B - 解像度が低い。Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 :
大変なことになってしまった！！なんと、我が社の次の決算報告会の発表者に僕が選ばれてしまったのだ！我が社のイメージのためにも、そして社内での僕の地位のためにも、なんとしても好印象を与える発表をせねばならない。我が社の直近の業績は
N
個の数からなる数列で表される。これを発表したいところだけれど……、あいにく、我が社の業績はそこまで良いとは言えないのが実情だ。一体どうすればいいんだろうか……。途方に暮れた僕は、とりあえず発表会場の設備を調査した。なんと、これが僕の生まれ持った強運か、プロジェクターの解像度がとても低く、画面には一度に
K 個の数を表示するのが限界であることがわかった。業績の数列のうちの連続する K
個をうまく選べれば、我が社の業績がうなぎのぼりであるように見せかけられるのではないだろうか？これは最高のアイデアだと思ったが、聴衆から「それって業績の一部ですよね？他の部分も見せて頂けませんか？」と言われたらジ・エンドだ。そこで用意周到な僕は、業績の数列のうち、プロジェクターで映したときに業績が常に上昇しているように見せられるような箇所がいくつあるのか、事前に調べておくことにした。常に成長を続ける企業であるとアピールするためには、ある値はその前の値より真に大きくなくてはいけない。つまり
100, 200, 300 という列は常に上昇していると考えるが、 100, 200, 200
という列は常に上昇しているとは考えない。※この
問題文 :
はフィクションです。業績はきちんと発表しましょう。入力入力は以下の形式で標準入力から与えられる。N
KA_1A_2:A_N1 行目には、業績を表す数列の要素数 N (1 \leq N \leq
300,000)、プロジェクターで一度に表示できる数の個数 K (1 \leq K \leq N)
が半角空白区切りで与えられる。2 行目から N
行では、業績を表す数列が与えられる。このうち i 行目が i 番目の業績を表す整数 A_i
(1 \leq A_i \leq 300,000) である。注意: この問題では最大で 300,000
行ほどの入力を読み込む必要がある。ほとんどの言語では問題ないが、Python 2.x で
input()
を使うと時間制限に間に合わないおそれがあるので、かわりに整数を読み込む際には
int(raw_input())
を使うこと。出力業績を表す数列のうち、プロジェクターで画面に映せるような K
個の連続した部分で、その部分だけ見ると業績が常に上昇しているように見えるものの個数を標準出力に１行で出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/arc017/submissions/9024067
// 提出ID : 9024067
// 問題ID : arc017_2
// コンテストID : arc017
// ユーザID : xryuseix
// コード長 : 2486
// 実行時間 : 102



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
  }
};
const ll MOD = 1000000007;
const double EPS = 1e-9;
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;

map<int, int> zip;
int compress(vector<ll> &x) {
  ll unzip[x.size()];
  sort(x.begin(), x.end());
  x.erase(unique(x.begin(), x.end()), x.end());
  for (int i = 0; i < x.size(); i++) {
    zip[x[i]] = i;
    unzip[i] = x[i];
  }
  return x.size();
}

int main(void) {

  ll n, k;
  cin >> n >> k;
  vll arr(n - 1);
  vll v(n);
  compress(v);
  rep(i, n) cin >> v[i];
  if (k == 1) {
    fin(n);
    return 0;
  }
  rep(i, n - 1) { arr[i] = v[i] < v[i + 1]; }
  vll seq;
  for (int i = 0; i < n - 1; i++) {
    if (arr[i]) {
      ll len = 1;
      while (i + 1 < n - 1 && arr[i + 1]) {
        i++;
        len++;
      }
      seq.push_back(len + 1);
    }
  }
  ll ans = 0;
  rep(i, seq.size()) { ans += max(seq[i] - k + 1, 0LL); }

  fin(ans);
}
