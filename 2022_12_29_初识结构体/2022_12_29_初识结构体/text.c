#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��ζ���һ���ṹ��

//struct �ṹ��ؼ��֣�stu�ṹ���ǩ

//struct stu	//�൱��ͼֽ
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1, s2, s3;	//�������ṹ��ȫ�ֱ���

//typedef struct stu	//����������typedef
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;
//int main()
//{
//	struct stu s;	//�Ƿ��ӣ���s�Ǿֲ�����
//	stu a = { "����",12,"13058416598","��" };	//��ʼ���ṹ��������һ��������{}
//	return 0;
//}

//�����Խṹ���׽ṹ��

//struct S
//{
//	char arr[10];
//};
//struct T
//{
//	char name[10];
//	struct S s;
//};
//int main()
//{
//	struct T t = { "����",{"��"} };
//	printf("%s ", t.name);
//	printf("%s ", t.s.arr);
//	return 0;
//}

//�ṹ��Ĵ���

typedef struct stu	
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}stu;
void print1(stu s)
{
	printf("name:%s\n", s.name);
	printf("age:%d\n", s.age);
	printf("tele:%s\n", s.tele);
	printf("sex:%s\n", s.sex);
}
void print2(stu* s)
{
	printf("name:%s\n", s->name);
	printf("age:%d\n", s->age);
	printf("tele:%s\n", s->tele);
	printf("sex:%s\n", s->sex);
}
int main()
{
	stu s = { "����",12,"13620580982","��" };
	print1(s);
	print2(&s);	//������ã��ռ��˷Ѳ�����
	return 0;
}