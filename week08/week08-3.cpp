#include <stdio.h>
#include <string.h>
int main()

{
	printf("�п�J�A���W�l:");
	char s1[30];///�r��ŧi �]�i�H����
	scanf("%s",s1);
	char s2[30]="�A�n"; ///�i�H�r��ŧi�� ����
	printf("%s %s!",s1,s2);

	s1[0]='A'; ///��W�r���̫e���r�� �ܦ�'A'�r��
    printf("�A���W�l�Q�令 %s\n", s1);

    printf("�A���W�r���׬O %d\n", strlen(s1));


}

