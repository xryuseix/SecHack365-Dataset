/*
問題文の引用元：https://atcoder.jp/contests/abc118/tasks/abc118_b
B - Foods Loved by EveryoneEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 :
カツサンドくんはオムライスが好きです。他にも明太子や寿司、クリームブリュレやテンダーロインステーキなどが好きで、これらの食べ物は全て、誰もが好きだと信じています。その仮説を証明するために、N
人の人に M 種類の食べ物について好きか嫌いかの調査を行いました。調査の結果、i
番目の人は A_{i1} 番目, A_{i2} 番目, ..., A_{iK_i}
番目の食べ物だけ好きだと答えました。N
人全ての人が好きだと答えた食べ物の種類数を求めてください。
制約入力は全て整数である。1 \leq N, M \leq 301 \leq K_i \leq M1 \leq A_{ij} \leq
M各 i (1 \leq i \leq N) について A_{i1}, A_{i2}, ..., A_{iK_i}
は全て異なる。入力入力は以下の形式で標準入力から与えられる。N MK_1 A_{11} A_{12}
... A_{1K_1}K_2 A_{21} A_{22} ... A_{2K_2}:K_N A_{N1} A_{N2} ... A_{NK_N}出力N
人全ての人が好きだと答えた食べ物の種類数を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/abc118/submissions/4282150
// 提出ID : 4282150
// 問題ID : abc118_b
// コンテストID : abc118
// ユーザID : xryuseix
// コード長 : 786
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

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, m, i, j;
  cin >> n >> m;
  int syu[m] = {0};
  for (i = 0; i < n; i++) {
    int num, tmp;
    cin >> num;
    for (j = 0; j < num; j++) {
      cin >> tmp;
      syu[--tmp]++;
    }
  }
  int ans = 0;
  for (i = 0; i < m; i++)
    if (syu[i] == n)
      ans++;
  cout << ans << endl;

  return 0;
}
