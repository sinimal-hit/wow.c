#include<stdio.h>
#include<windows.h>
#include<string.h>

int main()
{
	char str1[] = "haha";
	char str4[] = "haha";
	int rrip = strcmp(str1,str4);
	printf("%d\n", rrip);
	if (str1 == str4){
		printf("���\n");
	}
	else{
		printf("�����\n");
	}
	char* str2 = "haha";
	char* str3 = "haha";
	int temp = strcmp(str2, str3);
	printf("%d\n", temp);
	if (str2 == str3){
		printf("���\n");
	}
	else{
		printf("�����\n");
	}
	system("pause");
	return 0;
}