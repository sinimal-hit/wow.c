#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
#include<string.h>
//���ֲ��ң�����һ�������������飬������0�ź����һλ��ʼ���壬
//�ٰ��м��������ã����бȽϡ�
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int left = 0; int right = sizeof(arr) / sizeof(arr[1]) - 1;
	int input;
	int mid = (left + right) / 2;
	printf("��������Ҫ���ҵ�����");
	scanf("%d", &input);
	while (left <= right){
		if (input <arr[mid]){
			right = mid - 1;
		}
		else if (input>arr[mid]){
			left = mid + 1;
		}
		else {
			printf("��ϲ���ҵ��ˣ�%d", mid);
			break;
		}
	}
	system("pause");
	return 0;
}



//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	int temp  ;
//	printf("������Ҫ���ҵ���:");
//	scanf("%d",&temp);
//	int left = 0;
//	int right = sizeof(arr)/sizeof(arr[1]) - 1;
//	while (left <= right){
//		int mid = (left + right) / 2;
//		if (temp<arr[mid]){ 
//			right = mid - 1;
//		}
//		else if (temp>arr[mid]){
//			left = mid + 1;
//		}
//		else{
//			printf("�ҵ��˶�Ӧ��Ԫ��,�±�Ϊ: %d\n", mid);
//			break;
//		}
//	}
//	
//	system("pause");
//	return 0;
//
//
//
//}