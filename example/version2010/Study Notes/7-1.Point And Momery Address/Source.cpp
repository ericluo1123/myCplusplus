
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){


	cout << "*****Pointer And Memory Address*****" << endl << endl;

	int var = 10;
	cout << "var����" <<var<<endl;
	//&�O�u���}�B��l�v�]Address-of operator�^�A���i�H���X�ܼƪ��O�����}
	cout << "var���O�����m "<< &var<<endl;
	cout << endl;

	//���Хi���V�S�w���O�����}�A�Ӥ������ާ@�ܼƩΪ���
	int* iptr;
	float* fptr;
	char* cptr;

	//�ŧi���Ь�var���O�����m
	cout << "ptr��var���O�����m" <<endl;
	int* ptr = &var;
	cout << "var memory address = " << &var << endl;
	cout << "ptr memory address = " << ptr << endl;
	cout << endl;







	cout << endl;
	system("pause");
	return 0;
}