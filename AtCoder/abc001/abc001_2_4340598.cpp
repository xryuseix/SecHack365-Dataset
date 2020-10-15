/*
問題文の引用元：https://atcoder.jp/contests/abc001/tasks/abc001_2
B - 視程の通報Editorial
Time Limit : 2 sec / Memory Limit : 64
MB注意この問題は古い問題です。過去問練習をする場合は、新しいAtCoder Beginner
Contestから取り組むことをお勧めしています。
問題文 :
気象情報は、世界中に様々な形で流れています。そのひとつの地上実況気象通報式
(SYNOP) では、視程 (肉眼で物体がはっきりと確認できる最大の距離)
を、次の規則に従って、VVという値 (通報式) に変換して報じます。0.1{\rm km} 未満：
VVの値は 00 とする。0.1{\rm km} 以上 5{\rm km} 以下：距離 ({\rm km}) を 10
倍した値とする。1 桁の場合は上位に 0 を付す。例えば、2,000{\rm m} =2.0{\rm km}
ならば、VVは 20 である。同じく、200{\rm m}の場合VVは 02 である。6{\rm km} 以上
30{\rm km} 以下：距離 ({\rm km}) に 50 を足した値とする。例えば、15,000{\rm m}
=15{\rm km} ならば、VVは 65 である。35{\rm km} 以上 70{\rm km} 以下：距離 ({\rm
km}) から 30 を引いて 5 で割った後、80 を足した値とする。例えば、40,000{\rm m}
=40{\rm km} ならば、VVは 82 である。70{\rm km} より大きい：VVの値は 89
とする。いま、あなたに視程の距離をメートルで与えるので、上記のルールに従って計算されるVVを出力するプログラムを作成してください。なお、VVは必ず（上位の
0
を含めて）2桁の整数であり、上記のルールに従って計算した時に整数にならないような入力や、上記の範囲に入らない入力
(例：5{\rm km} より大きく 6{\rm km} 未満)
などはありません。入力入力は以下の形式で標準入力から与えられる。m1
行目には、距離を表す整数 m\ (0≦m≦100,000) が与えられる。単位はメートル ({\rm m})
である。出力VVの値を 1 行で出力せよ。また、出力の末尾には改行を入れること。
// ソースコードの引用元 : https://atcoder.jp/contests/abc001/submissions/4340598
// 提出ID : 4340598
// 問題ID : abc001_2
// コンテストID : abc001
// ユーザID : xryuseix
// コード長 : 887
// 実行時間 : 1



*/
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <list>
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
// set<int>::iterator it;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  double n;
  int v;
  cin >> n;
  if (n < 100.0f) {
    cout << "00" << endl;
    return 0;
  }
  n /= 1000;
  if (n <= 5.0f) {
    v = 10 * n;
    printf("%02d\n", v);
  } else if (n <= 30.0f) {
    v = n + 50;
    printf("%02d\n", v);
  } else if (n <= 70.0f) {
    v = (n - 30) / 5 + 80;
    printf("%02d\n", v);
  } else
    cout << 89 << endl;

  return 0;
}
