#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
struct Test
{
	int Num;
	char *pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p = (struct Test*)0x100000;
int main()
{
	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//逗号表达式取逗号后面的的值
	int *p;
	p = a[0];
	printf("%d", p[0]);
	//int a[4] = { 1, 2, 3, 4 };
	//int *ptr1 = (int *)(&a + 1);
	//int *ptr2 = (int *)((int)a + 1);
	//printf("%x,%x", ptr1[-1], *ptr2);//
	//printf("%p\n", p + 0x1);//100014
	//printf("%p\n", (unsigned long)p + 0x1);//100000
	//printf("%p\n", (unsigned int*)p + 0x1);//100004
	//int a[5] = { 1, 2, 3, 4, 5 };
	//int *ptr = (int *)(&a + 1);
	//printf("%d,%d", *(a + 1), *(ptr - 1));
	//// 2 5
 //
//
//	//一维数组
//	//int a[] = { 1, 2, 3, 4 };
//	//printf("%d\n", sizeof(a));//16 ；数组四个元素
//	//printf("%d\n", sizeof(a + 0));//4 隐式转化为指针，sizeof（int*）
//	//printf("%d\n", sizeof(*a)); // 4 sizeof（a[0]）对a解引用   a隐式转为指针再解引用
//	//printf("%d\n", sizeof(a + 1));//4 sizeof(int *)
//	//printf("%d\n", sizeof(a[1]));//4 求数组第二个元素的大小 
//	//printf("%d\n", sizeof(&a));//4 这是一个 数组指针指向的是整个数组，
//	//printf("%d\n", sizeof(*&a));//16 & 优先级高 指针数组 解引用为整个数组
//	//printf("%d\n", sizeof(&a + 1));//4 指针数组 +1  
//	//printf("%d\n", sizeof(&a[0]));//4 指向的是数组第一个元素的地址
//	//printf("%d\n", sizeof(&a[0] + 1));//4 指向的是数组第二个元素的地址
//	
//	
//	//字符数组
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	//printf("%d\n", sizeof(arr));//6
//	//printf("%d\n", sizeof(arr + 0));//4 sizeof(char*)
//	//printf("%d\n", sizeof(*arr));//1 sizeof(arr[0])数组解引用隐式转化为指针在解引用为指针指向的数组元素
//	//printf("%d\n", sizeof(arr[1]));// 1 数组的第二个元素大小
//	//printf("%d\n", sizeof(&arr));// 4 arr(*)[]数组指针，指针指向整个数组
//	//printf("%d\n", sizeof(&arr + 1));//4 数组指针 指向本数组最后一元素地址+1 的地址
//	//printf("%d\n", sizeof(&arr[0] + 1));//4 sizeof(char*)
//	
//	//printf("%d\n", strlen(arr));//未定义行为 此处的字符数组没有\0结尾
//	//printf("%d\n", strlen(arr + 0));//同样的
//	//printf("%d\n", strlen(*arr));
//	//printf("%d\n", strlen(arr[1]));
//	//printf("%d\n", strlen(&arr));
//	//printf("%d\n", strlen(&arr + 1));
//	//printf("%d\n", strlen(&arr[0] + 1));
//	//
//	
//	char arr[] = "abcdef";
//	
//	printf("%d\n", sizeof(arr));//7 字符串\0 结尾也要算入数组元素当中
//	printf("%d\n", sizeof(arr + 0));//4 sizeof(char*)指向第一个元素的地址
//	printf("%d\n", sizeof(*arr));// 1 sizeof(char[0]);数组先隐式转化为指针指向第一个元素，在解引用
//	printf("%d\n", sizeof(arr[1]));//1 
//	printf("%d\n", sizeof(&arr));// 4 数组指针 char(*)[]
//	printf("%d\n", sizeof(&arr + 1));// 4 和上面一样数组指针  指向的是下一个数组
//	printf("%d\n", sizeof(&arr[0] + 1));// 4 指向的第一个元素取地址转化为指针 再+1
//	
//	printf("%d\n", strlen(arr));//6 计算字符串长度，不算入 \0
//	printf("%d\n", strlen(arr + 0));//6 从第一个元素开始一次+1知道遇见\0；
//	printf("%d\n", strlen(*arr));//未定义行为，不满足strlen函数参数规定必须为指针
//	printf("%d\n", strlen(arr[1]));//未定义行为
//	printf("%d\n", strlen(&arr));//6
//	printf("%d\n", strlen(&arr + 1));//未定义行为，这时候指向的数组的下一个地址，
//	printf("%d\n", strlen(&arr[0] + 1));//5
//	
//
//	//char *p = "abcdef";
//	/*
//	("%d\n", sizeof(p));//4 sizeof(char*)的指针
//	printf("%d\n", sizeof(p + 1));//4、指针+1操作 sizeof(char*)
//	printf("%d\n", sizeof(*p));//1 size(p[0]) 对p指针解引用
//	printf("%d\n", sizeof(p[0]));//1 size(char) 其实p[0]就相当于*p 
//	printf("%d\n", sizeof(&p));//二级指针 4 sizeof(char**)
//	printf("%d\n", sizeof(&p + 1));//4 二级指针
//	printf("%d\n", sizeof(&p[0] + 1));//4 sizeof(char*)
//	printf("%d\n", sizeof(*&p)); // 4 sizeof(char*)对p指针取地址变为二级指针，在解引用
//	printf("%d\n", sizeof(&*p)); //4 sizeof(char*) 对p先解引用。再取地址
//
//	printf("%d\n", strlen(p)); //6
//	printf("%d\n", strlen(p + 1)); // 5 指针加一操作 
//	printf("%d\n", strlen(*p)); // 未定义行为
//	printf("%d\n", strlen(p[1])); // 未定行为
//	printf("%d\n", strlen(&p)); //  未定义行为
//	printf("%d\n", strlen(&p[1] + 1)); // 4 p[1]取地址指向第二个元素再加1
//	printf("%d\n", strlen(*&p)); // 6 指针 取地址 再解引用还是指针
//	printf("%d\n", strlen(&*p)); //6 
//	*/
//
//	//int arr[3][4] = { 0 };
//	//printf("%d\n", sizeof(arr)); //48；3行4列 12个元素 ==>48个字节
//	//printf("%d\n", sizeof(arr[0])); //16 表示第一行的元素 4 个 ==>16
//	//printf("%d\n", sizeof(arr[0] + 1)); // 4 加1操作就隐式转为指针 只针的大小都是4个字节 
//	//printf("%d\n", sizeof(&arr[0] + 1)); // 4  取地址还是指针操作 
//	//printf("%d\n", sizeof(arr[0][0])); //  4 sizeof(int) 第一行第一列元素
//	//printf("%d\n", sizeof(*arr[0])); // 4 解引用先隐式转为指针，指向第一个元素，再解引用
//	//printf("%d\n", sizeof(*arr)); // 16
//	////二维数组解引用，隐式转为数组指针 arr==> arr(*)[4] 在进行解引用 arr[4];
//
//	//printf("%d\n", sizeof(*(arr + 1))); // 16 
//	//printf("%d\n", sizeof(*arr + 1));//4 sizeof(int*)
//	//printf("%d\n", sizeof(&arr[0] + 1)); // 4 sizeof(int(*)[4])
//	//// arr[0] ==> int[4] ==>& int (*)[4] +1 ==> int(*)[4]
//	//printf("%d\n", sizeof(*(arr[0] + 1)));//4
//	//// arr[0]==>int[4] +1 ==> int* ==>* 
	system("pause");
	return 0;
}