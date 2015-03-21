
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){


	cout << "*****Multidimensional array*****" << endl;
	cout << endl;

	//二維陣列的宣告方式
	int iarr[5][10];

	//未決定二維陣列中的值
	int iarr2[5][10] = { {}, {} };


	//宣告二維陣列時初始所有的陣列值
	int iarr3[4][2] = { { 1, 2, },
	{ 3, 4 },
	{ 5, 6 },
	{ 7, 8 } };

	//三維陣列宣告方式
	int iarr4[2][3][4];

	int iarr5[2][3][4] = { { { 1, 2, 3, 4 },{ 5, 6, 7, 8 }, { 9, 10, 11, 12 } }, 
	{ { 21, 22, 23, 24 }, { 25, 26, 27, 28 }, { 29, 30, 31, 32 } },
	 };



	cout << endl;
	system("pause");
	return 0;
}