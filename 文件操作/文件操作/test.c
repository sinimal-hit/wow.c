#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
#include <string.h>
#include <errno.h>
int main()
{
	//���ļ�fopen()
	FILE* f = fopen("D:\\xixix.txt","w+");
	if (f == NULL) {
		// printf("�ļ���ʧ��! errno = %d, %s\n", errno, strerror(errno));
		perror("�ļ���ʧ��!");
		system("pause");
		return 1;
	}
	
	/*char buf[1024] = { 0 };
	int n = fread(buf, 1, 1024, f);
	printf("%s\n", buf);*/
	char buf[1024] = "hahaha";
	int n = fwrite(buf, 1, strlen(buf), f);
	if (n < strlen(buf)) {
	perror("fwrite");
	}
	fclose(f);
	system("pause");
	return 0;
}