#include<stdio.h>
#include<windows.h>
#include<assert.h>
#include<string.h>
int mystrcmp(const char* str1, const char* str2){
	assert(str1 != NULL && str2 != NULL);
	while (*str1 != '\0' && *str2 != '\0'){
		if (*str1 > *str2){
			return 1;
		}
		else if (*str1 < *str2){
			return -1;
		}
		else {
			str1++;
			str2++;
		}
	}
	//������û�д�������Ҫ�ж�str1 ��ָ��'\0',����str2��ָ��'\0';
	if (*str1 > *str2){
		return 1;
	}
	else if (*str1 < *str2){
		return -1;
	}
	else {
		return 0;
	}
}
int main()
{
	char str1[] = "hehehe";
	char str2[] = "hehe";
	int ret = mystrcmp(str1, str2);
	printf("%d\n", ret);
	system("pause");
	return 0;
}