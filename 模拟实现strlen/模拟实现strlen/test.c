#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
int mystrlen(const char* str){
	if (str == NULL){
		return 0;
	}
	int len = 0;
	while (str[len] != '\0'){
		len++;
	}
	return len;
}
int main()
{
	char str[] = "hellow";
	int ret = mystrlen(str);
	printf("%d\n", ret);
	system("pause");
	return 0;
}