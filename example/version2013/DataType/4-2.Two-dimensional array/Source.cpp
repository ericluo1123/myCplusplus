
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){


	cout << "*****Multidimensional array*****" << endl;
	cout << endl;

	//�G���}�C���ŧi�覡
	int iarr[5][10];

	//���M�w�G���}�C������
	int iarr2[5][10] = { {}, {} };


	//�ŧi�G���}�C�ɪ�l�Ҧ����}�C��
	int iarr3[4][2] = { { 1, 2, },
	{ 3, 4 },
	{ 5, 6 },
	{ 7, 8 } };

	//�T���}�C�ŧi�覡
	int iarr4[2][3][4];

	int iarr5[2][3][4] = { { { 1, 2, 3, 4 },{ 5, 6, 7, 8 }, { 9, 10, 11, 12 } }, 
	{ { 21, 22, 23, 24 }, { 25, 26, 27, 28 }, { 29, 30, 31, 32 } },
	 };



	cout << endl;
	system("pause");
	return 0;
}