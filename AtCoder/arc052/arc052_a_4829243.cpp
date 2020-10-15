/*
問題文の引用元：https://atcoder.jp/contests/arc052/tasks/arc052_a
A - 何期生？Editorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 : 高橋くんの通う学校では、創立された年に入学した生徒を 1
期生、その次の年に入学した生徒を 2
期生、といったように呼びます。つまり、(入学した年 - 創立された年) + 1 = n の時に
n 期生と呼ばれることとなります。また、高橋くんの学校内では生徒がみな ID
を持っており、それぞれの ID
には必ず自分の期の数字が含まれることがわかっています。ある生徒の ID が文字列 S
として与えられるとき、その生徒が何期生であるかを回答してください。また、数字が 2
つ連続して並んでいる場合は 2 桁の数字を意味するものとします。
制約S は大文字か小文字のアルファベット、または数字によって構成されるS は 1
個または 2 個の数字を含むS が 2 個の数字を含む場合、数字は連続しているS
に最初に現れる数字は 0 ではない3 ≤ |S| ≤
10入力入力は以下の形式で標準入力から与えられる。S出力出力は 1 行からなる。生徒が
n 期生の時に、出力の 1 行目に n を出力せよ。
// ソースコードの引用元 : https://atcoder.jp/contests/arc052/submissions/4829243
// 提出ID : 4829243
// 問題ID : arc052_a
// コンテストID : arc052
// ユーザID : xryuseix
// コード長 : 1126
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
#define ld long double
#define ll long long int
#define ull unsigned long long int
#define rep(i, n) for (i = 0; i < n; i++)
#define fin(ans) cout << (ans) << endl
#define INF INT_MAX
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

  string s;
  cin >> s;
  int i, ans = 0;
  for (i = 0; i < s.length(); i++) {
    if (s[i] >= '0' && s[i] <= '9') {
      //			cout<<s[i]<<endl;
      if (ans > 0) {
        ans *= 10;
        ans += s[i] - '0';
      } else
        ans = s[i] - '0';
    }
  }
  cout << ans << endl;

  //////////////////////////////////////////////////////
  return 0;
}
