/*
問題文の引用元：https://atcoder.jp/contests/arc018/tasks/arc018_1
A - BMIEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 :
ぼく、一目惚れをしました。昨日学内ですれ違った彼女の名前、どうしても知りたいんです。いや、名前だけじゃない……！身長も体重も、彼女の全てが知りたい！
でも、僕には彼女に話しかける勇気なんてない。彼女の体重は何 kg
なんだろうか...彼女の身長は何 cm
くらいなんだろうか...。結局、一晩中彼女のことだけを考えてぜんぜん寝られていない。
さすがに女性にいきなり体重を聞くのは失礼だろう。そんなことは分かっている。そんなものを聞いたりしたら、間違いなく嫌われてしまうだろう。
「うーむ、どうしたものか……ハッ！」
僕の脳内に稲妻が走った。そうだ、身長とBMI(※)を聞けばいいんだ。そうしたら体重を逆算できる。名前はもうどうでもいいや、これは名案だ。
そうと決まれば、 身長[cm] と BMI[kg/m^2] の2つの値に基づいて 体重[kg]
を逆算してくれるプログラムを有能プログラマーである君に作ってもらいたい。
※ BMI[kg/m^2]
とは、ボディマス指数と呼ばれるもので、以下の計算式で与えられる。ただし、Height
と Weight はそれぞれ身長と体重のことである。
入力            入力は以下の形式で標準入力から与えられる。Height BMI
Height (120.0 ≦ Height ≦ 200.0)
は、プログラムに与えられる身長[cm]を表す実数である。小数点第 1
位まで与えられる。             BMI (10.0 ≦ BMI ≦ 40.0)
は、プログラムに与えられる BMI[kg/m^2] を表す実数である。小数点第 1
位まで与えられる。                出力            入力に基づいて逆算した 体重
[kg] を一行に出力せよ。        出力は絶対誤差が 10^{−2} 以下であれば許容される。
なお、出力の最後には改行を入れること。
// ソースコードの引用元 : https://atcoder.jp/contests/arc018/submissions/6114561
// 提出ID : 6114561
// 問題ID : arc018_1
// コンテストID : arc018
// ユーザID : xryuseix
// コード長 : 1334
// 実行時間 : 1



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
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<pair<int, int>> vpii;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef vector<vector<string>> vvs;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define fin(ans) cout << (ans) << endl
#define P 1000000007
#define STI(s) atoi(s.c_str()) // string to int
#define mp(p, q) make_pair(p, q)
#define Sort(a) sort(a.begin(), a.end())
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
const int INF = INT_MAX;
const long long LLINF = 1LL << 60;
// g++ -std=c++1z temp.cpp
//./a.out

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////
  double h, bmi;
  cin >> h >> bmi;
  cout << h *h / 10000 * bmi << endl;

  //////////////////////////////////////////////////////
  return 0;
}
