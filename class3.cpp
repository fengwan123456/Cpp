#include<iostream>
#include<string>
using namespace std;

//多态分为俩类  静态与动态
//静态多态：函数重载与运算符重载属于静态多态没服用函数名
//动态多态：派生类和虚函数实现运行时多态
//区别
//静态多态的函数地址早绑定，编译阶段确定函数地址
//动态多态函数地址晚绑定，玉兴阶段确定函数地址


//动态多态满足条件
// 1，有继承关系
// 2.子类重写父类的虚函数
// 
// 动态多态说用
// 父类的指针或者引用，指向子类对象
// 
//重写：函数返回值类型   函数名 参数列表 完全相同
//class Animal
//{
//public:
//	//虚函数
//	virtual void speak()
//	{
//		cout << "动物再说话" << endl;
//	}
//
//};
//class Cat :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "小猫在说话" << endl;
//	}
//};
//class Dog : public Animal
//{
//public:
//	void speak()
//	{
//		cout << "小狗正说话" << endl;
//	}
//};
//
////执行说话的函数
////地址早绑定，在编译阶段就确定函数地址
////如果执行毛说话，那么这么函数的地址就不能提前绑定，地址晚绑定
//void doSpeak(Animal& animal)
//{
//	animal.speak();
//}
//
//void test01()
//{
//	Cat cat;
//	Dog dog;
//	doSpeak(cat);
//	doSpeak(dog);
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//多态的原理剖析
//vfptr 虚函数指针virtual function pointer





class Animal
{
public:
	//虚函数
	 void speak()
	{
		cout << "动物再说话" << endl;
	}

};
class Cat :public Animal
{
public:
	void speak()
	{
		cout << "小猫在说话" << endl;
	}
};
class Dog : public Animal
{
public:
	void speak()
	{
		cout << "小狗正说话" << endl;
	}
};

void doSpeak(Animal& animal)
{
	animal.speak();
}

void test01()
{
	Cat cat;
	Dog dog;
	doSpeak(cat);
	doSpeak(dog);
}
void test02()
{
	cout << "sizeof Animal=" << sizeof(Animal) << endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}











































































































































































































































































































































































































































































































