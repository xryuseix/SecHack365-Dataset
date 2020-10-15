/*
問題文の引用元：https://atcoder.jp/contests/colopl2018-qual/tasks/colopl2018_qual_b
B - すぬけそだて――チュートリアル――Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
配点 : 200 点
問題文 :
あなたは、「すぬけそだて」のチュートリアルをプレイしています。チュートリアルでは、あなたがすぬけ君を拾うに至った経緯が語られます。始業時刻に遅刻し、昼食をひっくり返し、書いたプログラムはバグだらけ、挙句の果てに先輩を「パパ」と呼んでしまう……失意のどん底に陥っていたあなたは、人気のない暗い路地で、にゃーにゃーと鳴くか細い声を耳にします。最初は無視を決め込んでいたあなたでしたが、翌日も、その翌日も、あなたは同じ場所で同じ声を聴くのでした。気になったあなたは、声のする方向に近づいてみました。草むらの中に広がっていた光景……それには説明の必要はないでしょう。こうして、あなたとすぬけ君との共同生活が幕を開けたのです！と、このような心温まるお話を見るのも、もう
10
回目です。「すぬけそだて」では、最初にランダムなゲームアイテム「マタタビ」がもらえるのですが、あなたは好きな「マタタビ」がもらえるまでチュートリアルをやり直すことにした、というのがその理由です。お話の内容を完全に覚えてしまったあなたは、素早くチュートリアルを終わらせることに集中することにしました。チュートリアルは、N
個のフェイズに分かれています。各フェイズは「ローディング」か「ストーリー」のいずれかであり、文字列
S の i 文字目が 0 のとき i 個目のフェイズが「ローディング」であることを、1
のとき i 個目のフェイズが「ストーリー」であることを表します。また、i
個目のフェイズにかかる時間は、最初 T_i
秒です。「ストーリー」のフェイズでは、開始直後にスキップボタンを押すことでそのストーリーをちょうど
X
秒で終わらせることができます。スキップボタンを押さない場合、このストーリーにかかる時間は
T_i
秒のままです。「ローディング」のフェイズでは、進行を速めることはできません。適切にボタンを押したとき、最小で何秒でチュートリアルを終わらせることができるでしょうか。
制約1 \leq N \leq 10001 \leq X \leq 10^6S の長さは N である1 \leq T_i \leq
10^6(1\leq i\leq N)N,X,T_i(1\leq i\leq N)
は整数である入力入力は以下の形式で標準入力から与えられる。N
XST_1:T_N出力チュートリアルを終わらせるために必要な時間の最小値を出力せよ。
// ソースコードの引用元 :
https://atcoder.jp/contests/colopl2018-qual/submissions/4240128
// 提出ID : 4240128
// 問題ID : colopl2018_qual_b
// コンテストID : colopl2018-qual
// ユーザID : xryuseix
// コード長 : 748
// 実行時間 : 3



*/
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <set>
#include <cctype>
#define ld long double
#define ll long long int
#define ull unsigned long long int
using namespace std;
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
const long long INF = 1LL << 60;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  string s;
  int i, n, x;
  cin >> n >> x >> s;
  int t[n];
  for (i = 0; i < n; i++)
    cin >> t[i];
  int ans = 0;
  for (i = 0; i < n; i++) {
    if (s[i] == '0')
      ans += t[i];
    else {
      if (t[i] > x)
        ans += x;
      else
        ans += t[i];
    }
  }
  cout << ans << endl;

  return 0;
}
