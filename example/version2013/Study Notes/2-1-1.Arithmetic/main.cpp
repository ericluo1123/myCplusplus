
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){

	cout << "*****Arithmetic Operator*****" << endl;
	cout << endl;


	//在C++中提供與算術相關的 加（ + ）、減（ - ）、乘（*）、除（ / ）的運算子
	//，另外還有一個也很常用的餘除運算子（%）或稱模數（Modulus）運算子

	//產生0~99亂數，每次執行產生的亂數都一樣
	cout << rand() % 100 << endl;
	cout << rand() % 100 << endl;
	cout << rand() % 100 << endl;

	/*
	//0~9循環計數
	int counter = 0;
	while (true){

	counter = (counter + 1) % 10;
	cout << counter << endl;

	}*/

	cout << endl;
	system("pause");
	return 0;
}