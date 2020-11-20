#include<stdio.h>
#include<windows.h>
char* mystrcpy(char* str1, const char* str2){
	if (str1 == NULL || str2 == NULL){
		return 0;
	}
	while (*str2 != '\0'){
		*str1 = *str2;
		str1++;
		str2++;
	}
	*str1 = '\0';
	return str1;
}
int main()
{
	char str1[] = "";
	char str2[] = "hellow";
	mystrcpy(str1, str2);
	printf("%s ", str1);
	system("pause");
	return 0;
}