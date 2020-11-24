#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct person{
	char name[1024];
	char phone[1024];
}people;
struct Addressbook{
	struct person people[1024];
	int size;
}addressbook;
int menu(){
	printf("=====================\n");
	printf(" 1. ������ϵ��\n");
	printf(" 2. ������ϵ��\n");
	printf(" 3. ɾ����ϵ��\n");
	printf(" 4. �޸���ϵ��\n");
	printf(" 5. �鿴������ϵ��\n");
	printf(" 6. ���������ϵ��\n");
	printf(" 0. �˳�\n");
	printf("=====================\n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
//ͨѶ¼��ʼ��
void init(struct Addressbook* addressbook){
	addressbook->size = 0;

}
void addperson(struct Addressbook* addressbook){//������ϵ��
	printf("������ϵ�ˣ�\n");
	if (addressbook->size >= 1024){
		printf("ͨѶ¼������,������ϵ��ʧ��");
		return;
	}
	struct person* p = &addressbook->people[addressbook->size];
	printf("��������ϵ��������");
	scanf("%s", p->name);
	printf("����������ϵ�˵ĵ绰: ");
	scanf("%s", p->phone);
	printf("������ϵ�˳ɹ�!\n");
	addressbook->size++;
}
void finderson(struct Addressbook* addressbook){//������ϵ��
	printf("��������������ϵ��\n");
	printf("������Ҫ���ҵ�����: ");
	char findname[1024] = { 0 };
	scanf("%s", &findname);
	for (int i = 0; i < addressbook->size; i++){
		struct person* p = &addressbook->people[i];
		if (strcmp(findname, p->name) == 0){
			printf("[%d]\t\t%s\t\t%s\n", i, p->name, p->phone);
		}
	}
}
void delperson(struct Addressbook* addressbook){//ɾ����ϵ��
	printf("ɾ����ϵ��\n");
	printf("������Ҫɾ������ϵ�˵ı��: ");
	int id = 0;//��ϵ�˵ı�Ž���ɾ��
	scanf("%d", &id);
	if (id < 0 || id >= addressbook->size){
		printf("���������������������룺\n");
		return;
	}
	//���Ҫɾ�����±������һԪ�أ�ֱ��size--��
	if (id == addressbook->size - 1){
		addressbook->size--;
		printf("ɾ���ɹ�\n");
		return;
	}
	addressbook->people[id] = addressbook->people[addressbook->size - 1];
	addressbook->size--;
	printf("ɾ���ɹ�\n");
	return;

}
void updateperson(struct Addressbook* addressbook) {//�޸���ϵ��
	printf("������ϵ��\n");
	printf("������Ҫ���µ���ϵ�˵ı��: ");
	int id = 0;
	scanf("%d", &id);
	if (id < 0 || id >= addressbook->size) {
		printf("������ı������!\n");
		return;
	}
	struct person* p = &addressbook->people[id];
	printf("��������ϵ��������");
	scanf("%s", p->name);
	printf("��������ϵ�˵绰��");
	scanf("%s", p->phone);
	printf("������ϵ�˳ɹ�!\n");
}
void printperson(struct Addressbook* addressbook){//�鿴������ϵ��
	for (int i = 0; i < addressbook->size; i++){
		struct person*p = &addressbook->people[i];
		printf("[%d]\t\t%s\t\t%s\n", i, p->name, p->phone);
	}
	printf("���� [%d] ����¼\n", addressbook->size);
}
void clearperson(struct Addressbook* addressbook) {//���������ϵ��
	for (int i = 0; i < addressbook->size; i++) {
		addressbook->size--;
		if (addressbook->size == 0){
			break;
		}
	}
	printf("��ճɹ�\n");
}
typedef void(*func)(struct Addressbook*);
int main()
{
	 func funcs[]= {
		NULL,
		addperson,
		finderson,
		delperson,
		updateperson,
		printperson,
		clearperson,

	};
	
	init(&addressbook);
	while (1){
		int choice = menu();
		if ((choice<0) || (choice>= sizeof(funcs)/sizeof(funcs[0]))){
			printf("����������Ч�����������룻\n");
			continue;
		}
		if (choice == 0){
			printf("bye;");
			break;
		}
		funcs[choice](&addressbook);
	}
	system("pause");
	return 0;
}