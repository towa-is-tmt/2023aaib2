///week10-1week10-1�禡�I�s�禡Recrusion���jN���h C
///�H�e�O��for�j��g,���ѥ�[�禡�I�s�禡]�Ӽg
#include <stdio.h>
int func(int n){
    if(n==1) return 1; ///�פ����,��[�ƾ��k�Ǫk]N=1����
    return n * func(n-1);
}
int main()
{
    printf("�п�JN:");
    int N;
    scanf("%d",&N);
    int ans = func(N);
    printf("%d",ans);

}
