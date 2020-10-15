/*
引用元：https://atcoder.jp/contests/abc120/tasks/abc120_d
D - Decayed BridgesEditorial
// ソースコードの引用元 : https://atcoder.jp/contests/abc120/submissions/6200821
// 提出ID : 6200821
// 問題ID : abc120_d
// コンテストID : abc120
// ユーザID : xryuseix
// コード長 : 3350
// 実行時間 : 170



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
#define pb(n) push_back(n)
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

class UnionFind {
public:
  //親の番号を格納する。親だった場合は-(その集合のサイズ)
  vector<int> Parent;
  //作るときはParentの値を全て-1にする
  //こうすると全てバラバラになる
  UnionFind(int N) { Parent = vector<int>(N, -1); }
  // Aがどのグループに属しているか調べる
  int root(int A) {
    if (Parent[A] < 0)
      return A;
    return Parent[A] = root(Parent[A]);
  }
  //自分のいるグループの頂点数を調べる
  int size(int A) {
    return -Parent[root(A)]; //親をとってきたい]
  }
  // AとBをくっ付ける
  bool connect(int A, int B) {
    // AとBを直接つなぐのではなく、root(A)にroot(B)をくっつける
    A = root(A);
    B = root(B);
    if (A == B) {
      //すでにくっついてるからくっ付けない
      return false;
    }
    //大きい方(A)に小さいほう(B)をくっ付けたい
    //大小が逆だったらひっくり返しちゃう。
    if (size(A) < size(B))
      swap(A, B);
    // Aのサイズを更新する
    Parent[A] += Parent[B];
    // Bの親をAに変更する
    Parent[B] = A;
    return true;
  }
};

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(0);
  //////////////////////////////////////////////////////
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++) {
    cin >> A[i] >> B[i];
    A[i]--;
    B[i]--;
  }
  vector<long long> ans(M);
  ans[M - 1] = (long long)N * (N - 1) / 2;
  UnionFind Uni(N);
  for (int i = M - 1; i >= 1; i--) {
    ans[i - 1] = ans[i];
    //繋がってなかったのが繋がった時
    if (Uni.root(A[i]) != Uni.root(B[i])) {
      ans[i - 1] -= (long long)Uni.size(A[i]) * Uni.size(B[i]);
      Uni.connect(A[i], B[i]);
    }
  }
  for (int i = 0; i < M; i++) {
    cout << ans[i] << endl;
  }

  //////////////////////////////////////////////////////
  return 0;
}
