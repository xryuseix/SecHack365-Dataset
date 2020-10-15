/*
引用元：https://atcoder.jp/contests/agc037/tasks/agc037_a
A - Dividing a StringEditorial
// ソースコードの引用元 : https://atcoder.jp/contests/agc037/submissions/7856564
// 提出ID : 7856564
// 問題ID : agc037_a
// コンテストID : agc037
// ユーザID : xryuseix
// コード長 : 2803
// 実行時間 : 45




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

int main(void) {

  list<string> li;
  string s;
  cin >> s;
  for (int i = 0; i < s.size(); i++) {
    string t = "";
    t += s[i];
    li.push_back(t);
  }
  string bef, tmp;
  int minus = 0;
  for (auto it = li.begin(); it != li.end(); it++) {
    // cout<<*it<<endl;
    if (it == li.begin()) {
      bef = *it;
      continue;
    } else {
      if (bef == *it) {
        it++;
        // cout<<distance(it,li.end())<<endl;
        if (distance(it, li.end()) == 0) {
          minus++;
          break;
        } else {
          tmp = *it;
          it--;
          *it = *it + tmp;
          it++;
          li.erase(it);
          it--;
        }
      }
      bef = *it;
    }
    // for(auto it2=li.begin();it2!=li.end();it2++){
    // 	cout<<*it2<<" ";
    // }
    // cout<<endl;
  }
  fin(li.size() - minus);
}
