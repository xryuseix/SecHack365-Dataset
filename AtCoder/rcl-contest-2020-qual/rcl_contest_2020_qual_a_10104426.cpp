/*
問題文の引用元：https://atcoder.jp/contests/rcl-contest-2020-qual/tasks/rcl_contest_2020_qual_a
A - ゲーマーXとモノス大会
Time Limit : 2 sec / Memory Limit : 1024
MBMathJax.Hub.Config({messageStyle:"none",tex2jax:{skipTags:["script","noscript","style","textarea","code"],inlineMath:[['\\(','\\)']]},displayAlign:"left",displayIndent:"2em"});#fixed-server-timer{height:
auto;}
問題文 :
Xの会社では毎週巨大モニターを用いてゲーム大会が行われます。
次回の大会では「モノス」という発売されたばかりのパズルゲームが使用される予定です。
モノスのルールは次のように定義されています。                              幅 W
列、高さ無限段のグリッド状のフィールドを用いる。列には左から順に 0, 1, ..., W-1
と番号が振られている。                          1 \times 1
の正方形のブロック「モノミノ」がフィールド上方から1個ずつ、全部で N
個落下してくる。
モノミノには色と価値が決められている。色は全部で K 種類あり、 0 以上 K-1
以下の整数で表される。また、価値は 1 以上 V 以下の整数である。
ゲーム開始時に、そのゲームで出現するモノミノの情報が全て明かされる。 i
番目に落下してくるモノミノの色は c_{i} 、価値は v_{i} である。
プレイヤーはモノミノを落とす列を指定し、モノミノを落下させる。
モノミノはフィールド最下段、または他のモノミノの上に着地するとその位置に固定される。そして新しいモノミノが出現する。
フィールドのある段が全てモノミノで埋め尽くされると、その段の得点が得られる。得点は次のように決まる。
その段に配置されたモノミノの色別の価値の合計を求める。
色別の価値の合計のうち最大のものを得点として得る。
全てのモノミノを落下させた時点での得点の合計がそのゲームの得点となる。
何が何でもゲーム大会で優勝したいXの代わりに、モノスにおいてできるだけ高得点を取るAIを作成し、Xを優勝へ導いてあげてください。
各テストケースの得点およびこの問題の得点は、次のように計算されます。
1つのテストケースでは、各段で得られる得点の合計がそのまま得点になります。
テストケースは全部で 50
個あります。各テストケースの得点の合計が、この問題の得点になります。
入力        入力は以下の形式で標準入力から与えられます。        N W K Vc_{0}
v_{0}\(\vdots\)c_{i} v_{i}\(\vdots\)c_{N-1} v_{N-1}                  N
は出現するモノミノの数を表す整数で、 N=1000 を満たします。          W
は使用するフィールドの幅を表す整数で、 W=8 を満たします。          K
は出現するモノミノの色の種類の数を表す整数で、 K=6 を満たします。          V
は出現するモノミノの価値の最大値を表す整数で、 V=8 を満たします。
c_{i} は i 番目に出現するモノミノの色を表す整数で、 0≤c_{i}≤K-1 を満たします。
v_{i} は i 番目に出現するモノミノの価値を表す整数で、 1≤v_{i} ≤V を満たします。
出力                  i 行目に、 i 番目のモノミノを落とす列 col_{i} (0 \le
col_{i} \le W-1)を出力してください。
col_{0}\(\vdots\)col_{i}\(\vdots\)col_{N-1}
テストケースの生成について モノミノの色と価値は一様ランダムに生成されています。



*/
#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(void) {

  int n, w, k, V;
  cin >> n >> w >> k >> V;
  vi c(n), v(n);
  int a;
  rep(i, n) cin >> c[i] >> v[i];

  vi left(w, -1); //左にある数字
  vi height(w, 0);
  for (int i = 0; i < n; i++) {
    int put_pos = 0;
    bool isexsist_same = false;
    for (int j = 0; j < w; j++) {
      if (c[i] == left[j]) {
        isexsist_same = true;
        put_pos = j;
      }
    }
    if (!isexsist_same) {
      for (int j = 0; j < w; j++) {
        // for(int j = w - 1; j >= 0; j--) {
        if (left[j] != -1) {
          put_pos = j;
        }
      }
    }
    height[put_pos]++;
    if (put_pos < w - 1 && height[put_pos] - 1 == height[put_pos + 1]) {
      left[put_pos + 1] = c[i];
    }
    cout << put_pos << endl;
    if (i == -1) {
      rep(j, w) cout << left[j] << " ";
      cout << endl;
      rep(j, w) cout << height[j] << " ";
      cout << endl;
    }
  }
}
