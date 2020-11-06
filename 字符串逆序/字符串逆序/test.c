#include<stdio.h>
#include<windows.h>
//写一个函数，可以逆序一个字符串的内容。
//递归感觉不太会 淦；
void func(char* arr,int temp){
	for (int i = temp; i > 0; i--){
		printf("%c", *arr + i);
	}

}
int main()
{
	char arr[] = "abcd";
	int temp = sizeof(arr) / sizeof(arr[0]) - 1;
	func(arr, temp);
	system("pause");
	return 0;
}