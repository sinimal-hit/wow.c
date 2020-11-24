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
	printf(" 1. 新增联系人\n");
	printf(" 2. 查找联系人\n");
	printf(" 3. 删除联系人\n");
	printf(" 4. 修改联系人\n");
	printf(" 5. 查看所有联系人\n");
	printf(" 6. 清空所有联系人\n");
	printf(" 0. 退出\n");
	printf("=====================\n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
//通讯录初始化
void init(struct Addressbook* addressbook){
	addressbook->size = 0;

}
void addperson(struct Addressbook* addressbook){//新增联系人
	printf("新增联系人；\n");
	if (addressbook->size >= 1024){
		printf("通讯录已满！,新增联系人失败");
		return;
	}
	struct person* p = &addressbook->people[addressbook->size];
	printf("请输入联系人姓名：");
	scanf("%s", p->name);
	printf("请输入新联系人的电话: ");
	scanf("%s", p->phone);
	printf("新增联系人成功!\n");
	addressbook->size++;
}
void finderson(struct Addressbook* addressbook){//查找联系人
	printf("按照姓名查找联系人\n");
	printf("请输入要查找的姓名: ");
	char findname[1024] = { 0 };
	scanf("%s", &findname);
	for (int i = 0; i < addressbook->size; i++){
		struct person* p = &addressbook->people[i];
		if (strcmp(findname, p->name) == 0){
			printf("[%d]\t\t%s\t\t%s\n", i, p->name, p->phone);
		}
	}
}
void delperson(struct Addressbook* addressbook){//删除联系人
	printf("删除联系人\n");
	printf("请输入要删除的联系人的编号: ");
	int id = 0;//联系人的编号进行删除
	scanf("%d", &id);
	if (id < 0 || id >= addressbook->size){
		printf("您的输入有误，请重新输入：\n");
		return;
	}
	//如果要删除的下标是最后一元素，直接size--；
	if (id == addressbook->size - 1){
		addressbook->size--;
		printf("删除成功\n");
		return;
	}
	addressbook->people[id] = addressbook->people[addressbook->size - 1];
	addressbook->size--;
	printf("删除成功\n");
	return;

}
void updateperson(struct Addressbook* addressbook) {//修改联系人
	printf("更新联系人\n");
	printf("请输入要更新的联系人的编号: ");
	int id = 0;
	scanf("%d", &id);
	if (id < 0 || id >= addressbook->size) {
		printf("您输入的编号有误!\n");
		return;
	}
	struct person* p = &addressbook->people[id];
	printf("请输入联系人姓名：");
	scanf("%s", p->name);
	printf("请输入联系人电话：");
	scanf("%s", p->phone);
	printf("更新联系人成功!\n");
}
void printperson(struct Addressbook* addressbook){//查看所有联系人
	for (int i = 0; i < addressbook->size; i++){
		struct person*p = &addressbook->people[i];
		printf("[%d]\t\t%s\t\t%s\n", i, p->name, p->phone);
	}
	printf("共计 [%d] 条记录\n", addressbook->size);
}
void clearperson(struct Addressbook* addressbook) {//清空所有联系人
	for (int i = 0; i < addressbook->size; i++) {
		addressbook->size--;
		if (addressbook->size == 0){
			break;
		}
	}
	printf("清空成功\n");
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
			printf("您的输入无效，请重新输入；\n");
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