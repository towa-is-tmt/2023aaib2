#weekl1-1 use python ���n�h�j �~����20000�ӽ��

def isPrime(n):
  for i in range(2,n):
    if n%i==0: return False
  return True

BOUND = 30000
ans = 0
for i in range(2,BOUND):
  if isPrime(i):
    print(i, end=' ')
    ans += 1
print()
print('��Ʀ�:', ans, '��')
