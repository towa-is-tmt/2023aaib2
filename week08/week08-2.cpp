#include <stdio.h>
int main()
{
	printf("請輸入你的名子:");
	char s[30];
	scanf("%s",s); ///不用加&因為已經$s有s了
	printf("%s 你好!",s);


}
