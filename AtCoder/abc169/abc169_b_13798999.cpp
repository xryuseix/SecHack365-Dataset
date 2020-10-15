問題文の引用元：https: // atcoder.jp/contests/abc169/tasks/abc169_b
B - Multiplication 2
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 200 点
問題文 : N 個の整数 A_1,...,A_N が与えられます。A_1 \times ... \times A_N を求めてください。ただし、結果が 10^{
  18} を超える場合は、代わりに -1 を出力してください。
制約2 \leq N \leq 10^50 \leq A_i \leq 10^{
  18}入力は全て整数である。入力入力は以下の形式で標準入力から与えられる。NA_1 ... A_N出力値 A_1 \times ... \times A_N を整数として出力せよ。ただし、この値が 10^{
  18} を超える場合は、代わりに -1 を出力せよ。



n=int(input())
s = input().split(' ')
ans=1
for i in s:
    if int(i) == 0:
        print(0)
        exit()
for i in s:
    ans=ans*int(i)
    if(ans>1000000000000000000):
        print(-1)
        exit()
print(ans)
