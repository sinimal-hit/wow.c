#include<stdio.h>
#include<windows.h>
//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
int isFun(char arr1[],char arr2[] ){
	int length = strlen(arr1);
	for (int i = 0; i < length; i++){
		for (int j = 0; j < length-1; j++){
			int temp = arr1[j];
			arr1[j] = arr1[j + 1];
			arr1[j + 1] = temp;

		}
		if (strcmp(arr1,arr2)== 0){
			return 1;
		}
		
	}
	return 0;
	
}

int main()
{
	char arr1[] = "AABCD";
	char arr2[] = "BCDAA";
	printf("%d\n",isFun(arr1, arr2));
	system("pause");
	return 0;
}