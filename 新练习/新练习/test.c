#include<stdio.h>
#include<windows.h>
int main()
{
	int arr[3][3] = {0};
	for (int row = 0; row < 3;row++){
		for (int col = 0; col < 3; col++){
			arr[row][col] = 1;
			printf("%d ", arr[row][col]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}