#include<stdio.h>
#include<windows.h>
char* mystrcat(char* str1, const char* str2){
	if (str1 == NULL && str2 == NULL){
		return str1;
	}
	while (*str1 != '\0'){
		str1++;
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
	char str1[] = "hello";
	char str2[] = " world";
	mystrcat(str1, "world");
	printf("%s\n", str1);
	system("pause");
	return 0;
}