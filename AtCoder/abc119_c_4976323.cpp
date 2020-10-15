/*
引用元：https://atcoder.jp/contests/abc119/tasks/abc119_c
C - Synthetic KadomatsuEditorial
// ソースコードの引用元 : https://atcoder.jp/contests/abc119/submissions/4976323
// 提出ID : 4976323
// 問題ID : abc119_c
// コンテストID : abc119
// ユーザID : xryuseix
// コード長 : 6691
// 実行時間 : 3



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

  int size, i, j, k, l, m, o, r, p, q, s, t, mp = 0, minmp = 1000000000, n,
                                             a[3], sum;
  vector<int> ki[4];
  vector<int>::iterator it;
  cin >> n >> a[0] >> a[1] >> a[2];
  int abcd[n];
  bool ch;
  for (i = 0; i < n; i++)
    cin >> abcd[i];
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      for (k = 0; k < 4; k++) {
        if (n == 3) {
          mp = 0;
          ch = true;
          ki[i].push_back(abcd[0]);
          ki[j].push_back(abcd[1]);
          ki[k].push_back(abcd[2]);
          for (r = 0; r < 3; r++) {
            size = ki[r].size();
            if (size == 0) {
              ch = false;
              break;
            }
            if (size == 1) {
              it = ki[r].begin();
              mp += abs(a[r] - *it);
            } else {
              mp += (size - 1) * 10;
              sum = 0;
              for (it = ki[r].begin(); it != ki[r].end(); it++)
                sum += *it;
              mp += abs(a[r] - sum);
            }
          }
          ki[i].clear();
          ki[j].clear();
          ki[k].clear();
          if (!ch)
            continue;
          if (mp < minmp)
            minmp = mp;
        } else {
          for (l = 0; l < 4; l++) {
            if (n == 4) {
              mp = 0;
              ch = true;
              ki[i].push_back(abcd[0]);
              ki[j].push_back(abcd[1]);
              ki[k].push_back(abcd[2]);
              ki[l].push_back(abcd[3]);
              for (r = 0; r < 3; r++) {
                size = ki[r].size();
                if (size == 0) {
                  ch = false;
                  break;
                }
                if (size == 1) {
                  it = ki[r].begin();
                  mp += abs(a[r] - *it);
                } else {
                  mp += (size - 1) * 10;
                  sum = 0;
                  for (it = ki[r].begin(); it != ki[r].end(); it++)
                    sum += *it;
                  mp += abs(a[r] - sum);
                }
              }
              ki[i].clear();
              ki[j].clear();
              ki[k].clear();
              ki[l].clear();
              if (!ch)
                continue;
              if (mp < minmp)
                minmp = mp;
            } else {
              for (m = 0; m < 4; m++) {
                if (n == 5) {
                  mp = 0;
                  ch = true;
                  ki[i].push_back(abcd[0]);
                  ki[j].push_back(abcd[1]);
                  ki[k].push_back(abcd[2]);
                  ki[l].push_back(abcd[3]);
                  ki[m].push_back(abcd[4]);
                  for (r = 0; r < 3; r++) {
                    size = ki[r].size();
                    if (size == 0) {
                      ch = false;
                      break;
                    }
                    if (size == 1) {
                      it = ki[r].begin();
                      mp += abs(a[r] - *it);
                    } else {
                      mp += (size - 1) * 10;
                      sum = 0;
                      for (it = ki[r].begin(); it != ki[r].end(); it++)
                        sum += *it;
                      mp += abs(a[r] - sum);
                    }
                  }
                  ki[i].clear();
                  ki[j].clear();
                  ki[k].clear();
                  ki[l].clear();
                  ki[m].clear();
                  if (!ch)
                    continue;
                  if (mp < minmp)
                    minmp = mp;
                } else {
                  for (o = 0; o < 4; o++) {
                    if (n == 6) {
                      mp = 0;
                      ch = true;
                      ki[i].push_back(abcd[0]);
                      ki[j].push_back(abcd[1]);
                      ki[k].push_back(abcd[2]);
                      ki[l].push_back(abcd[3]);
                      ki[m].push_back(abcd[4]);
                      ki[o].push_back(abcd[5]);
                      for (r = 0; r < 3; r++) {
                        size = ki[r].size();
                        if (size == 0) {
                          ch = false;
                          break;
                        }
                        if (size == 1) {
                          it = ki[r].begin();
                          mp += abs(a[r] - *it);
                        } else {
                          mp += (size - 1) * 10;
                          sum = 0;
                          for (it = ki[r].begin(); it != ki[r].end(); it++)
                            sum += *it;
                          mp += abs(a[r] - sum);
                        }
                      }
                      ki[i].clear();
                      ki[j].clear();
                      ki[k].clear();
                      ki[l].clear();
                      ki[m].clear();
                      ki[o].clear();
                      if (!ch)
                        continue;
                      if (mp < minmp)
                        minmp = mp;
                    } else {
                      for (p = 0; p < 4; p++) {
                        if (n == 7) {
                          mp = 0;
                          ch = true;
                          ki[i].push_back(abcd[0]);
                          ki[j].push_back(abcd[1]);
                          ki[k].push_back(abcd[2]);
                          ki[l].push_back(abcd[3]);
                          ki[m].push_back(abcd[4]);
                          ki[o].push_back(abcd[5]);
                          ki[p].push_back(abcd[6]);
                          for (r = 0; r < 3; r++) {
                            size = ki[r].size();
                            if (size == 0) {
                              ch = false;
                              break;
                            }
                            if (size == 1) {
                              it = ki[r].begin();
                              mp += abs(a[r] - *it);
                            } else {
                              mp += (size - 1) * 10;
                              sum = 0;
                              for (it = ki[r].begin(); it != ki[r].end(); it++)
                                sum += *it;
                              mp += abs(a[r] - sum);
                            }
                          }
                          ki[i].clear();
                          ki[j].clear();
                          ki[k].clear();
                          ki[l].clear();
                          ki[m].clear();
                          ki[o].clear();
                          ki[p].clear();
                          if (!ch)
                            continue;
                          if (mp < minmp)
                            minmp = mp;
                        } else {
                          for (t = 0; t < 4; t++) {
                            mp = 0;
                            ch = true;
                            ki[i].push_back(abcd[0]);
                            ki[j].push_back(abcd[1]);
                            ki[k].push_back(abcd[2]);
                            ki[l].push_back(abcd[3]);
                            ki[m].push_back(abcd[4]);
                            ki[o].push_back(abcd[5]);
                            ki[p].push_back(abcd[6]);
                            ki[t].push_back(abcd[7]);
                            for (r = 0; r < 3; r++) {
                              size = ki[r].size();
                              if (size == 0) {
                                ch = false;
                                break;
                              }
                              if (size == 1) {
                                it = ki[r].begin();
                                mp += abs(a[r] - *it);
                              } else {
                                mp += (size - 1) * 10;
                                sum = 0;
                                for (it = ki[r].begin(); it != ki[r].end();
                                     it++)
                                  sum += *it;
                                mp += abs(a[r] - sum);
                              }
                            }
                            ki[i].clear();
                            ki[j].clear();
                            ki[k].clear();
                            ki[l].clear();
                            ki[m].clear();
                            ki[o].clear();
                            ki[p].clear();
                            ki[t].clear();
                            if (!ch)
                              continue;
                            if (mp < minmp)
                              minmp = mp;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }

  cout << minmp << endl;

  return 0;
}
