/*
問題文の引用元：https://atcoder.jp/contests/abc001/tasks/abc001_4
D - 感雨時刻の整理Editorial
Time Limit : 2 sec / Memory Limit : 64
MB注意この問題は古い問題です。過去問練習をする場合は、新しいAtCoder Beginner
Contestから取り組むことをお勧めしています。
問題文 : 雨の降っていた時刻というのは、降水量と並んで重要です。今、ある 1
日の、雨が降っていた時刻に関するメモが見つかったので、これを整理して、雨の降っていた時刻を調べたいと思います。整理は、以下の規則に従って行います。感雨時間のメモから、その日
1 日の雨の降っていた時刻を時系列順に出す。日付を超えて降っている雨は、 00:00
降り始めや 24:00
降り終わりとして扱われるものとし、日付をまたぐようなメモは入力されない。雨の降り始め・降り終わりはそれぞれ直前・直後の
5 分単位の時刻に丸める。例えば、13:23 に降り始めて 14:01 にやんだ雨は、13:20
から 14:05 まで降っていたということにする。丸めた後の結果において、2
つ以上のメモに書かれていた感雨時刻が重複した場合、1
つの連続した雨とみなす。例えば、11:06 に降り始めて 11:23 にやんだ雨、11:29
に降り始めて 12:03 にやんだ雨、11:48 に降り始めて 12:10 にやんだ雨の 3
つがあった場合、11:05〜11:25、11:25〜12:05、11:45〜12:10 の 3
つの雨であるが、時間がかぶっているところをくっつけて 11:05 から 12:10
まで降っていた、1
つの連続した雨ということにする。メモの内容が入力される時、雨の降っていた時刻を、この規則に合致するよう整理して出力するプログラムを作成してください。入力入力は以下の形式で標準入力から与えられる。NS_1-E_1S_2-E_2:S_N-E_N1
行目には、連続して雨の降っていた時刻の数を表す整数 N\ (1≦N≦30,000)
が与えられる。2 行目から N+1 行目までの N
行で、雨の降り始めの時刻と降り終わりの時刻が与えられる。この中の i\ (1≦i≦N)
行目において、雨が降り始めた時刻 S_i と雨が降り終わった時刻 E_i
がハイフンで区切られて与えられる。時刻 S_i と E_i において時刻は必ず 4
桁の非負整数で与えられる。時刻の上 2 桁が時間 ({\rm hour}) 、下 2 桁が分 ({\rm
minute}) を表す。時刻は 0000 から 2400 まで取り得る。ただし下 2 桁の部分が 59
を超えることはない。S_i が E_i
より前の時刻であることが保証されている。出力雨が降っていた時刻を整理して、降り始めの時刻の早い順番に、降り始めた時刻と降り終わりの時刻をハイフンで区切って出力せよ。その際、連続した
1 つの雨を 1
行に出力し、時刻の形式は入力と同じ形式を用いること。また、出力の末尾には改行を入れること。
// ソースコードの引用元 : https://atcoder.jp/contests/abc001/submissions/7945342
// 提出ID : 7945342
// 問題ID : abc001_4
// コンテストID : abc001
// ユーザID : xryuseix
// コード長 : 2653
// 実行時間 : 364



*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cctype>
#include <climits>
#include <string>
#include <bitset>
#include <cfloat>
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<double> vd;
typedef vector<string> vs;
typedef vector<ll> vll;
typedef vector<pair<int, int>> vpii;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef vector<vector<string>> vvs;
typedef vector<vector<ll>> vvll;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define fin(ans) cout << (ans) << endl
#define STI(s) atoi(s.c_str())
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
#define MATHPI acos(-1)
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
struct io {
  io() {
    ios::sync_with_stdio(false);
    cin.tie(0);
  };
};
const int MOD = 1000000007;
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;

int main(void) {

  int n;
  cin >> n;
  string s;
  vector<pair<int, int>> v;

  rep(i, n) {
    cin >> s;
    int a = STI(s.substr(0, 4));
    int b = STI(s.substr(5, 4));
    if (a % 10 > 5) {
      a /= 10;
      a *= 10;
      a += 5;
    } else if (a % 10 > 0 && a % 10 != 5) {
      a /= 10;
      a *= 10;
    }
    if (b % 10 > 5) {
      b /= 10;
      b *= 10;
      b += 10;
    } else if (b % 10 > 0 && b % 10 != 5) {
      b /= 10;
      b *= 10;
      b += 5;
    }
    if (b % 100 == 60) {
      b += 40;
    }
    v.push_back(mp(a, b));
  }
  Sort(v);

  // cout<<"---------"<<endl;
  // for(int i=0;i<v.size();i++){
  //     cout<<v[i].first<<" "<<v[i].second<<endl;
  // }
  // cout<<"---------"<<endl;

  for (int i = 0; i < v.size() - 1; i++) {
    if (v[i].second >= v[i + 1].first) {
      v[i + 1].first = v[i].first;
      v[i + 1].second = max(v[i].second, v[i + 1].second);
      v.erase(v.begin() + i);
      i--;
    }
  }
  for (int i = 0; i < v.size(); i++) {
    printf("%04d-%04d\n", v[i].first, v[i].second);
  }
}
