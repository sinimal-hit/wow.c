#include<stdio.h>
#include<windows.h>
//дһ����������������һ���ַ��������ݡ�
//�ݹ�о���̫�� �ƣ�
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