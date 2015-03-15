
#include <iostream>

using namespace std;

void main(){

    cout << "Data Type!!" << endl;
	cout << endl;
	cout << "data type\tsize(byte)\t" << endl;
	cout << "char\t\t" << sizeof(char) << endl;			//-128～127					%c
	cout << "short\t\t" << sizeof(short) << endl;
	cout << "int\t\t" << sizeof(int) << endl;			//-32768～32767				%d, %x, %o, %u, %X
	cout << "long\t\t" << sizeof(long) << endl;			//-2147483648～2147483647	%ld, %lx, %lX, %lo, %lu
	cout << "float\t\t" << sizeof(float) << endl;		//3.4E-38～3.4E+38(7位有效)	%f, %e, %E, %g, %G
	cout << "double\t\t" << sizeof(double) << endl;		//1.7E-308～1.7E+308(15位)	%lf, %le, %lg

	cout << endl;
	cout << "data type\tsize(bit)\t" << endl;
	cout << "bool\t\t" << sizeof(bool) << endl;
	cout << "true\t\t" << sizeof(true) << endl;
	cout << "false\t\t" << sizeof(false) << endl;

	//顯式型態轉換（Explicit type conversion）
	cout << "Explicit type conversion" << endl;
	cout << endl;
	cout << "static_cast<int>(true)\t\t" << static_cast<int>(true) << endl;
	cout << "static_cast<int>(false)\t\t" << static_cast<int>(false) << endl;


	//unsigned datatype

	system("pause");
}