#include<iostream>
using namespace std;



template<class T>
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

template<class T>
void mySort(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i;
		for (int j = i + 1; j < len; j++)
		{
			if (arr[max] < arr[j])
			{
				max = j;
			}
		}
		if (max != i)
		{
			mySwap(arr[max], arr[i]);
		}
	}
}


//提供打印的模板
template<class T>
void printArray(T arr[], int len)
{
	for (int i = 0; i <len; i++)
	{
		cout << arr[i] << endl;
	}
}


void test01()
{
	//测试char数组
	char charArr[] = "bahjgtfj";
	int num = sizeof(charArr) / sizeof(char);
	mySort(charArr, num);
	printArray(charArr, num);
}
void test02()
{
	int intArr[] = { 4,5,6,9,7,1,2,3 };
	int num = sizeof(intArr) / sizeof(int);
	mySort(intArr, num);
	printArray(intArr, num);
}

int main()
{
	//test01();
	test02();

	system("pause");
	return 0;
}