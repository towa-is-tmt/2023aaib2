///�n�{��float�B�I�� (floating point number)
#include <stdio.h>
int main()
{
    float pi = 3.141592653589793238462643383279;
    double pi2 = 3.141592653589793238462643383279;
    printf("float %f\n", pi );
    printf("double %f\n", pi2);
    printf("float 10��: %10f\n", pi);
    printf("double 10��: %10f\n", pi2);
    printf("float 10��: %20.18f\n", pi);
    printf("double 10��: %20.18f\n", pi2);
}


///��X
///float 3.141593
///double 3.141593
///float 10��: 3.141593
///double 10��: 3.141593
///float 10��: 3.141592741012573220
///double 10��: 3.141592741012573220
