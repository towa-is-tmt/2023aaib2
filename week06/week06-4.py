class Solution(object):
    def countSubarrays(self, nums, k):
        ans = 0
        tail  = 0
        M = max(nums)#��̤j��
        MN = 0 #�̤j�ȥX�{�X��?
        for head in range(len(nums)): # �H�Y���� �C�C���k�Y
            if nums[head]==M: MN += 1 #���̤j�� �h�@��
            # �ؼ�:�Ʊ�ۢܡ֡�k �X�k
            while MN>=k:
                #���ڤ@���Y ���줣�X�k���� �]����n��������
                if nums[tail]==M:MN -= 1
                tail += 1 #���ک��k�Y
                #�Y������ tsil�������䦳�X�ӦX�k�����ڦ�m
            ans += tail #�i�H�W�[�o��h�ئX�k�����
        return ans
