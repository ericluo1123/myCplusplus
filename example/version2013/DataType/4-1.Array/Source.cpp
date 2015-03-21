
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){


	cout << "*****One-dimensional array*****" << endl;
	cout << endl;
	//一維陣列

	//陣列的宣告方式
	int intArray[10];			// 宣告10個元素的整數Array 
	double doubleArray[10];		// 宣告10個元素的浮點數Array 
	char charArray[10];			// 宣告10個元素的字元Array

	//未決定陣列中的值
	int intArray2[10] = { 0 };				//初始為0
	double doubleArray2[10] = { 0.0 };		//初始為0.0
	char charArray2[10] = { '0' };		//初始為空字元（'\\0'）
	bool boolArray[10] = { false };			//初始為false

	//宣告陣列時初始所有的陣列值
	int intArray3[5] = { 0, 1, 2, 3, 4 };
	double doubleArray3[5] = { 0.0, 0.1, 0.2, 0.3, 0.4 };
	char charArray3[5] = { 'A', 'B', 'C', 'D', 'E' };
	bool boolArray2[5] = { false, true, false, true, false };


	//得知陣列長度（元素個數）
	int iarr[] = { 1, 2, 3, 4, 5, 6 };
	cout << "Array長度："
		<< (sizeof(iarr) / sizeof(iarr[0]))
		<< endl;


	//您不可以將陣列直接指定給另一個陣列，或是直接比較兩個陣列是否相同
	//例如：
	int iarr1[5];
	int iarr2[5];
	//arr1 = arr2; // 錯誤！不能直接指定陣列給另一個陣列

	if (iarr1 == iarr2) { // 錯誤！不能直接比較兩個陣列是否相同

	}


	//如果要將陣列指定給另一個陣列，您只能循序一個一個元素進行複製，例如：
	const int length = 5;
	int iarr3[length];
	int iarr4[length];

	for (int i = 0; i < length; i++) {
		iarr3[i] = iarr4[i];
	}

	cout << endl;
	system("pause");
	return 0;
}