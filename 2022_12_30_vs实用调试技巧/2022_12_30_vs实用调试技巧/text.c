#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//��ջ���ķ���

//��for���涨��i��c++�Ĵ�������c��

//int main()
//{
//	//2022vs����ǰ�汾��һ��ջ�����ȷŵ͵�ַ�ڷŸߵ�ַ
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	printf("%p\n", arr);
//	printf("%p\n", &i);
//	system("pause");
//	for (i = 0; i <= 12; i++)	//vs��ǰ�汾��ѭ����ԭ�򣻾ֲ��������Ƿŵ�ջ�ϵģ�1��ջ��Ĭ�����øߵ�ַ���õ͵�ַ�Ŀռ䣬2�����������±����������ַ���ɵ͵��߱仯
//	{
//		printf("hehe\n");	//�����ڰ汾Ҫ��i���嵽�������Ż���ѭ��
//		arr[i] = 1;
//	}
//	system("pause");	//Debug�ᱨ����Release���ᱨ��
//	return 0;
//}

//int main()
//{
//	for (int i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	for (int i = 0; i < 100; i++)
//	{
//		printf("%d ", 10 - i);
//	}
//	return 0;
//}

//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 1, b = 2;
//	int c = add(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	return 0;
//}

//���ö�ջ

//void text2()
//{
//	printf("hehe\n");
//}
//void text1()
//{
//	text2();
//}
//void text()
//{
//	text1();
//}
//int main()
//{
//	text();
//	return 0;
// }

//ʵ�ִ���1��+2��+......+n��

//int main()
//{
//	int n = 0;
//	int count1 = 1;
//	int count = 0;
//	scanf_s("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		count1 = 1;
//		for (int j = 1; j <= i; j++)
//		{
//			
//			count1 = j * count1;
//		}
//		count = count1 + count;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//strcpy�⺯����ʵ��,strcpy�����������/0Ҳ������ȥ

//�Լ�ʵ�ֵ�
void my_strcpy(char arr1[], char arr2[])
{
	int i = 0;
	for (i = 0; arr2[i] != '\0'; i++)
	{
		arr1[i] = arr2[i];
	}
	arr1[i] = '\0';
}

//����д��
void my_strcpys(char* dest, char* src)	//�Ƚϴ�
{
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = *src;	//����'\0'
}

void my_strcpyss(char* dest, char* src)	//��������
{
	if (dest != NULL && src != NULL)	//Ҫ���п�ָ����ж�
	{
		while (*dest++ = *src++);
	}
}

void my_strcpysss(char* dest, const char* src)	//const���������ֵ�̶��������Ŀ�ĵغͳ�����㷴
{
	assert(dest != NULL);	//���Կ��Է��ִ���
	assert(src != NULL);
	while (*dest++ = *src++);	//�㷴�ͱ��벻��ȥ
}

char* my_strcpyssss(char* dest, const char* src)	//����ѡ�񷵻�һ����ַ
{
	char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest++ = *src++);
	return ret;
}
int main()
{
	char arr1[] = { "*****************" };
	char arr2[] = { "qiaochenya" };
	//my_strcpyssss(arr1, arr2);
	//printf("%s\n", arr1);
	printf("%s\n", my_strcpyssss(arr1, arr2));	//���ص�ַ���������������Ϊ��һ�������Ĳ���
	return 0;
}

//const���÷�

//int main()
//{
//	const int i = 0;	//ֻ�������const��Ȼ����ͨ��ָ��ȥ��
//	const int* p = &i;	//���ָ��Ҳ����const�ͻᱨ��
//	/*int** pp = &p;
//	**pp = 20;*/	//����ָ����Ȼ���Ը�
//	printf("%d\n", i);
//	return 0;
//}

//int main()
//{
//	int i = 0, n = 0;
//	int* const p = &i;
//	p = &n;	//const������ָ��p�Ͳ����Ը�p�ĵ�ַ
//	return 0;
//}

//����дstrlen

//int my_strlen(const char* arr)	//����const
//{
//	int count = 0;
//	assert(arr != NULL);	//���϶���
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = { "abcdef" };
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}