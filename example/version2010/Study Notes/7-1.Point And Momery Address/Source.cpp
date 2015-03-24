
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){


	cout << "*****Pointer And Memory Address*****" << endl << endl;

	int var = 10;
	cout << "var的值" <<var<<endl;
	//&是「取址運算子」（Address-of operator），它可以取出變數的記憶體位址
	cout << "var的記憶體位置 "<< &var<<endl;
	cout << endl;

	//指標可指向特定的記憶體位址，而不直接操作變數或物件
	int* iptr;
	float* fptr;
	char* cptr;

	//宣告指標為var的記憶體位置
	cout << "ptr取var的記憶體位置" <<endl;
	int* ptr = &var;
	cout << "var memory address = " << &var << endl;
	cout << "ptr memory address = " << ptr << endl;
	cout << endl;







	cout << endl;
	system("pause");
	return 0;
}