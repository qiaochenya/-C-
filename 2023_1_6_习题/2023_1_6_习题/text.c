#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<math.h>

//�����ʲô

//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);	//������int(*)[5]����ת��Ϊint*������-1������һ������ĵ�ַ��ǰһλ
//	printf("%d %d", *(a + 1), *(ptr - 1));
//	return 0;
//}

//ָ��Ӽ��������ַ���Ȼȡ����ָ�������

//struct text
//{
//	int num;
//	char* pcname;
//	short sdate;
//	char cha[2];
//	short sba[4];
//}*p;
////�ṹ���СΪ20
//int main()
//{
//	p = (struct text*)0x0000000000100000;
//	printf("%p\n", p + 0x1);	//32λ����14��64λ�ͱ�20��
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}

//��

//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x\n", ptr1[-1]);
//	printf("%x\n", *ptr2);	//���ݴ洢��С�˵��Ŵ棬��ǰһ���ַ�Ȼ��int����4���ֽ�
//	//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00
//	//00 00 00 02
//	return 0;
//}

//���ű��ʽ�Ŀ�

//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };	//ע�ⶺ�ű��ʽ����ʼ��Ϊ1��3��5��0��0��0
//	int* p;
//	p = a[0];
//	assert(p != NULL);
//	printf("%d\n", p[0]);
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p, %lld", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	//p[4][2]=*(*(p+4)+2)������������ָ��һ��4��������һ��һ��
//	//%p��ӡ-4�����Ǵ�ӡ���룬��16���ƣ���ַ��һ���޷�����
//	//10000000 00000000 00000000 00000100	-ԭ��
//	//11111111 11111111 11111111 11111011	-����
//	//1111 1111 1111 1111 1111 1111 1111 1100	-����
//	//	f    f    f    f    f    f    f    c
//	//����ǰ���Զ���1
//	//FFFF FFFF FFFF FFFC
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}

//int main()
//{
//	char* a[] = { "work","at","albaba" };	//����ÿ���������Ͷ���char*������ָ����Ԫ�صĵ�ַ
//	char** pa = a;	//��û��&
//	pa++;	//����һ��char*��С����������at��
//	printf("%s\n", *pa);
//	return 0;
//}

//���(����)

//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *-- * ++cpp + 3);	//cpp�����Ľ���ᱣ��
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}

//дһ�������������ַ���������

//void fan(char arr[], long long int sz)
//{
//	int left = 0;
//	long long int right = sz-1;
//	while (left<right)
//	{
//		char temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[20] = { 0 };
//	gets_s(arr,20);	//��һ����ȫ���뵹�ַ����飬scanf�����ո��ֹͣ
//	long long int sz = strlen(arr);
//	//printf("%lld\n", sz);
//	fan(arr, sz);
//	//printf("%s\n", arr);
//	puts(arr);
//	return 0;
//}

//��2+22+222+222......��ʽ�ӵĺ�

//int main()
//{
//	int a = 0, n = 0;
//	scanf_s("%d %d", &a, &n);
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		sum = sum + a;
//		a = a * 10 + 2;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//ˮ�ɻ���

//int main()
//{
//	for (int i = 0; i < 100000; i++)
//	{
//		int sum = 0;
//		int temp = i;
//		int n = 0;
//		while (temp)
//		{
//			temp /= 10;
//			n++;
//		}
//		temp = i;
//		while (temp)
//		{
//			sum = sum +(int)pow(temp % 10, n);
//			temp /= 10;
//		}
//		if (sum == i)
//		{
//
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//��ӡ����

//int main()
//{
//	int x = 0;
//	scanf_s("%d", &x);
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 1; j < x - i; j++)
//		{
//			printf(" ");
//		}
//		for (float a = 0; a <= i; a+=0.5)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (int i = 0; i < x-1; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (float a = 0.5; a < x - 1 - i; a += 0.5)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//����ˮ���⣬1ƿ��ˮһԪ��������ƿ�ӿ��Ի�һƿ��ˮ����20Ԫ���Ժȶ�����ˮ

//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf_s("%d", &money);
//	total = money;
//	empty = money;
//	while (empty>=2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//	return 0;
//}

//������������������ż�������⣬ǰ����������������ż��

//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		if (left < sz && arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		if (right > 0 && arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int temp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = temp;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//ת�����͵���Ŀ

//int main()
//{
//	unsigned char a = 200;
//	//11001000	-���룬������ʵ�ǽضϲű�8λ��ԭ��32λ
//	unsigned char b = 100;
//	//01100100
//	unsigned char c = 0;
//	c = a + b;
//	//����Ƚ���������������Ϊ���޷������Բ�0
//	//00000000000000000000000011001000	-a
//	//00000000000000000000000001100100	-b
//	//00000000000000000000000100101100	-c
//	//�ٽ��нض�
//	//00101100	-c
//	printf("%d %d", a + b, c);
//	return 0;
//}

//int main()
//{
//	unsigned int a = 0x1234;
//	unsigned char b = *(unsigned char*)&a;	//ȡ��ַ��ȡ�Ǹ����ݵĵ͵�ַ��
//	printf("%d\n", b);	//С�˴洢����52����˾���0
//	return 0;
//}

//10000000000000000000000010000001
//11111111111111111111111101111110
//11111111111111111111111101111111

//�������

//int main()
//{
//	int arr[10][10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			if (j == 0)
//				arr[i][j] = 1;
//			if (i == j)
//				arr[i][j] = 1;
//			if (i >= 2 && j >= 1)
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//		}
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		for (int a = 0; a < 10 - i; a++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j <= i; j++)
//		{
//			printf("%-4d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//�����֣�3����˵�滰1����˵�ٻ�
//A˵������
//B˵��C
//C˵��D
//D˵C�ں�˵

//int main()
//{
//	int killer = 0;
//	for (killer = 'A'; killer < 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//		{
//			printf("������:%c\n", killer);
//		}
//	}
//	return 0;
//}

//������
//5λ�˶�Ա�μ���ˮ����������������Ԥ��������
//A˵ B�ڶ����ҵ���
//B˵ �ҵڶ���E����
//C˵ �ҵ�һ��D�ڶ�
//D˵ C����ҵ���
//E˵ �ҵ��ģ�A��һ

int main()
{
	for (int a = 0; a <= 5; a++)
	{
		for (int b = 0; b <= 5; b++)
		{
			for (int c = 0; c <= 5; c++)
			{
				for (int d = 0; d <= 5; d++)
				{
					for (int e = 0; e <= 5; e++)
					{
						if (((b == 2) + (a == 3) == 1) && ((b == 2) + (e == 4) == 1) && ((c == 1) + (d == 2) == 1) && ((c == 5) + (d == 3) == 1) && ((e == 4) + (a == 1) == 1) && (a * b * c * d * e == 120))
						{
							printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);
						}
					}
				}
			}
		}
	}
	return 0;
}