/*
問題文の引用元：https://atcoder.jp/contests/abc015/tasks/abc015_3
C - 高橋くんのバグ探しEditorial
Time Limit : 2 sec / Memory Limit : 256 MB
問題文 :
高橋くんは上司からあるアンケートアプリにバグがあるかどうか調べて欲しいと頼まれました。このアプリは、ユーザに選択肢が
K 個ある質問を N
回答えさせることにより、ユーザの性格を判定します。質問や選択肢はユーザの回答によって変わらず一定であり、ユーザは全ての質問にちょうど
1
つの選択肢を選ぶことで、結果を閲覧できます。全ての選択肢はある整数値を持ちます。このアプリは、ユーザによって選ばれた、全ての回答がそれぞれ保持する整数値の排他的論理和（XOR）を使って結果を算出します。計算の最後でこの値が
0
になってしまうと、結果が表示されずバグが発生してしまいます。あなたには全ての選択肢が持つ整数値が与えられるので、高橋くんの代わりに、ユーザの選択によってはバグが発生する可能性があるかどうかを判定してください。入力入力は以下の形式で標準入力から与えられる。N
KT_{1,1} T_{1,2} … T_{1,K}T_{2,1} T_{2,2} … T_{2,K}:T_{N,1} T_{N,2} … T_{N,K}1
行目には、質問の個数を表す整数 N (1≦N≦5)
と、それぞれの質問に対する選択肢の個数を表す整数 K (1≦K≦5)
が、スペース区切りで与えられる。2 行目から N
行は、選択肢が保持する整数値が、スペース区切りで与えられる。 このうち、 i 行目の
j 番目にある整数 T_{i,j} (0≦T_{i,j}≦127)  は、 i 番目の質問に対する j
番目の選択肢が保持する整数値である。出力バグが発生することがある場合はFound、そうでなければNothingを
1 行で出力せよ。出力の末尾には改行をいれること。
// ソースコードの引用元 : https://atcoder.jp/contests/abc015/submissions/4996826
// 提出ID : 4996826
// 問題ID : abc015_3
// コンテストID : abc015
// ユーザID : xryuseix
// コード長 : 1412
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

vector<vector<int>> v(6, vector<int>(6, -1));
int n, k;
bool ch = true;

int dfs(int xsum, int depth) {
  int i;
  //	cout<<v[depth][0]<<" "<<xsum<<" "<<depth<<endl;
  if (depth == n) {
    if (xsum == 0)
      ch = false;
    return 0;
  } else {
    if (xsum == -1) {
      for (i = 0; i < k; i++) {
        dfs(v[depth][i], depth + 1);
      }
    } else {
      for (i = 0; i < k; i++) {
        dfs(xsum ^ v[depth][i], depth + 1);
      }
    }
  }
  return 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  int i, j;
  cin >> n >> k;
  rep(i, n) rep(j, k) cin >> v[i][j];

  dfs(-1, 0);
  if (!ch)
    cout << "Found" << endl;
  else
    cout << "Nothing" << endl;

  //////////////////////////////////////////////////////
  return 0;
}
