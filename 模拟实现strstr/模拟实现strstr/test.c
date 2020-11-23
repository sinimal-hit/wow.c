#include<stdio.h>
#include<windows.h>
const char* mystrstr(const char* str1, const char* str2){
	if (str1 == NULL && str2 == NULL){
		return NULL;
	}
	//定义一个指针指向str1 
	const char* black = str1;
	while (*black != '\0'){
		//两个指针 第一个指针指向black起点的位置， 第二个指针指向str2 和 第一个指针进行判断，
		//解引用值相同的话同时++，知道第二个指针指向‘\0’；那么就相同
		const char* red = black;
		const char* yellow = str2;
		while (*yellow != '\0' && *red != '\0' && *red == *yellow){
			red++;
			yellow++;
		}
		//red = '\0',说明black没有找到相同的元素，yellow ='\0',说明str2的元素在
		//str1 里面，
		if ( *yellow == '\0'){
			return black;
		}
		black++;
	}
	return NULL;
}
int main()
{
	char str1[] = "hdauio";
	char str2[] = "aui";
	const char* p = mystrstr(str1, str2);
	printf("%s\n", p);
	system("pause");
	return 0;
}
