#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<assert.h>
void* mymemcopy(void* dest, const void* sor, size_t num){
	assert(dest != NULL && sor != NULL);
	char* pdest = (char*)dest;
	char* psor = (char*)sor;
	for (size_t i = 0; i < num; i++){
		*(pdest + i) = *(psor + i);
	}
	return dest;
}
int main()
{
	int arr1[] = { 0 };
	int arr2[] = { 1, 34, 5, 6 };
	mymemcopy(arr1, arr2, 16);
	for (int i = 0; i < 4;i++)
	printf("%d ", arr1[i]);
	system("pause");
	return 0;
}