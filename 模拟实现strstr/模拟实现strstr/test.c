#include<stdio.h>
#include<windows.h>
const char* mystrstr(const char* str1, const char* str2){
	if (str1 == NULL && str2 == NULL){
		return NULL;
	}
	//����һ��ָ��ָ��str1 
	const char* black = str1;
	while (*black != '\0'){
		//����ָ�� ��һ��ָ��ָ��black����λ�ã� �ڶ���ָ��ָ��str2 �� ��һ��ָ������жϣ�
		//������ֵ��ͬ�Ļ�ͬʱ++��֪���ڶ���ָ��ָ��\0������ô����ͬ
		const char* red = black;
		const char* yellow = str2;
		while (*yellow != '\0' && *red != '\0' && *red == *yellow){
			red++;
			yellow++;
		}
		//red = '\0',˵��blackû���ҵ���ͬ��Ԫ�أ�yellow ='\0',˵��str2��Ԫ����
		//str1 ���棬
		if ( *yellow == '\0'){
			return black;
		}
		black++;
	}
	return NULL;
}
int main()
{
	char str1[] = "hdauio";
	char str2[] = "aui";
	const char* p = mystrstr(str1, str2);
	printf("%s\n", p);
	system("pause");
	return 0;
}
