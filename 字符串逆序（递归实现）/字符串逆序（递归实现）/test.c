//编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
//int main(){
//	char ch[20], t;
//	printf("please input:");
//	scanf("%s", &ch);
//	int len = strlen(ch);
//	for (int i = 0; i <= len/2; i++){
//		t = ch[i];
//		ch[i] = ch[len - i - 1];
//		ch[len - i - 1] = t;
//
//	}
//	printf("after output :%s\n", ch);
//	system("pause");
//	return 0;
//}

int reverse_string(char * string){
	if (string[0] =='\0'){
		return 0;
	}
	reverse_string(string + 1);
	printf("%c", *string);
}
int main()
{
	char str[] = "zxcvb";
	reverse_string(str);
	printf("\n");
	system("pause");
	return 0;

}