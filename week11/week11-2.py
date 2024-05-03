#week11-2 用篩子法
#以前的寫法 要30萬*30萬 = 9億次
#用篩子法 只要30萬+殺掉的那些格子 快了20倍

BOUND = 300000 #30萬以下有多少個質數
table = [True] * BOUND
ans = 0
for i in range(2, BOUND):
  if table[i] == True:
   # print(i, end=' ')
    ans += 1 #找到一個質數就+1
    for k in range(i*i, BOUND, i):
      table[k] = False
print('質數有:', ans, '個')
