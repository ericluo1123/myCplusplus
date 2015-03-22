
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){


	cout << "*****Literal constant*****" << endl;
	cout << endl;

	//在程式中寫下1、1.0、3.14159這樣的數值，這類數值稱之為「字面常量」
	cout << "sizeof(1): " << sizeof(1) << "\n";
	cout << "sizeof(1.0): " << sizeof(1.0) << "\n";
	cout << endl;


	//如果您要使用8進位的字面常量，開頭加上0就可以了，
	//如果要使用16進位的 字面常量，開頭加上0x
	cout << "10進位 26	 = " << 26 << "\n";		//	10進位
	cout << "8進位  032	 = " << 032 << "\n";		//	8進位
	cout << "16進位 0x1A = " << 0x1A << "\n";	//	16進位


	/*
	escape sequence	|	說明
	----------------|---------------------------------
	\n				|	換行、新行（newline）
	\t				|	水平定位點（horizontal tab）
	\v				|	垂直定位點（vertical tab）
	\b				|	退回一格（backspace）
	\r				|	返回（carriage return）
	\f				|	換頁（formfeed）
	\a				|	嗶聲（alert bell）
	\\				|	倒斜線（backslash）
	\ ?				|	問號
	\'				|	單引號
	\"				|	雙引號
	*/


	//每一個字串最後會以一個null字元結束。
	//true與false也是字面常數，對應型態為bool。

	cout << endl;
	system("pause");
	return 0;
}