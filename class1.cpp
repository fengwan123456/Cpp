#include<iostream>
#include<string>
using namespace std;





//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//	bool operator==(Person& p)
//	{
//		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
//		{
//			return true;
//		}
//		return false;
//	}
//	bool operator !=(Person& p)
//	{
//		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
//		{
//			return false;
//		}
//		return true;
//	}
//
//	string m_Name;
//	int m_Age;
//};
//
//void test01()
//{
//	Person p1("Tom", 18);
//	Person p2("jeey", 18);
//	if (p1 == p2)
//	{
//		cout << "p1与p2是相等的" << endl;
//	}
//	if(p1!=p2)
//	{
//		cout << "p1,p2不相等" << endl;
//	}
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//函数调用重载运算符

class Myint
{
public:
	void operator()(string test)
	{
		cout << test << endl;
	}
};

//函数调用打印

void MyInt01(string test)
{
	cout << test << endl;
}
void test01()
{
	Myint myint;
	myint("hello world");
	MyInt01("hello world");
}


//仿函数非常灵活，没有固定写法
//加法
class MyAdd
{
public:
	int operator()(int num1, int num2)
	{
		return num1+ num2;
	}

};
void test02()
{
	MyAdd myadd;
	int res = myadd(100, 100);
	cout << res << endl;


	//匿名函数对象
	cout << MyAdd()(100, 100) << endl;
}

int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}