#week11-2 �οz�l�k
#�H�e���g�k �n30�U*30�U = 9����
#�οz�l�k �u�n30�U+���������Ǯ�l �֤F20��

BOUND = 300000 #30�U�H�U���h�֭ӽ��
table = [True] * BOUND
ans = 0
for i in range(2, BOUND):
  if table[i] == True:
   # print(i, end=' ')
    ans += 1 #���@�ӽ�ƴN+1
    for k in range(i*i, BOUND, i):
      table[k] = False
print('��Ʀ�:', ans, '��')
