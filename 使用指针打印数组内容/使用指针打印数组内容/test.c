#include<stdio.h>
#include<windows.h>

//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
//arr��һ������һά���顣
//ָ��ָ���һ�������±꣬Ȼ��ָ��+1����ӡ����ڶ���Ԫ��
void func(int* arr,int temp){

	for (int i = 0;i<= temp; i++){
		printf("%d\n", *arr+i);
	}
}
int main()
{
	int arr[] = { 1,2,3,4 };
	int temp = sizeof(arr) / sizeof(arr[0]) - 1;
	func(arr, temp);
	system("pause");
	return 0;
}
