
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){


	cout << "*****One-dimensional array*****" << endl;
	cout << endl;
	//�@���}�C

	//�}�C���ŧi�覡
	int intArray[10];			// �ŧi10�Ӥ��������Array 
	double doubleArray[10];		// �ŧi10�Ӥ������B�I��Array 
	char charArray[10];			// �ŧi10�Ӥ������r��Array

	//���M�w�}�C������
	int intArray2[10] = { 0 };				//��l��0
	double doubleArray2[10] = { 0.0 };		//��l��0.0
	char charArray2[10] = { '0' };		//��l���Ŧr���]'\\0'�^
	bool boolArray[10] = { false };			//��l��false

	//�ŧi�}�C�ɪ�l�Ҧ����}�C��
	int intArray3[5] = { 0, 1, 2, 3, 4 };
	double doubleArray3[5] = { 0.0, 0.1, 0.2, 0.3, 0.4 };
	char charArray3[5] = { 'A', 'B', 'C', 'D', 'E' };
	bool boolArray2[5] = { false, true, false, true, false };


	//�o���}�C���ס]�����Ӽơ^
	int iarr[] = { 1, 2, 3, 4, 5, 6 };
	cout << "Array���סG"
		<< (sizeof(iarr) / sizeof(iarr[0]))
		<< endl;


	//�z���i�H�N�}�C�������w���t�@�Ӱ}�C�A�άO���������Ӱ}�C�O�_�ۦP
	//�Ҧp�G
	int iarr1[5];
	int iarr2[5];
	//arr1 = arr2; // ���~�I���ઽ�����w�}�C���t�@�Ӱ}�C

	if (iarr1 == iarr2) { // ���~�I���ઽ�������Ӱ}�C�O�_�ۦP

	}


	//�p�G�n�N�}�C���w���t�@�Ӱ}�C�A�z�u��`�Ǥ@�Ӥ@�Ӥ����i��ƻs�A�Ҧp�G
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