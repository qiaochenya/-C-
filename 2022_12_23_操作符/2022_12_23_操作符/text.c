#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��һ��ѧϰ

//int main()
//{
//	int a = 16;
//	//int b = a >> 2;
//	printf("%d", a >> 1);
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0, ret = 0;
//	scanf("%d %d", &a, &b);
//	for (int i = 0; i < 32; i++)
//	{
//		if ((a >> i) & 1 != (b >> i) & 1)
//		{
//			ret++;
//		}
//	}
//	printf("%d", ret);
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	printf("%d", a >> 1);
//	return 0;
//}

//��������н���

//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("a=%d,b=%d\n", a, b);
//	//a = b + a; //���ַ��������
//	//b = a - b;
//	//a = a - b;
//	a = a ^ b;
//	b = a ^ b; //���ַ�����Ȼ�����������Ч�ʵ�
//	a = a ^ b;
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}

//ͳ��һ��������Ķ�����1�ĸ���

//int main()
//{
//	int num = 0, count = 0;
//	scanf("%d", &num);
//
//	//while (num)
//	//{
//	//	if (num % 2 != 0)
//	//	{
//	//		count++;    //�������⣬�����㸺��
//	//	}
//	//	num = num / 2;
//	//}
//
//	for (int i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//		{
//			count++;
//		}
//	}
//
//	printf("%d", count);
//	return 0;
//}

//sizeof���÷�

//int main()
//{
//	int a = 1;
//	int* p = &a;
//	char b = 'c';
//	int arr[10] = { 0 };
//	printf("%lld\n", sizeof(a));
//	printf("%lld\n", sizeof(p));
//	printf("%lld\n", sizeof(b));
//	printf("%lld\n", sizeof(arr));
//	return 0;
//}

//�ڶ����ѧϰ

//��λ��

//int main()
//{
//	/*int a = 10;
//	short b = 0;
//	printf("%lld\n", sizeof(b = a + 5)); //�������м��㣬�������ս������b����
//	printf("%d\n", b);*/
//	int a = 0;
//	printf("%d", ~a);
//	return 0;
//}

//Ҫ������һ�����Ķ���������һ��0��1,���߽��䷴����

//int main()
//{
//	int a = 11;
//	a = a | (1 << 2);
//	printf("%d\n", a);
//	//���Ҫ������ԭ��ȥ
//	a = a & ~(1 << 2);
//	printf("%d\n", a);
//	return 0;
//}

//ǰ�úͺ���++��--

//int main()
//{
//	int a = 9;
//	//printf("%d\n", ++a);
//	printf("%d\n", a++);
//	printf("%d\n", a);
//	return 0;
//}

//360������

//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;//||һ��Ϊ�����Ͳ�����
//	//i = a++ && ++b && d++;//&&һ��Ϊ�ٺ���Ͳ�����
//	printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
//	return 0;
//}

// �ṹ�� struct ��int floatһ����һ������������������

//struct stu
//{
//	char name[20];
//	int age;
//	char ID[20];
//};
//int main()
//{
//	//�������ͽ�struct stu
//	struct stu s1 = { "����",20,"5112221010536" };//ʹ��struct stu������һ��ѧ��s1������ʼ��
//	struct stu* ps = &s1;
//	printf("%s\n", ps->name);  //3
//	
//	/*printf("%s\n", (*ps).name);
//	printf("%d\n", (*ps).age);*/  //2
//
//	//��Ϊ����
//
//	/*printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.ID);*/  //1
//	return 0;
//}

//c�����е������Զ�ת��

//int main()
//{
//	char a = 3, b = 127, c = 0;
//	//00000011 -a
//	//01111111 -b
//	//char a = 1, b = 100, c = 0;
//	//��Ӻ�00000000000000000000000010000010
//	//10000010 -c
//	c = a + b;
//	//Ҫ�Ե�һ��������
//	//11111111111111111111111110000010 -����
//	//11111111111111111111111110000001 -����
//	//10000000000000000000000001111110 -ԭ��
//	printf("%d\n", c);
//	return 0;
//}

//ֻҪ�漰���ʽ����ͻᷢ����������

int main()
{
	char c = 1;
	printf("%lld\n", sizeof(c));
	printf("%lld\n", sizeof(+c)); //4
	printf("%lld\n", sizeof(!c));
	return 0;
}