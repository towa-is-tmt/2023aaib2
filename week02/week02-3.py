class Solution:
    def maximumOddBinaryNumber(self, s: str) -> str:
        N = len(s)
        one = 0 # s�̭��A���X��1? �����C�C�ƥX��
        for c in s: #�w��r�� s�̪��C�Ӧr��c �v�@�ˬd
            if c=='1': one += 1 #�p�G�O1���� one �N +1
        return '1'*(one -1 ) + '0'*(N-one) +'1'
