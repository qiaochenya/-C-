#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//�Լ�д����ҵ1

//void reserve(int arr[10])
//{
//	int str[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		str[i] = arr[9 - i];
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = str[i];
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	reserve(arr);
//	printf("\n");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//����д����ҵ1

//�����鷴ת�������㷨

//void Ints(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%2d", arr[i]);
//	}
//	printf("\n");
//}
//void Intss(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		arr[i] = i;
//	}
//}
//void reserve(int arr[], int sz)	
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Ints(arr, sz);
//	print(arr, sz);
//	Intss(arr, sz);
//	print(arr, sz);
//	reserve(arr, sz);
//	print(arr, sz);
//	//int sz = strlen(arr);	//strlenֻ�����ַ���
//		//�����ַ�����int�͵�
//	//printf("%d", sz);
//	return 0;
//}

//��������Ľ���

//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 0,2,4,6,8 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		int temp = 0;
//		temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}

//ָ����Ŀ

//int main()
//{
//	int a = 0x11223344;	//�ڴ��е��Ŵ��ȥ�����԰�44�ĳ�0��
//	char* pc = (char*)&a;
//	*pc = 0;
//	printf("%x", a);	//11223300
//	return 0;
//}

//������Ŀ

//int i;	//ȫ�ֱ�������ʼ������0�����ֲ���������ʼ���������ֵ
//int main()
//{
//	i--;
//	if (i > sizeof(i))	//sizeofĬ�Ϸ��ص���һ���޷���������-1�Ķ�����Ϊ���Ϊ1���һ���޷������϶��ܴ�
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;	//��ֵ�����ȼ����ڶ��ű��ʽ
//	b += a++ + c;	//����++ > +�� > +=
//	printf("a=%d b=%d c=%d", a, b, c);
//	return 0;
//}

//дһ���������ز�����������1�ĸ���,�����ⶼ������

//int search(int x)
//{
//	int count = 0;
//	for (int i = 0; i < 32; i++)	//����ѭ��32��
//	{
//		if (((x>>i)&1)==1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int searchs(unsigned int x)	//ǿ������ת��Ϊ�޷��žͿ��Խ������
//{
//	int count = 0;
//	while (x)
//	{
//		if (x % 2 == 1)
//		{
//			count++;
//		}
//		x /= 2;
//	}
//	return count;
//}
//int searchss(int x)	//���Ž��㷨
//{
//	int count = 0;
//	while (x)	//�м���1��ѭ������
//	{
//		x = x & (x - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	int y = search(x);
//	printf("%d\n", y);
//	//system("pause");
//	y = searchs(x);
//	printf("%d\n", y);
//	y = searchss(x);
//	printf("%d\n", y);
//	return 0;
//}

//дһ��������������������Ϊ�в�ͬλ�ĸ���

//int get_same_count(int x, int y)
//{
//	int count = 0;
//	int temp = x ^ y;	//��ͬΪ0������Ϊ1
//	while (temp)
//	{
//		temp = temp & (temp - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0, b = 0;
//	scanf_s("%d %d", &a, &b);
//	int count = get_same_count(a, b);
//	printf("%d\n", count);
//	return 0;
//}

//��ӡ�������е�����λ��ż��λ

//void print(int x)
//{
//	printf("����λ\n");
//	for (int i = 30; i >= 0; i-=2)
//	{
//		printf("%d ", (x >> i) & 1);
//	}
//	printf("\n");
//	printf("ż��λ\n");
//	for (int i = 31; i >= 1; i-=2)
//	{
//		printf("%d ", (x >> i) & 1);
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}

//�˷���

//int main()
//{
//	int i = 0;
//	scanf_s("%d", &i);
//	for (int a = 1; a <= i; a++)
//	{
//		for (int b = 1; b <= a; b++)
//		{
//			printf("%2d *%2d=%-2d ", b, a, a * b);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//��ӡһ��������ÿһλ

//void print(int x)
//{
//	if (x < 10)
//	{
//		printf("%d ", x);
//	}
//	else
//	{
//		print(x / 10);
//		printf("%d ", x % 10);	//�ⲽ�����Ŵ�ӡ��
//	}
//}
//int main()
//{
//	int x = 0;
//	scanf_s("%d", &x);
//	print(x);
//	return 0;
//}

//�ݹ�ͷǵݹ���n�Ľ׳�

//int factorial(int x)
//{
//	if (x==0)
//	{
//		return 1;
//	}
//	else
//	{
//		return x * factorial(x - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int count = 1;
//	if (n >= 0)
//	{
//		count = factorial(n);
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int count = 1;
//	while (n)
//	{
//		count = n * count;
//		n--;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//дһ���������ַ�������(�õݹ�ʵ��)�Ҳ���ʹ���ַ����Ŀ⺯��

//long long int my_strlen(char arr[])
//{
//	char* left = &arr[0];
//	char* right = &arr[0];
//	while (*right != '\0')
//	{
//		right++;	//Ӧ�üӵ��������ĺ���һ���ټ�ȥ��һ������Ԫ�صĵ�ַ
//	}
//	long long int count = right - left;	//ָ���ȥָ�뷵�ص���һ����������
//	return count;
//}
//void reserve(char arr[])
//{
//	char temp = arr[0];
//	long long int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//		reserve(arr + 1);
//	arr[len - 1] = temp;
//}
//int main()
//{
//	char arr[] = { "abcdef" };
//	//gets_s(arr, 7);	//�����Զ�ȥ�ض�
//	fgets(arr, 7, stdin);	//���Զ��ض�
//	//long long int count = my_strlen(arr);
//	//printf("%lld\n", count);
//	reserve(arr);
//	printf("%s", arr);
//	return 0;
//}

//дһ���ݹ麯��������һ���Ǹ��������������������֮��

//int digitsum(unsigned int x)
//{
//	int count = 0;
//	if (x >= 10)
//	{
//		return count = count + x % 10 + digitsum(x / 10);
//	}
//	else
//	{
//		return x;
//	}
//}
////���Ž�
//int digitsums(unsigned int x)
//{
//	if (x>9)
//	{
//		return digitsums(x / 10) + x % 10;
//	}
//	else
//	{
//		return x;
//	}
//}
//int main()
//{
//	unsigned int x = 0;
//	scanf_s("%d", &x);
//	int count = digitsum(x);
//	printf("%d\n", count);
//	count = digitsums(x);
//	printf("%d\n", count);
//	return 0;
//}

//�ݹ�ʵ��n��k�η� n^k=n*n^(k-1)

double Calculate(int n, int k)
{
	if (k<0)
	{
		return (1.0 / Calculate(n, -k));
	}
	else if (k == 0)
	{
		return 1;
	}
	else
	{
		return n * Calculate(n, k - 1);
	}
}
int main()
{
	int n = 0, k = 0;
	scanf_s("%d %d", &n, &k);
	double count = Calculate(n, k);
	printf("%lf\n", count);
	return 0;
}