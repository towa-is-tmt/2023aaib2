class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int N = s.length(); //c++���r�ꪺ����
        int one  = 0 ; // s�̭� ���X��1 �����C�C�ƥX��
        for(int i=0; i<N; i++){ //c/c++�j��(����A��)
            if(s[i] == '1') one += 1; //if(�P�_) �]����A��

        }
        //printf("N:%d one:%d " , N, one); // ���L�X�� ���X��1
        string ans; // �Ψө񵪮�
        for(int i=0; i<one-1; i++ ) ans += '1';//���X��1�n��e��?
        for(int i=0; i<N-one; i++)ans +='0'; //���X��0�n�񤤶�?
        ans += '1'; //�̫��@��1
        return ans;
    }
