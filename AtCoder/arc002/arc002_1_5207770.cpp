/*
問題文の引用元：https://atcoder.jp/contests/arc002/tasks/arc002_1
A - うるう年Editorial
Time Limit : 2 sec / Memory Limit : 64 MB
問題文 : 高橋君は忘れっぽい性格なので、うるう年は 2 月 29
日の存在を毎回忘れてしまいます。そこで、自動でうるう年かどうかをコンピュータに教えてもらえるようにしたいと思います。入力として与えられた年がうるう年かそうでないかを判断しなさい。ただし、うるう年は以下の規則で決定します。規則
1：4 で割り切れる年はうるう年である。規則 2：100
で割り切れる年をうるう年ではない。規則 3：400
で割り切れる年はうるう年である。規則 4：規則 1〜3
のいずれも満たさない場合は，うるう年ではありません。ただし、規則 1 〜 3
の内に複数満たすものがあれば後の規則（数字の大きな規則）が優先されます。例えば、2000
年は規則 3 を満たすのでうるう年です。2100 年は規則 2 を満たしますが、規則 3
を満たさないのでうるう年ではありません。入力入力は以下の形式で標準入力から与えられる。Y年を表す整数
Y(1000 ≦ Y ≦ 2999) が 1 行で与えられる。出力与えられた年がうるう年ならば
YES、そうでなければ NO を標準出力に 1
行で出力せよ。なお、最後には改行を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/arc002/submissions/5207770
// 提出ID : 5207770
// 問題ID : arc002_1
// コンテストID : arc002
// ユーザID : xryuseix
// コード長 : 1153
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
#include <bits/stdc++.h>
#define ld long double
#define ll long long int
#define ull unsigned long long int
#define rep(i, n) for (i = 0; i < n; i++)
#define fin(ans) cout << (ans) << endl
#define INF INT_MAX
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define vvs vector<vector<string>>
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
const long long LLINF = 1LL << 60;
// set<int>::iterator it;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  int y;
  cin >> y;
  if (y % 400 == 0)
    cout << "YES" << endl;
  else if (y % 100 == 0)
    fin("NO");
  else if (y % 4 == 0)
    fin("YES");
  else
    cout << "NO" << endl;

  //////////////////////////////////////////////////////
  return 0;
}
