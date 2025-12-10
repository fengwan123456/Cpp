//类与对象    C++ 三大特性   封装，继承，多态

#include<iostream>
#include<string>
using namespace std;

// const double pi=3.14;
//
////class代表设计一个类，类后面紧跟着就是类的名称 
//class Circle
//{
//	//访问权限
//	//公共权限 
//	public:
//		//属性
//		//半径 
//		int m_r;
//    //行为
//	//获取圆的周长 
//    double C()
//    {
//    	return 2*pi*m_r; 
//	}
// } ;
// 
// int main()
// {
// 	
// 	//通过园类创建具体的圆（对象）
//	 //实例化
//	 Circle c1;
//	 c1.m_r=10;
//	 //给圆对象的属性进行赋值 
//	 
//	 cout<<c1.C()<<endl; 
// 	return 0;
// }
 
 
 
 //设计一个学生类
// 
// class Student
// {
// 	public:
// 		int num;
// 		string s;
// 		
// 	    int getnum()
// 	    {
// 	    	return num;
//		 }
//		 string gets()
//		 {
//		 	return s;
//		 }
// 		
//  } ;
//  
//  int main()
//  {
//  	Student s1;
//  	s1.num=1234;
//  	s1.s="fengwan";
//  	cout<<"学号:"<<s1.getnum()<<endl; 
//  	cout<<"名字："<<s1.gets()<<endl; 
//  	
//  	return 0;
//  }
//  

  
  //访问权限
  
//  1. public   公用   类的内外都可以访问
 
//  2. protected 保护  类内可以，类外不可以 
//  3. private   私有  类内可以，类外不可以

//// 人类（父类）
//class Person {
//public:
//    // 公共成员：类内、类外、子类都能访问
//    string name;  // 姓名（公开信息）
//
//protected:
//    // 保护成员：类内、子类能访问，类外不能
//    int age;       // 年龄（半公开，仅自己和子类可访问）
//
//private:
//    // 私有成员：仅类内能访问，类外、子类都不能
//    string idCard; // 身份证号（私密信息，仅自己可见）
//
//public:
//    // 类内函数：可以访问所有权限的成员
//    void setInfo(string n, int a, string id) {
//        name = n;    // 访问public成员
//        age = a;     // 访问protected成员
//        idCard = id; // 访问private成员
//    }
//
//    void showPublic() {
//        cout << "姓名：" << name << endl; // 可访问public
//    }
//
//    void showProtected() {
//        cout << "年龄：" << age << endl;  // 类内可访问protected
//    }
//
//    void showPrivate() {
//        cout << "身份证：" << idCard << endl; // 类内可访问private
//    }
//};
//
//// 学生类（子类，继承Person）
//class Student : public Person {
//public:
//    void studentShow() {
//        // 子类可以访问父类的public和protected成员
//        cout << "子类访问姓名：" << name << endl;  // public允许
//        cout << "子类访问年龄：" << age << endl;   // protected允许
//
//        // 子类不能访问父类的private成员
//        // cout << "子类访问身份证：" << idCard << endl; // 报错！private禁止
//    }
//};
//
//int main() {
//    Person p;
//    // 类外只能访问public成员
//    p.name = "张三";          // public允许
//    // p.age = 20;            // 报错！protected禁止类外访问
//    // p.idCard = "123...";   // 报错！private禁止类外访问
// 

  
                                                  
  
  
  //struct与类的区别    默认的访问权限不同  
    //struct 默认是公共，类是私有 
//  
//  class C1
//  {
//  	int m_A;
//  	
//   } ;
//  
//  struct C2
//  {
//  	 int m_B;
//  };
//  
//  int main()
//  {
//  	C1 c1;
//  	//c1.m_A=100;
//  	C2 c2;
//  	c2.m_B=100;
//  	cout<<c2.m_B<<endl;
//  	
//  	
//  	return 0;
//  }
//  
  
  
  
  //成员属性私有化 
  //优点：可以自己控制读写权限  对于写权限，可以检测数据有效性
//  class Person
//  {
//  	public:
//  		void setName(string name)
//  		{
//  			m_Name=name;
//		  }
//		  string getName()
//		  
//		  {
//		  	return m_Name;
//		  }
//		  //获取年龄 
//		  int getAge() 
//		  {
//		  	return m_Age;
//		  }
//		  void  setIdol()
//		  {
//		  	m_Idol=idol;
//		   } 
//		   string getIdol()
//		   {
//		   	return m_Idol;
//		   }
//		  private:
//		  	string m_Name;  //姓名 可读可写 
//		  	int m_Age=18;      //年龄   只读 
//		  	string m_Idol;   // 偶像  只写 
//	 };
//	 
//	 
//	 
//	 int main()
//	 {
//	 	Person p;
//	 	p.setName("fengwan");
//	 
//	 	cout<<p.getAge()<<endl;
//	    
//		cout<<p.getName()<<endl;
//		    //偶像是只写，外界访问不到 
//			p.setIdol("ikun");
//		cout<<p.getIodl()<<endl;
//	}   
//  
//  
  
  
  
  
  //立方体设计 


//
//// 立方体类（类名改为Cube更直观）
//class Cube {
//public:
//    // 设置长、宽、高（set函数用于赋值）
//    void setc(int q) { m_c = q; }
//    void setk(int w) { m_k = w; }
//    void setg(int e) { m_g = e; }
//
//    // 获取长、宽、高（get函数用于取值，无参数）
//    int getc() { return m_c; }
//    int getk() { return m_k; }
//    int getg() { return m_g; }
//
//    // 计算体积（长×宽×高）
//    int L() { return m_c * m_k * m_g; }
//
//private:
//    int m_c; // 长（假设m_c代表长）
//    int m_k; // 宽（假设m_k代表宽）
//    int m_g; // 高（假设m_g代表高）
//};
//
//int main() { // 修正：mian → main（主函数必须是main）
//    Cube l; // 创建立方体对象
//
//    // 用set函数赋值（不是get函数！）
//    l.setc(10);  // 设置长为10
//    l.setk(10);  // 设置宽为10
//    l.setg(10);  // 设置高为10
//
//    // 计算并输出体积
//    cout << l.L() << endl; // 输出：10*10*10=1000
//
//    return 0;
//}
//  
//  
//  
//  
//  
//  
  
  
  
  
  
  ///12.1
  //对象的初始化与清理
  
  // 构造函数    进行初始化操作
  //构造函数与析构函数都是必须实现的，如果我们自己不提供，编译器会提供一个空实现的析构与构造 
  
  class Person 
  {
  	// 构造函数  没有返回值 不用写void   函数名与类重名    可以有参数，可以重载     会自动调用 而且调用一次 
  	public:
  	Person()
	  {
	  	cout<<"Person构造函数的调用"<<endl; 
	   } 
	   //析构函数  进行清理操作
	   //没有返回值  不写void
	   //函数名与类名相同，在函数名前面加上~
	   //析构函数不可以用参数的，不可以发生重载
	   //对象在销毁前，会自动调用析构函数，只调用一次
	   ~Person()
	   {
	   	cout<<"Person析构函数的调用"<<endl;
		} 
  	
   }; 
   void test01  ()
   {
   	Person p;    //在栈上的数据 
   }
   
   int main()
   {
   //	test01();
   Person p;
   system("pause"); 
	} 
  
                                                                                                                                                   
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
