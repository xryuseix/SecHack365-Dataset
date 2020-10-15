/*
問題文の引用元：https://atcoder.jp/contests/abc012/tasks/abc012_4
D - バスと避けられない運命Editorial
Time Limit : 5 sec / Memory Limit : 256 MB
問題文 :
高橋君は、バスがあまり好きではありません。ですが、社会に出ると、バスを乗るという行為を避けることはできません。社会人になると、自宅から会社まで、バスで通わなければなりません。高橋君はまだ内定を貰っていないので、会社の場所は解りません。高橋君は、バスに乗っている時間が最も長くなってしまうような、最悪のケースを常に想定します。この、最悪なケースのバスに乗っている時間が、出来るだけ短くなるような場所に引っ越そうと思っています。追記：なお、最悪のケースとは、バスに乗る時間の合計が最も短くなるように、乗るバスを選択した時に、最もバスに乗る時間の合計が長くなってしまうような位置に会社があるケースのことを指します。また、自宅から会社に行く際に、高橋君が乗るバスを選ぶことができ、高橋君はバスに乗る時間の合計が最も短い経路を選択するものとします。各バスは、2
つのバス停を往復するように走っており、行き・帰りでかかる時間に差はありません。バスにはいつでも乗ることが可能であり、乗継にかかる時間などは無視することが可能です。また、自宅や会社はバス停に隣接しており、他のバス停まで歩いたり、バス以外の手段で移動することはできません。高橋君が引っ越すべき場所を求め、そこに引っ越した際の、バスに乗らなければならない時間の最大値を出力してください。入力入力は以下の形式で標準入力から与えられる。N
Ma_1 b_1 t_1a_2 b_2 t_2：a_M b_M t_M1 行目には、バス停の数を表す整数 N (2 ≦ N ≦
300) と、路線の数を表す整数 M (N - 1 ≦ M ≦ 44850)
が、スペース区切りで与えられる。続く 2 行目から M 行は、バスの情報を表す。 i
番目の行には、バスの出発地点と往復する 2 つのバス停を表す番号 a_i, b_i (1 ≦ a_i,
b_i ≦ N) と、その移動に何分かかるかを表す数字 t_i  (1 ≦ t_i ≦ 1000)
が、それぞれ整数で与えられる。辿り着けないバス停のペアは存在しないことが保証されている。a_i
≠ b_i であることが保障されている。ある 2 つのバス停を往復する路線は、高々 1
つしか存在しない。出力高橋君が引っ越した後、最も長くバスに乗らないといけない時にかかってしまう時間を、
1 行で出力せよ。出力の末尾には改行をいれること。
// ソースコードの引用元 : https://atcoder.jp/contests/abc012/submissions/8815052
// 提出ID : 8815052
// 問題ID : abc012_4
// コンテストID : abc012
// ユーザID : xryuseix
// コード長 : 3150
// 実行時間 : 65



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

class WAR_FLY {
public:
  vvi d; //辺の数
  int V; //頂点の数

  WAR_FLY(int n) {
    V = n;
    d = vector<vector<int>>(n, vector<int>(n));
    for (int i = 0; i < V; i++) {
      for (int j = 0; j < V; j++) {
        if (i == j) {
          d[i][j] = 0;
        } else {
          d[i][j] = INF;
        }
      }
    }
  }

  void warshall_floyd() {
    for (int k = 0; k < V; k++) {
      for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
          d[i][j] = min((ll)d[i][j], (ll)d[i][k] + (ll)d[k][j]);
        }
      }
    }
  }

  void add(int from, int to, int cost) { d[from][to] = cost; }

  bool is_negative_loop() {
    for (int i = 0; i < V; i++) {
      if (d[i][i] < 0)
        return true;
    }
    return false;
  }

  void show() {
    for (int i = 0; i < V; i++) {
      for (int j = 0; j < V; j++) {
        cout << d[i][j] << " ";
      }
      cout << endl;
    }
  }
};

int main(void) {

  int n, m;
  cin >> n >> m;
  WAR_FLY wa(n);
  rep(i, m) {
    int a, b, t;
    cin >> a >> b >> t;
    a--;
    b--;
    wa.add(a, b, t);
    wa.add(b, a, t);
  }
  wa.warshall_floyd();
  int ans = INF;
  rep(i, n) {
    int tmp = 0;
    rep(j, n) {
      if (i == j)
        continue;
      tmp = max(tmp, wa.d[i][j]);
    }
    ans = min(ans, tmp);
  }
  fin(ans);
}
