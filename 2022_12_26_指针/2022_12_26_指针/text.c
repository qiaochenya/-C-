#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main(int argc, char* argv[])
//{
//    printf("argc = %d\n", argc);
//    argv++;
//    while (*argv) 
//    {
//        if (strcmp(*argv, "Aa") == 0) {
//            argv++;
//            printf("A for apple\n");
//        }
//        else if (strcmp(*argv, "Bb") == 0) {
//            argv++;
//            printf("B for ball\n");
//        }
//        else if (strcmp(*argv, "Cc") == 0) {
//            argv++;
//            printf("C for cat\n");
//        }
//        else if (strcmp(*argv, "Dd") == 0) {
//            printf("in d\n");
//            argv++;
//            printf("D for dog\n");
//        }
//    }
//}

//ָ�����͵�����

//int main()
//{
//
//	int a = 0x11223344;
//	//int* p = &a;
//	//*p = 0;
//	char* b = &a;
//	*b = 0; //ָ�����;�����ָ����н����ò���ʱ���ܹ����ʿռ�Ĵ�С
//	return 0;
//}

//ָ�����;�����:ָ����һ���߶�Զ

//int main()
//{
//	int a = 0x44332211;
//	int* pa = &a;
//	char* pc = (char*)&a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//	return 0;
//}

//ָ��������Ӧ��

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	return 0;
//}

//Ұָ��1.δ��ʼ�� 2.ָ���Խ�� 3.ִ��ָ��Ŀռ��ͷ�

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	for (int i = 0; i < 12; i++) //12��Խ����
//	{
//		p++;
//	}
//	return 0;
//}

//int* text()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = text();
//	*p = 20; //���ƺŻ����Ǹ�ס������ 
//	return 0;
//}

//ָ�������

//ָ��ļӼ�

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p++; 
//	}
//	return 0;
//}

//ָ��ıȽϴ�С

//int main()
//{
//	char arr[5] = { "abcde" };
//	for (char* p = arr; p < &arr[5];)
//	{
//		*p++ = '0';	//���û�ӡ���������0�Ļ��ǲ�����ʾ���ַ�
//	}
//	for (char* p = arr; p < &arr[5]; p++)
//	{
//		printf("%c ", *p);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 0 };
//	for (int* i = &arr[5]; i > &arr[0];)
//	{
//		*--i = 1;	//*��Ҫ����++��--ǰ��
//	}
//	for (int* i = arr; i < &arr[5]; i++)
//	{
//		printf("%d ", *i);
//	}
//	return 0;
//}

//ָ���ȥָ��

//int main()
//{
//	int arr[5] = { 0 };
//	printf("%lld\n", &arr[5] - &arr[0]);
//	printf("%d", arr[3]);
//	return 0;
//}

//ʵ���Լ���strlen

//long long int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[5] = { "bit" };
//	long long int len = my_strlen(arr);
//	printf("%lld\n", len);
//	return 0;
//}

//������ָ��

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//	printf("\n");
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);	//ȡ��������������ĵ�ַ
//	printf("\n");
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//	return 0;
//}

//����ָ�������

//int main()
//{
//	int a = 6;
//	int* pa = &a;
//	int** ppa = &pa;
//	**ppa = 20;
//	printf("%d\n", **ppa);
//	printf("%d\n", a);
//	return 0;
//}

//ָ������-������������-�������ָ��

int main()
{
	int a = 1, b = 2, c = 3;
	int* arr[3] = { &a,&b,&c };
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", *(arr[i]));
	}
	return 0;
}