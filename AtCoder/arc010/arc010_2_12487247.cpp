/*
問題文の引用元：https://atcoder.jp/contests/arc010/tasks/arc010_2
B - 超大型連休Editorial
Time Limit : 2 sec / Memory Limit : 64 MB
問題文 : 2011 年、AtCoder
国の高橋首相はある重大な決定を行った。その決定とは...法改正である。国民の祝日に関する法律を変更し、休日を増やすことにした!!国民の創造性を尊重するその決定が、霞が関を魔境へと変えたッ！あなたは霞が関の国土交通省に勤務する職員であり、この法改正により上司から新たな任務を与えられた。その任務とは、2012
年の「連休の最大日数」を計算することである。連休の大きさを事前に計算することで国民の行動を予想し、高速道路の部分的な値下げを行い、経済を活性させるためだ。したがって、あなたに失敗することは許されない。国民の行動を正確に予想できなくなるからだ。以下に、「連休」の定義と諸注意を記す。AtCoder
国が使用する暦はグレゴリオ暦に従う。「連休」とは、「休日」が連続して続くことである。「土曜日」「日曜日」「祝日」「振替休日」が「休日」に相当する。「祝日」が他の休日と同じ日に指定されていた場合、「振替休日」を必ず設置する。「振替休日」は祝日の時系列順に決定していき、その祝日以降最も近い平日（休日を除いた日）となる。2012
年 1 月 1
日は日曜日である。入力入力は以下の形式で標準入力から与えられる。Nm_{1}/d_{1}m_{2}/d_{2}::m_{n}/d_{n}1
行目には祝日の日数を表す整数 N が与えられ、 0≦N≦366 を満たす。2 行目から N+1
行目までの N 行で祝日の日付が与えられる。m_{i} は i(1≦i≦366)
番目に与えられる祝日の月で、 1≦m_{i}≦12 を満たす。d_{i} は i(1≦i≦366)
番目に与えられる祝日の日で、m_{i} = 2 のとき、 1≦d_{i}≦29 を満たす。m_{i} = (4,
6, 9, 11) のとき、 1≦d_{i}≦30 を満たす。m_{i} = (1, 3, 5, 7, 8, 10, 12) のとき、
1≦d_{i}≦31 を満たす。m_{i} と d_{i} はともに整数である。m_{i} と d_{i}
は必ず/で区切られて与えられる。祝日は時系列順に与えられるとは限らないことに注意せよ。ただし、同じ日付が複数与えられないことは保証されている。出力法改正後における
2012
年の連休の最大日数を出力せよ。出力は標準出力におこない、末尾には改行をいれること。
// ソースコードの引用元 :
https://atcoder.jp/contests/arc010/submissions/12487247
// 提出ID : 12487247
// 問題ID : arc010_2
// コンテストID : arc010
// ユーザID : xryuseix
// コード長 : 3950
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
typedef vector<pair<ll, ll>> vpll;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef vector<vector<string>> vvs;
typedef vector<vector<ll>> vvll;
typedef map<int, int> mii;
typedef set<int> si;
#define rep(i, n) for (int i = 0; i < (n); ++i)
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
#define itn int
// #define endl '\n';
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
const ll LLINF = 1LL << 60;
const ll MOD = 1000000007;
const double EPS = 1e-9;

int main() {

  int n;
  cin >> n;
  vvi v(12);
  set<int> s{4, 6, 9, 11};
  set<pair<int, int>> S;
  rep(i, n) {
    string str;
    cin >> str;
    int a, b;
    rep(j, str.size()) {
      if (str[j] == '/') {
        a = STLL(str.substr(0, j));
        b = STLL(str.substr(j + 1));
        break;
      }
    }
    S.insert(mp(a, b));
  }
  // irep(i,S)cout<<(*i).fi<<" "<<(*i).se<<endl;
  int week = 0;
  for (int m = 1; m <= 12; m++) {
    for (int d = 1; d <= 31; d++) {
      if (d == 31 && s.count(m))
        continue;
      if (d >= 30 && m == 2)
        continue;
      v[m - 1].pb(week == 6 || week == 0);
      week++;
      week %= 7;
    }
  }
  // dump(v[0]);
  irep(i, S) {
    int m = (*i).first, d = (*i).second;
    while (1) {
      if (!v[m - 1][d - 1]) {
        v[m - 1][d - 1] = 1;
        break;
      } else {
        d++;
        if (s.count(m) && d == 31) {
          d = 1;
          m++;
        } else if (d >= 30 && m == 2) {
          d = 1;
          m++;
        } else if (d > 31) {
          d = 1;
          m++;
        }
        if (m > 12)
          break;
      }
    }
  }
  // dump(v[0]);

  vi w;
  rep(i, 12) { rep(j, v[i].size()) w.pb(v[i][j]); }
  int ans = 0;
  rep(i, w.size()) {
    int j = i;
    while (j < w.size() && w[j] == 1)
      j++;
    chmax(ans, j - i);
    i = j;
  }
  fin(ans);
}
