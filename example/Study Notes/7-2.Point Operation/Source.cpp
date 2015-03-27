
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){

	//指定運算子=、取址運算子&與取值運算子*之外，
	//還有+、-、++、--、+=與-=等運算子可以使用在指標上。
	//指標運算的是資料型態的記憶體長度
	cout << "*****Point Operation*****" << endl << endl;


	//宣告的是int型態的指標，所以每加1就會前進4個位元組的長度
	cout << "int pointer" << endl;
	int *ptr = 0;
	
	cout << "ptr memory location : " << ptr << endl;
	cout << "ptr+1 = " << ptr + 1 << endl;
	cout << "ptr+2 = " << ptr + 2 << endl;
	cout << endl;

	//double pointer
	cout << "double pointer" << endl;
	double *dptr = 0;
	cout << "dptr memory location : " << dptr << endl;

	cout << "dptr+1 = " << dptr + 1 << endl;

	cout << "dptr+2 = " << dptr + 2 << endl;


	cout << endl;
	system("pause");
	return 0;
}