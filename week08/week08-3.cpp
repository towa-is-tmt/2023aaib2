#include <stdio.h>
#include <string.h>
int main()

{
	printf("請輸入你的名子:");
	char s1[30];///字串宣告 也可以給值
	scanf("%s",s1);
	char s2[30]="你好"; ///可以字串宣告時 給值
	printf("%s %s!",s1,s2);

	s1[0]='A'; ///把名字的最前面字母 變成'A'字母
    printf("你的名子被改成 %s\n", s1);

    printf("你的名字長度是 %d\n", strlen(s1));


}

