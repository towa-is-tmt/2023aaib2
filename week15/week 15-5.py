class Solution:
    def equalSubstring(self, s: str, t: str, maxCost: int) -> int:
        ans = 0
        N = len(s)
        j = 0 #����
        for i in range(N): #�Y�Oi ����python
            maxCost-=abs(ord(s[i]) - ord(t[i]))
            while maxCost <0: #�w�⤣�� �ܭt��
                maxCost += abs(ord(s[j]) - ord(t[j]))
                j += 1 #����j ���k�Y
            ans = max(ans, i-j+1) #�Yi -

        return ans
