#include<stdio.h>
#include<windows.h>
//ð������ ����i������i+1�������бȽϣ��Ѵ��������arr[i]���С��������arr[i+1]��
int main()
{
	int arr[] = { 54,63,25,15,2 };
	
	printf("ð������ǰ��");
	for (int i = 0; i <= sizeof(arr) / sizeof(arr[0]) - 1; i++){
		
		printf("%d ", arr[i]);
	}
	printf("\n");

	/*printf("��1������\n");
	for (int i = 0; i < (sizeof(arr)/sizeof(arr[0]) - 1); i++){
		if (arr[i] > arr[i + 1]){
			int temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;
		}
	}
	for (int i = 0; i <= sizeof(arr) / sizeof(arr[0]) - 1; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("��2������\n");
	for (int i = 0; i < (sizeof(arr) / sizeof(arr[0]) - 1); i++){
		if (arr[i] > arr[i + 1]){
			int temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;
		}
	}
	for (int i = 0; i <= sizeof(arr) / sizeof(arr[0]) - 1; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("��3������\n");
	for (int i =0; i < (sizeof(arr) / sizeof(arr[0]) - 1); i++){
		if (arr[i] > arr[i + 1]){
			int temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;
		}
	}
	for (int i = 0; i <= sizeof(arr) / sizeof(arr[0]) - 1; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("��4������\n");
	for (int i = 0; i < (sizeof(arr) / sizeof(arr[0]) - 1); i++){
		if (arr[i] > arr[i + 1]){
			int temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;
		}
	}
	for (int i = 0; i <= sizeof(arr) / sizeof(arr[0]) - 1; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");*/

	//�������������иĽ�
	printf("�Ľ������������\n");
	for (int j = 0; j < sizeof(arr) / sizeof(arr[0]) - 1; j++){

		for (int i = 0; i < (sizeof(arr) / sizeof(arr[0]) - 1); i++){
			if (arr[i] > arr[i + 1]){
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}
	for (int i = 0; i <= sizeof(arr) / sizeof(arr[0]) - 1; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;

}