#include <stdio.h>
int main()
{
    int n =2;
    int a[2][2] = {{10,20}, {11,22} };
    int b[2][2] = {{2,1}, {3,2} };
    int c[2][2];
    ///�W�g����part1 Ū��� ���]�n �N���ΦAŪ
    /// part 1 �|Ū a[i][j] ���]�n �N���ΦAŪ
    /// part 2 �|Ū b[i][j] ���]�n �N���ΦAŪ
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int * p1 = &a[i][j];
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }
}

