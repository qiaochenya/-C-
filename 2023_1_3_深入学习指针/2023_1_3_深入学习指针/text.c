#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void text(int arr[])
//{
//	printf("%I64d\n", sizeof(arr) / sizeof(arr[0]));	//64λ��8/4=2����32λ����1
//}
//int main()
//{
//	int arr[] = { 0 };
//	text(arr);
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	char* p = arr;
//	printf("%s\n", arr);
//	printf("%s\n", p);
//	printf("%c\n", *p);
//	return 0;
//}

//��һ��д��

//int main()
//{
//	const char* p = "abcdef";	//"abcdef����һ�������ַ���
//	*p = 'w';	//����д���Ǵ����
//	printf("%c\n", *p);
//	printf("%s\n", p);
//	return 0;
//}

//������

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//	if (p1 == p2)
//	{
//		printf("hehe\n");	//�����ַ���ͬһ����ַ
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	if (arr1 == arr2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");	//��ַ�϶���ͬ
//	}
//	printf("%p\n", p1);
//	printf("%p\n", p2);
//	return 0;
//}

//ָ������

//int main()
//{
//	int arr1[5] = { 0 };	//�����ʼ��һ���Ż��Զ��Ѻ�����0
//	int arr2[5] = { 1,1,1,1,1 };
//	int arr3[5] = { 2,2,2,2,2 };
//	int* parr[3] = { arr1,arr2,arr3 };
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//����ָ�� -���������������ĵ�ַ

//int main()
//{
//	char* arr[5] = { NULL };
//	char* (*p1)[5] = &arr;
//
//	int arrs[5] = { 0 };
//	int(*p2)[5] = &arrs;
//	return 0;
//}

//����ָ����÷�

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);	//���Խ�(*pa)���Ϊarr��arr[i]����������
//	}
//	printf("\n");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*pa + i));	//arr������Ԫ�ص�ַ
//	}
//	printf("\n");
//	//���涼�鷳������������
//	int* p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));	//*�����ȼ�����+�ǵ�������
//	}
//	return 0;
//}

//��Ҫ���ڶ�ά����

void print1(int arr[][3], int x, int y)	//ԭʼ����
{
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
void print2(int(*p)[3], int x, int y)
{
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			printf("%d ", p[i][j]);
			//printf("%d ", *(p[i] + j));
			//printf("%d ", *(*(p + i) + j));
			//printf("%d ", (*(p + i))[j]);	//Ҳ��������
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][3] = { {0,0,0},{1,1,1},{2,2,2} };
	print1(arr, 3, 3);	//��ά�������Ԫ�ؾ��ǵ�һ�е�һά����
	printf("\n");
	print2(arr, 3, 3);
	return 0;
}