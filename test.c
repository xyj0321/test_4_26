#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//结构体
//结构体的类型声明
//结构体的自引用
//结构体变量的定义与初始化
//结构体内存对齐
//结构体传参
//结构体实现位段
//结构体类型声明
//struct Stu  
//{
//	char name[20];
//	int age;
//	char sex[5];
//	char id[20];
//}s;
//int main()
//{
//	struct Stu s = { "huanhuan", 18, "nan", "123456" };//结构体初始化
//	return 0;
//}
////结构体嵌套
//struct S
//{
//	int a;
//	char s;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;
//	char*ps;
//};
//int main()
//{
//	struct T t = { "ab", { 10, 'w', "hello", 3.14 }, "NULL" };//结构体嵌套初始化
//	return 0;
//}
////结构体的自引用
//struct Node
//{
//	int data;
//	struct Node*next;
//};
////结构体内存对齐//参考https://www.runoob.com/w3cnote/struct-size.html
//struct s1
//{
//	char c1;
//	int i;
//	char c2;
//};
//struct s2
//{
//	char c1;
//	char c2;
//	int i;
//};
//struct s3
//{
//	double d;
//	char c;
//	int i;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct s1));//12
//	printf("%d\n", sizeof(struct s2));//8
//	printf("%d\n", sizeof(struct s3));//16
//	return 0;
//}
////修改结构体对齐数
//#pragma pack(1)//设置默认对齐数
//struct s1
//{
//	char C1;
//	int i;
//	char c2;
//};
//#pragma pack()//取消设置的默认对齐数，还原为默认值
//int main()
//{
//	printf("%d\n", sizeof(struct s1));//6
//	return 0;
//}
////结构体传参
//struct Stu
//{
//	int data[100];
//	char a;
//};
//void print1(struct Stu*ps)
//{
//	printf("%d\n", ps->data[1]);
//}
//int main()
//{
//	struct Stu s = { { 1, 2, 3, 4, 5 }, 'w' };
//	print1(&s);
//	return 0;
//}
//位段，位段的成员必须是int，unsigned int，或signed 、char即成员一般大小一致
//struct A
//{
//	int a : 2;//2bit 
//	int b : 5;//5bit
//	int c : 10;//10bit
//	int d : 30;//30bit
//};

//枚举
//enum DAY
//{
//	Mon,     
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//    Sun, //{}为枚举常量，即该枚举类型的可能取值，默认从0开始，一次递增，在定义的时候也可以赋值
//};
//enum DAY day = Mon;

//联合体（共用体）
//例题：百度面试题
//判断当前计算机的大小端存储
int check_sys()
{
	union
	{
		char c;
		int a;
	}u;
	u.a= 1;
	return u.c;
}
int main()
{
	//int a = 1;//0x00 00 00 01
	int ret = check_sys();
	if (ret == 0)
	{
		printf("该计算机是大端存储\n");
	}
	else
	{
		printf("该计算机是小端存储\n");
	}
	return 0;
}
//联合体大小计算
