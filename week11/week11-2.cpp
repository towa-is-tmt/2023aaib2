///week11-2 �οz�l�k
///�H�e���g�k �n30�U*30�U = 9����
///�οz�l�k �u�n30�U+���������Ǯ�l �֤F20��


#include <stdio.h>
int table[20000] = {};
int main()
{
    int BOUND =20000, ans = 0;
    ///int table[300000] = {}; ///����l ����0
    for(int i=2; i<BOUND; i++){
        if(table[i]==0){ ///�ٯd�� �S�Q����
            ans++;
            for(int k = i*i; k<BOUND; k+=i){
                table[k] = -1; ///�����o�S��
            }
        }
    }
    printf("��Ʀ�: %d ��\n", ans);
}
