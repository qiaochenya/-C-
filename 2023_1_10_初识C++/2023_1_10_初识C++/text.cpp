#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
//#include<cstdio>
#include<vector>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<bitset>
#include<algorithm>
using namespace std;

//�¼ӵ�bool����

//int main()
//{
//	bool a1 = true;
//	bool a2 = (bool) - 1;
//	bool a3 = (bool)0;
//	cout << a1 << " " << a2 << " " << a3 << " " << endl;
//	return 0;
//}

//�¼ӵ��ַ�������string�ͺ���

//int main()
//{
//	//string s1 = "hello ";
//	//string s2 = "world";
//	//string s3 = s1 + s2;	//����ֱ����ӣ�����strcat
//	//cout << s3 << endl;
//
//	//string s1;
//	//getline(cin, s1);	//���Զ�һ���� 
//	//cout << s1 << endl;
//	//cout << s1.length() << endl;	//��ȡ�ַ����ĳ���
//
//	//����Ӵ�
//	string s = "hello world!";
//	string s_sub = s.substr(6);	//һ�����������Ǹ��ַ���������Ӵ�
//	s_sub = s.substr(1, 2);
//	//printf("%s\n", s_sub);	//%s��ӡ����char*,��string����һ��
//	cout << s_sub << endl;
//	return 0;
//}

//�ṹ����Բ��ü�struct�Ϳ���ֱ������

//struct stu
//{
//	string name;
//	int age;
//};
//int main()
//{
//	stu s = { "qiaochen",12 };
//	cout << s.name << " " << s.age << endl;
//	return 0;
//}

//c++�е�&����

//void add(int& b)	//&������ȥc�д�ָ����鷳
//{
//	b++;
//}
//int main()
//{
//	int a = 9;
//	add(a);
//	cout << a << endl;
//
//	return 0;
//}

//vector

//int main()
//{
//	vector<int>v;
//	v.resize(10);
//	v.push_back(1);
//	v[0] = 1;
//	for (auto p = v.begin(); p != v.end(); p++)
//		cout << *p << " ";
//	return 0;
//}

//set����

//int main()
//{
//	set<int>s;	//�������ָ����С
//	s.insert(3);
//	s.insert(2);
//	s.insert(1);
//	for (auto p = s.begin(); p != s.end(); p++)	//������
//		cout << *p << " ";
//	cout << endl;
//	cout << (s.find(3) != s.end()) << endl;
//	cout << (s.find(2) != s.end()) << endl;
//	s.erase(1);
//	cout << (s.find(1) != s.end()) << endl;
//	return 0;
//}

//map

//int main()
//{
//	map<string, int>m;
//	m["hello"] = 4;
//	m["world"] = 3;
//	cout << "hello :" << m["hello"] << endl;
//	for (auto p = m.begin(); p != m.end(); p++)
//	{
//		cout << p->first << ": " << p->second << endl;
//	}
//	cout << m.size() << endl;
//	return 0;
//}

//ջ,����ʹ�õ�����

//int main()
//{
//	stack<int>s;
//	s.push(1);
//	s.push(2);
//	s.push(3);
//	s.pop();	//��ջ
//	cout << s.top() << endl;
//	cout << s.size() << endl;
//	return 0;
//}

//����,���Ӵ�ͷ��

//int main()
//{
//	queue<int>s;
//	for (int i = 0; i < 10; i++)
//	{
//		s.push(i);
//	}
//	cout << "����Ϊ��" << s.front() << "��βΪ��" << s.back() << endl;
//	s.pop();	//����
//	cout << "����Ϊ��" << s.front() << "��βΪ��" << s.back() << endl;
//	s.push(11);
//	cout << "����Ϊ��" << s.front() << "��βΪ��" << s.back() << endl;
//	cout << s.size() << endl;
//	return 0;
//}

//bitset

//int main()
//{
//	bitset<5>s(19);	//100011
//	cout << s << endl;
//	for (int i = 0; i < s.size(); i++)
//	{
//		cout << s[i] << " ";	//��������
//	}
//	cout << "\n";
//	
//	cout << "s���Ƿ����1��" << s.any() << endl;
//	cout << "s�Ƿ񲻴���1��" << s.none() << endl;
//	cout << "s��1�ĸ�����" << s.count() << endl;
//	cout << "s��Ԫ�ظ���Ϊ��" << s.size() << endl;
//	cout << "С��0Ԫ���Ƿ�Ϊ1��" << s.test(0) << endl;
//
//	s.flip();
//	cout << s << endl;
//
//	unsigned long a = s.to_ulong();
//	cout << a << endl;
//
//	string m = "101001000";
//	bitset<5>b(m, 0, 5);
//	cout << b << endl;
//	return 0;
//}

//sort������ʹ��

//int main()
//{
//	vector<int>v(10);
//	for (int i = 9; i >= 0; i--)
//	{
//		v[i] = 10 - i;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		cout << v[i] << " ";
//	}
//	cout << "\n";
//	sort(v.begin(), v.end());
//	for (int i = 0; i < 10; i++)
//	{
//		cout << v[i] << " ";
//	}
//}

//bool cmp(int x, int y)
//{
//	return x > y;
//}
//int main()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	for (auto i = v.begin(); i != v.end(); i++)
//	{
//		cout << *i << " ";
//	}
//	//���Ҫ����Ļ���Ҫ���cmp
//	sort(v.begin(), v.end(), cmp);
//	//cmp����ֵΪ��Ͳ��������پͽ���
//	cout << endl;
//	for (auto i = v.begin(); i != v.end(); i++)
//	{
//		cout << *i << " ";
//	}
//	return 0;
//}

//�ṹ������

//struct stu
//{
//	string name;
//	int age;
//};
//bool cmp(stu x, stu y)
//{
//	if (x.age != y.age)
//		return x.age > y.age;
//	else
//		return x.name > y.name;
//}
//int main()
//{
//	stu s[3] = { {"zhangsan",12},{"lisi",15},{"wangwu",18} };
//	sort(s, s + 3, cmp);
//	for (int i = 0; i < 3; i++)
//	{
//		cout << (s + i)->name << ":" << s[i].age << endl;
//	}
//}

//c++��for

//int main()
//{
//	int arr[10] = { 1 };
//	for (auto& i : arr)	//����&�ͻ��ԭ������и���
//	{
//		i++;
//	}
//	for (auto i : arr)
//	{
//		cout << i << " ";
//	}
//	return 0;
//}

//to_string������ת��Ϊ�ַ�����

//int main()
//{
//	string s = to_string(11);
//	printf("%s\n", s.c_str());	//��ס
//	cout << s << endl;
//	return 0;
// }

//stoi,stod

int main()
{
	int a = stoi("11");
	cout << a << endl;
	double b = stod("3.14");
	cout << b << endl;
	return 0;
}