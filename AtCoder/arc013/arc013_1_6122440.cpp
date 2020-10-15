/*
問題文の引用元：https://atcoder.jp/contests/arc013/tasks/arc013_1
A - 梱包できるかな？Editorial
Time Limit : 2 sec / Memory Limit : 64 MB
問題文 :
この春から新生活を始める今城くんは引越しを考えています。そのため、自分の荷物をダンボールに梱包しなければなりませんが、今城くんの手元には１つのダンボールしかありません。今城くんはこのサイズ
N×M×L のダンボールに、サイズ P×Q×R
の荷物をできるだけたくさん詰め込みたいです。彼はこのダンボールにどれだけ荷物を詰め込むことができるでしょうか。彼はとても几帳面な性格なので、荷物を全て同じ向きで梱包します。さらに、今城くんは荷物が運送中に壊れることを防ぐため、斜めに入れることはありません。つまり、荷物の少なくとも1つの面が、ダンボールか他の荷物のある面にぴったりとくっつくように梱包します。ただし、荷物を横に90度倒すことはできます。入力入力は以下の形式で標準入力から与えられる。N
M LP Q R1 行目には整数 N 、 M 、L が与えられる。N
は今城くんが持っているダンボールのタテの長さです。M
は今城くんが持っているダンボールのヨコの長さです。L
は今城くんが持っているダンボールの高さです。1≦N,M,L≦100
であることは保証されています。2 行目には整数 P 、 Q 、R が与えられる。P
は今城くんが持っている荷物のタテの長さです。Q
は今城くんが持っている荷物のヨコの長さです。R
は今城くんが持っている荷物の高さです。1≦P,Q,R≦100
であることは保証されています。出力今城くんがダンボールに詰め込むことができる荷物の数の最大値を
1 行で出力すること。また、出力の最後には改行をいれること。
// ソースコードの引用元 : https://atcoder.jp/contests/arc013/submissions/6122440
// 提出ID : 6122440
// 問題ID : arc013_1
// コンテストID : arc013
// ユーザID : xryuseix
// コード長 : 2530
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
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
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

template <class BidirectionalIterator>
bool generic_next_permutation(BidirectionalIterator first,
                              BidirectionalIterator last) {
  //要素が０又は１の場合終了
  if (first == last)
    return false;
  BidirectionalIterator second = first;
  ++second;
  if (second == last)
    return false;
  BidirectionalIterator i = last;
  --i; // itを最後尾にセット
  while (true) {
    BidirectionalIterator prev_i = i;
    if (*(--i) < *prev_i) {
      BidirectionalIterator j = last;
      while (!(*i < *--j))
        ;
      swap(*i, *j);
      reverse(prev_i, last);
      return true;
    }
    if (i == first) {
      reverse(first, last);
      return false;
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////

  int a[3], b[3];
  rep(i, 3) cin >> a[i];
  rep(i, 3) cin >> b[i];
  int ans = 0;
  sort(b, b + 3);
  do {
    // cout<<b[0]<<" "<<b[1]<<" "<<b[2]<<endl;
    if (a[0] < b[0])
      continue;
    if (a[1] < b[1])
      continue;
    if (a[2] < b[2])
      continue;
    ans = max(ans, (a[0] / b[0]) * (a[1] / b[1]) * (a[2] / b[2]));
  } while (generic_next_permutation(b, b + 3));
  cout << ans << endl;

  //////////////////////////////////////////////////////
  return 0;
}
