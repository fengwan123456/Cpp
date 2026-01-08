//#include<iostream>
//using namespace std;
//
////c++另一种编程思想是泛型编程，主要技术啊就是模板
//
////
////
////template<typename T>  
////void mySwap(T& a, T& b)
////{
////	T temp = a;
////	a = b;
////	b = temp;
////}
////
////void test01()
////{
////	int a = 10;
////	int b = 20;
////	//shiyong函数模板
////	//自动类型推导
////	//mySwap(a, b);
////	//显示指定型
////	mySwap<int>(a, b);
////	cout << a << endl;
////	cout << b << endl;
////}
////
////
////
////int main()
////{
////	test01();
////	system("pause");
////	return 0;
////}
////
//
//
//
////函数模板注意事项
////自动类型推导，必须导出一致的数据类型才可以使用
////模板必须确定T的数据类型，才可以使用
//
//
//template<class T>     //typename 可以替换class
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	mySwap(a, b);
//	char c = 'c';
//	//mySwap(a, c);
//}
//
//
//template<class T>
//void func()
//{
//	cout << "func shiyong" << endl;
//}
//void test02()
//{
//	//模板必须确定T的数据类型，才可以使用
//	func<int>();
//	//func();
//}
//
//
//
//
//
//
//int main()
//{
//	test02();
//	//test01();
//	system("pause");
//	return 0;
//}




































































