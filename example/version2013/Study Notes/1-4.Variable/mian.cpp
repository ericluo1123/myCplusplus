
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){


	cout << "*****Variable***** " << endl;
	cout << endl;
	//沒有初始其值，所以第一次顯示時會出現不可預期的資料
	int age1;
	double score1;
	char level1;

	//「指定運算子」（Assignment operator）=來指定變數的值

	cout << "*****指定運算子***** " << endl << endl;
	age1 = 5;
	score1 = 80.0;
	level1 = 'A';

	cout << "age\tscore\tlevel" << endl;
	cout << age1 << "\t" << score1 << "\t" << level1 << endl;
	cout << endl;

	//隱喻的方式來宣告變數並指定初值
	int age2(2);
	double score2(2.0);
	char level2('B');

	cout << "*****隱喻***** " << endl << endl;

	cout << "age\tscore\tlevel" << endl;
	cout << age2 << "\t" << score2 << "\t" << level2 << endl;
	cout << endl;

	//建構子(Constuctor)來指定變數的值
	int age3;
	double score3;
	char level3;

	cout << "*****建構子***** " << endl << endl;
	age3 = int(1);
	score3 = double(2);
	level3 = char('C');

	cout << "age\tscore\tlevel" << endl;
	cout << age3 << "\t" << score3 << "\t" << level3 << endl;
	cout << endl;

	//coust 關鍵字 宣告為常量(用來限定變數指定值後，不允許再作更改)
	cout << "*****const keyword*****" << endl;
	/*const是用於保護程序的健壯性，減少程序隱患。
	const的用法比較複雜，總結起來又分為以下兩種
	1:在定義變量時使用 :

	a: const int a=100; 最簡單的用法，說明變量a是一個常變量;
	b: int const b=100; 與a功能相同;
	c: const int *a=&b; 指向常數的指針，即指針本身的值是可以改變的，
	但指向的內容是不能改變的;
	d: int const *a=&b; 與c功能相同;
	e: int * const a = &b; 常指針，即指針本身的值是不可改變的，但指向的內容是可改變的;
	f: const int * const a = &b;指向常數的常指針,即指針本身與指向的內容都是不可改變的;
	g: const int &a=100; 常數引用,即不能改變引用的值;

	總結: 在使用const定義變量時，一定要進行初始化操作,
	在操作符(*,&)左邊的修飾的是指向的內容，在右邊的是本身。


	2 : 在函數用使用 :

	a: void func(const int a); 做為參數使用，說明函數體內是不
	能修改該參數的;對不參數定義時不同的形式，可參見定義變量
	時使用方式;
	b: const int func(); 做為返回值使用，說明函數的返回值是不
	能被修改的，在取得返回值時應用const int a = func();對不
	參數定義時不同的形式，可參見定義變量時使用方式;
	c: int func() const; 常函數，說明函數是不能修改類中成員的
	值的，只能用於類的成員函數中;

	總結：在函數中使用const,情況與定義變量的情況大致相同。

	*/


	//1.a
	const int a = 10; 
	//a = 20;		錯誤	1	error C3892: 'maxNum' : 無法對 const 變數進行指定動作
		
	//1.b
	int const b = 100; 
	//b = 10;		錯誤	1	error C3892: 'maxNum' : 無法對 const 變數進行指定動作	
	
	//1.c
	int z = 5;
	const int *c = &b; 

	
	c = &z; //pass
	cout << "*c = &z =" << *c << endl;
	c = &b;
	cout << "*c = &b =" << *c << endl;
	c = &a;
	cout << "*c = &a =" << *c << endl;

	
	//*c = 5; //fail

	cout << endl;

	//1.d
	int const *d = &b; //和1.c相同
	

	d = &z;
	cout << "*d = &z =" << *d << endl;
	d = &b;
	cout << "*d = &b =" << *d << endl;
	d = &a;
	cout << "*d = &a =" << *d << endl;
	cout << endl;
	
	int ee = 10,aa=5,bb=10;
	int* const e = &ee; //1.e

	
	*e = 10; //pass

	
	//e= &ee; //fail
	
	cout << "*e  =" << *e << endl;
	cout << "e  =" << e << endl;
	cout << endl;
	
	//1.f
	const int * const f = &b;

	//fail
	//*f = 10;
	//f = &aa;

	//1.g
	const int &g = 100;
	cout << "g = " << g <<endl;
	cout << "&g = " << &g << endl;
	cout << endl;

	const int &h = ee;



	//fial
	//g = 10;

	//基本參照應用
	int vv = 10, ff = 20;
	int &v =vv;

	cout << "&v = " << &v << endl;
	cout << "v = " << v << endl;
	cout << endl;
	v = ff;
	cout << "&v = " << &v << endl;
	cout << "v = " << v << endl;
	cout << endl;
	v = 10;


	//基本指標應用
	int j = 20, k = 30;
	int *p;
	p = &j;	//將j的位址給指標p
	
	cout << "pointer p address = " << p << endl; //輸出指標p的位址 : p
	
	cout << "pointer p content = " << *p << endl; //輸出指標p的內容 : *p

	cout << endl;

	*p = 5; //將*p位址的內容指定為5
	cout << "pointer p address = " << p << endl; //輸出指標p的位址 : p

	cout << "pointer p content = " << *p << endl; //輸出指標p的內容 : *p

	cout << endl;











	cout << endl;
	//unsinged  關鍵字 :宣告為無號(無正負)

	unsigned int i = 1;

	//bool 型態 無法加上無號
	bool checked = true;




	system("pause");
	return 0;
}