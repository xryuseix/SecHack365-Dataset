/*
問題文の引用元：https://atcoder.jp/contests/code-formula-2014-final/tasks/code_formula_2014_final_c
C - 次世代SNSEditorial
Time Limit : 2 sec / Memory Limit : 64 MB
問題文 :             あなたは、とあるSNSを作ろうとしています。
このSNSでは、@usernameという形式で、特定のユーザーにメッセージを送ることが可能であり、1
つの発言に複数のユーザーを指定することで、複数のユーザーに同時にメッセージを送ることが可能になります。
このSNSは、以下のようなルールに従っています。
書き込まれるメッセージは、半角小文字アルファベット、半角スペース、@のみを含む。
書き込まれたメッセージに@が含まれていた場合、@直後の、アルファベットのみで構成される文字列のうち、最も長い文字列をユーザー名として扱い、そのユーザーにメッセージを届ける。
@の直後がアルファベットでなかった場合は無視する。
複数回同じユーザーが指定されても、メッセージは 1 回届ければ良い。
あなたは、このシステムを実装するために、書き込まれたメッセージに対し、メッセージを届けるべきユーザーを列挙するプログラムを作りたいです。
メッセージを送るべきユーザーを全て出力しなさい。なお、ユーザーが複数いる場合は、辞書順で出力しなさい。
入力                入力は以下の形式で標準入力から与えられる。S
1 行目には、書き込まれるメッセージを表す文字列 S(1≦|S|≦140) が与えられる。
文字列 S には、小文字アルファベット、 、@以外の文字は含まれない。
出力                メッセージを送るべきユーザーを、 1
行ずつ全て出力しなさい。なお、ユーザーが複数いる場合は、辞書順で出力しなさい。
// ソースコードの引用元 :
https://atcoder.jp/contests/code-formula-2014-final/submissions/11042604
// 提出ID : 11042604
// 問題ID : code_formula_2014_final_c
// コンテストID : code-formula-2014-final
// ユーザID : xryuseix
// コード長 : 2639
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
#include <cassert>
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
#define itn int;
#define endl '\n';
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
  string s = getline();
  set<string> ans;
  rep(i, s.size() - 1) {
    if (s[i] == '@') {
      if (s[i + 1] == '@' || s[i + 1] == ' ')
        continue;
      int j = i;
      while (j < s.size() && s[j] != ' ') {
        j++;
        if (s[j] == '@') {
          j--;
          break;
        }
      }
      string t = s.substr(i + 1, j - i);
      if (t[t.size() - 1] == ' ') {
        t.pop_back();
      }
      ans.insert(t);
      i = j;
    }
  }
  irep(i, ans) fin(*i);
}
