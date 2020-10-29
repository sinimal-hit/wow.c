#include<stdio.h>
#include<windows.h>
//int strLen( char arr[]){
//	int count = 0;
//	for (int i = 0;arr[i] != '\0'; i++){
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char str[] = "anfkma";
//	
//	printf("%d\n", strLen(str));
//	system("pause");
//	return 0;
//
//}
int strLen(char str[]){
	if (str[0] == '\0'){
		return 0;
	}
	return 1 + strLen(str + 1);
}
int main()
{
	char str[] = "anfkma";
	
	printf("%d\n", strLen(str));
	system("pause");
	return 0;

}



