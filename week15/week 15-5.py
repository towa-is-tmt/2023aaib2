class Solution:
    def equalSubstring(self, s: str, t: str, maxCost: int) -> int:
        ans = 0
        N = len(s)
        j = 0 #尾巴
        for i in range(N): #頭是i 先用python
            maxCost-=abs(ord(s[i]) - ord(t[i]))
            while maxCost <0: #預算不夠 變負的
                maxCost += abs(ord(s[j]) - ord(t[j]))
                j += 1 #尾巴j 往右縮
            ans = max(ans, i-j+1) #頭i -

        return ans
