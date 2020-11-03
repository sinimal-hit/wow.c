#include<stdio.h>
#include<windows.h>
//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
int main()
{
	int a[] = { 1, 2, 3, 4 };
	int b[] = { 5,6,1,78,}; 
	int temp;
	for (int i = 0; i <= (sizeof a / sizeof a[0] - 1); i++){
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
	for (int j = 0; j <= (sizeof a / sizeof a[0] - 1); j++){ 
		printf("%d ", a[j]);
	}
	printf("\n");
	for (int x = 0; x <= (sizeof a / sizeof a[0] - 1); x++){
		printf("%d ", b[x]);
	}
	system("pause");
	return 0;
}