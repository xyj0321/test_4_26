#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�ṹ��
//�ṹ�����������
//�ṹ���������
//�ṹ������Ķ������ʼ��
//�ṹ���ڴ����
//�ṹ�崫��
//�ṹ��ʵ��λ��
//�ṹ����������
//struct Stu  
//{
//	char name[20];
//	int age;
//	char sex[5];
//	char id[20];
//}s;
//int main()
//{
//	struct Stu s = { "huanhuan", 18, "nan", "123456" };//�ṹ���ʼ��
//	return 0;
//}
////�ṹ��Ƕ��
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
//	struct T t = { "ab", { 10, 'w', "hello", 3.14 }, "NULL" };//�ṹ��Ƕ�׳�ʼ��
//	return 0;
//}
////�ṹ���������
//struct Node
//{
//	int data;
//	struct Node*next;
//};
////�ṹ���ڴ����//�ο�https://www.runoob.com/w3cnote/struct-size.html
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
////�޸Ľṹ�������
//#pragma pack(1)//����Ĭ�϶�����
//struct s1
//{
//	char C1;
//	int i;
//	char c2;
//};
//#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��ֵ
//int main()
//{
//	printf("%d\n", sizeof(struct s1));//6
//	return 0;
//}
////�ṹ�崫��
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
//λ�Σ�λ�εĳ�Ա������int��unsigned int����signed ��char����Աһ���Сһ��
//struct A
//{
//	int a : 2;//2bit 
//	int b : 5;//5bit
//	int c : 10;//10bit
//	int d : 30;//30bit
//};

//ö��
//enum DAY
//{
//	Mon,     
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//    Sun, //{}Ϊö�ٳ���������ö�����͵Ŀ���ȡֵ��Ĭ�ϴ�0��ʼ��һ�ε������ڶ����ʱ��Ҳ���Ը�ֵ
//};
//enum DAY day = Mon;

//�����壨�����壩
//���⣺�ٶ�������
//�жϵ�ǰ������Ĵ�С�˴洢
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
		printf("�ü�����Ǵ�˴洢\n");
	}
	else
	{
		printf("�ü������С�˴洢\n");
	}
	return 0;
}
//�������С����
