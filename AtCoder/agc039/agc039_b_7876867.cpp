/*
問題文の引用元：https://atcoder.jp/contests/agc039/tasks/agc039_b
B - Graph PartitionEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 500 点
問題文 : N 頂点 M 辺の連結無向グラフが与えられます。頂点には 1 から N
までの番号がついています。辺の情報はマス目 S を用いて表され、S_{i,j} が 1
のとき頂点 i,j
を結ぶ辺が存在し、そうでないとき存在しないことを表します。頂点全体を空でない集合
V_1,\dots,V_k
に分解し、以下を満たすようにすることが可能か判定してください。可能な場合、集合の個数
k
の最大値を求めてください。どの辺も、番号が隣り合う頂点集合の頂点どうしを結ぶ。より正確には、どの辺
(i,j) に対しても、ある 1\leq t\leq k-1 が存在し、i\in V_t,j\in V_{t+1} または
i\in V_{t+1},j\in V_t のいずれかを満たす。
制約2 \leq N \leq 200S_{i,j} は 0 または 1 であるS_{i,i} は 0
であるS_{i,j}=S_{j,i} 与えられるグラフは連結N
は整数である入力入力は以下の形式で標準入力から与えられる。NS_{1,1}...S_{1,N}:S_{N,1}...S_{N,N}出力条件を満たす分割が不可能な場合、-1
を出力せよ。そうでない場合、集合の個数 k の最大値を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/agc039/submissions/7876867
// 提出ID : 7876867
// 問題ID : agc039_b
// コンテストID : agc039
// ユーザID : xryuseix
// コード長 : 4327
// 実行時間 : 29



/*
                                   _ooOoo_
                                  o8888888o
                                  88" . "88
                                  (| -_- |)
                                  O\  =  /O
                           ____/`---'\____
                         .'  \\|     |//  `.
                        /  \\|||  :  |||//  \
                   /  _||||| -:- |||||-  \
                   |   | \\\  -  /// |   |
                   | \_|  ''\---/''  |   |
                   \  .-\__  `-`  ___/-. /
                 ___`. .'  /--.--\  `. . __
          ."" '<  `.___\_<|>_/___.'  >'"".
         | | :  `- \`.;`\ _ /`;.`/ - ` : | |
         \  \ `-.   \_ __\ /__ _/   .-` /  /
======`-.____`-.___\_____/___.-`____.-'======
                                   `=---='
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
                fozubaoyou    pass System Test!
                quoted from
"https://codeforces.com/contest/472/submission/7996840"
*/

* /
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

vector<vector<int>> g(200);
bool ch = true;
ll maxsize = 0;

vector<int> roop;

void dfs(ll pos, ll count, vector<bool> &passed, ll start, vector<int> pass) {
  // cout<<pos<<" "<<count<<endl;
  for (ll i = 0; i < g[pos].size(); i++) {
    if (g[pos][i] == start) {
      if ((count + 1) % 2 == 0) {
        if (maxsize < count + 1) {
          maxsize = count + 1;
          roop.clear();
          for (int j = 0; j < pass.size(); j++) {
            roop.push_back(pass[j]);
          }
          roop.push_back(pos);
        }
      } else {
        ch = false;
        return;
      }
    } else {
      if (passed[g[pos][i]] == false) {
        passed[g[pos][i]] = true;
        pass.push_back(pos);
        dfs(g[pos][i], count + 1, passed, start, pass);
      }
    }
  }
  return;
}

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

  ll n;
  cin >> n;
  vector<string> s(n);
  rep(i, n) { cin >> s[i]; }
  rep(i, n) {
    for (ll j = i + 1; j < s.size(); j++) {
      if (s[i][j] == '1') {
        g[i].push_back(j);
        g[j].push_back(i);
      }
    }
  }

  for (ll i = 0; i < n; i++) {
    vector<bool> passed(n, false);
    vector<int> pass;
    passed[i] = true;
    dfs(i, 0, passed, i, pass);
  }
  if (ch) {
    WAR_FLY wa(n);
    rep(j, n) {
      rep(k, n) {
        if (s[j][k] == '1') {
          wa.add(j, k, 1);
          wa.add(k, j, 1);
        }
      }
    }
    wa.warshall_floyd();
    int maxpass = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        maxpass = max(maxpass, wa.d[i][j]);
      }
    }
    fin(maxpass + 1);

  } else {
    fin(-1);
  }
}
