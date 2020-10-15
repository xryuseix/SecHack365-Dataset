/*
問題文の引用元：https://atcoder.jp/contests/abc171/tasks/abc171_c
C - One Quadrillion and One Dalmatians
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 300 点
問題文 : ロジャーは、彼のもとに突如現れた 1000000000000001
匹の犬をすべて飼うことを決意しました。犬たちにはもともと 1 から 1000000000000001
までの番号がふられていましたが、ロジャーは彼らに以下のルールで名前を授けました。1,2,\cdots,26
番の番号がついた犬はその順に a,b,...,z と命名されます。27,28,29,\cdots,701,702
番の番号がついた犬はその順に aa,ab,ac,...,zy,zz
と命名されます。703,704,705,\cdots,18277,18278  番の番号がついた犬はその順に
aaa,aab,aac,...,zzy,zzz と命名されます。18279,18280,18281,\cdots,475253,475254
番の番号がついた犬はその順に aaaa,aaab,aaac,...,zzzy,zzzz
と命名されます。475255,475256,\cdots  番の番号がついた犬はその順に
aaaaa,aaaab,...
と命名されます。(以下省略)つまり、ロジャーが授けた名前を番号順に並べると:a,b,...,z,aa,ab,...,az,ba,bb,...,bz,...,za,zb,...,zz,aaa,aab,...,aaz,aba,abb,...,abz,...,zzz,aaaa,...
のようになります。ロジャーはあなたに問題を出しました。「番号 N
の犬の名前を答えよ。」
制約N は整数 1 \leq N \leq
1000000000000001入力入力は以下の形式で標準入力から与えられる。N出力ロジャーの問題に対する答えを、英小文字のみからなる文字列として出力せよ。



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

  ll n;
  cin >> n;
  string ans;
  ll B = 1;
  int keta = 1;
  for (int i = 1;; i++) {
    if (B + pow(26, i) <= n) {
      B += pow(26, i);
      keta++;
    } else
      break;
  }
  n -= B;
  while (n > 0) {
    ans += char(n % 26 + 'a');
    n /= 26;
  }
  while (ans.size() < keta)
    ans += 'a';
  reverse(all(ans));
  // rep(i,ans.size()){
  //     if(ans[i]=='a')ans[i]='z';
  //     else ans[i]--;
  // }
  fin(ans);
}
