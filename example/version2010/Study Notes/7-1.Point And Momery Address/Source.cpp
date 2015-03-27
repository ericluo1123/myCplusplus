
#include <iostream>

using namespace std;

void foo(const int*);


int main(int argc, char* argv[]){


	cout << "*****Pointer And Memory Address*****" << endl << endl;

	int var = 10;
	cout << "var����" << var << endl;
	//&�O�u���}�B��l�v�]Address-of operator�^�A���i�H���X�ܼƪ��O�����}
	cout << "var���O�����m " << &var << endl;
	cout << endl;

	//���Хi���V�S�w���O�����}�A�Ӥ������ާ@�ܼƩΪ���
	//int* iptr;
	//float* fptr;
	//char* cptr;

	//�ŧi���Ь�var���O�����m
	cout << "ptr��var���O�����m" << endl;
	int *ptr = &var;
	cout << "int var = 10" << endl;
	cout << "int* ptr = &var;" << endl;
	cout << "var memory address = " << &var << endl;
	cout << "var content value = " << var << endl;
	cout << "ptr memory address = " << ptr << endl;
	cout << "ptr content value = " << *ptr << endl;
	cout << endl;

	//�N�ȩ��ptr�ҫ��V���O�����}
	cout << "�N�ȩ��ptr�ҫ��V���O�����}" << endl;
	*ptr = 20;
	cout << "*ptr = 20;" << endl;
	cout << "var content value = " << var << endl;
	cout << "ptr content value = " << *ptr << endl;
	cout << endl;


	/*
	����l���дN���w�ȵ�*ptr�A�ҥH�|�y�����i�w�������G�]�q�`�O�O����Ϭq���~�^�A
	�̦n�����г]�w��ȡA�p�G���Ф@�}�l�����V���󪺪� ��A
	�h�i�]�w��Ȭ�0�A��ܤ����V���󪫥�
	*/
	int *tptr = 0;
	cout << "�]�w��Ȭ�0�A��ܤ����V���󪫥�" << endl;
	//cout << "*tptr =" << *tptr << endl; //Ū����m 0x00000000 �ɵo�ͦs���H�W
	cout << "tptr =" << tptr << endl;
	cout << endl;
	/*
	�b���Ыŧi�ɡA�i�H�a�b�W�ٮ���A�]�i�H�a�b����r����
	�i�H�קK�H�U�����~�G
	int* ptr1, ptr2;
	�o�˪��ŧi�覡�A��Ǫ̥i��H��ptr2�]�O���СA���ƹ�W�ä��O�A
	�H�U���ŧiptr1�Pptr2�~���O���СG
	int *ptr1, *ptr2;
	*/
	/*�u�Ʊ��x�s�O���骺��}�A�M��N���P�t�@�ӰO�����}�@����A
	�o�ɨä��ݭn���߫��A�����D�A�z�i�H�ϥ�void*�ӫŧi���СA�Ҧp�G*/
	cout << "�ϥ�void*�ӫŧi����" << endl;
	cout << "void* vptr = &var;" << endl;
	void* vptr = &var;
	cout << endl;
	//void���A�����ШS�����󪺫��A��T�A�ҥH�u�Ψӫ�����}��T�A
	//�z���i�H�ϥ�*�B��l��void���A���д����ȡA
	//�ӥ����ϥ� reinterpret_cast�@�૬�ʧ@�ܹ��������A

	// �U���o�y���i��Avoid���A���Ф��i���� 
	//cout << *vptr << endl;
	// �૬��int���A���Шë��w��v2ptr 
	cout << "�૬��int���A���Шë��w��v2ptr" << endl;
	cout << "int *v2ptr = reinterpret_cast<int*>(vptr);" << endl;

	int *v2ptr = reinterpret_cast<int*>(vptr);
	cout << "void�૬��~�iŪ���e�� *v2ptr = " << *v2ptr << endl;
	cout << endl;
	//�z�]�i�H�ϥ��­��檺�૬�y�k�A�p�U�ҥܡG
	//	int var = 10;
	//void *vptr = &var;
	//// �૬��int���A���Шë��w��iptr 
	//int *iptr = (int*)(vptr);


	/*
	const�ŧi���ܼơA�Qconst�ŧi���ܼƤ@���Q���w�ȡA
	�N����A�����ܼƪ��ȡA�z�]�L�k����ܼƦp�U���ȡG
	*/
	cout << "const�ŧi���ܼ�" << endl;
	cout << "const int var1 = 10;" << endl;
	const int var1 = 10;
	//var1 = 20; // error, assignment of read-only variable `var' 
	//int *cptr = &var1; // error,  invalid conversion from `const int*' to `int*' 

	//��const�ŧi���ܼơA�����ϥι�����const���A���Ф~�i�H�G
	cout << "�����ϥι�����const���A����" << endl;
	cout << "const int *vptr1 = &var1;" << endl;
	const int *vptr1 = &var1;
	cout << "*vptr1  = " << *vptr1 << endl;
	//����p�U�չϧ��ܩҫ��V�O���餤����ơG
	//*vptr = 20; // error, assignment of read-only location 

	//���б`�ơA�]�N�O�z�@�����w�����ЭȡA�N������w�s���O�����}�ȵ����A�Ҧp�G
	int x = 10;
	int y = 20;
	int* const vptr2 = &x;
	cout << " *vptr2 = &x = " << *vptr2 << endl;
	//vptr2 = &y;  // error,  assignment of read-only variable `vptr'
	cout << " *vptr2 = &y = " << *vptr2 << endl;
	cout << endl;
	/*
	const int a = 10; �����ܶqa�O�@�ӱ`��
	int const b =10;�Pa�ۦP
	int* const vptr2 = &x; address����Q�ק�
	int const *vptr2 = &x; ��address��content����Q�ק�
	const int* const vptr2 = &x address�Mcontent����Q�ק�
	const int &a=100; �`�Ƥޥ�,�Y������ܤޥΪ���
	*/


	cout << "���ܰ�Ū�ϰ쪺�ȡA�o�ɱz�i�H�ϥ�const_cast���ܫ��Ъ����A" << endl;
	int var2 = 10;

	cout << "var2 = " << var2 << endl;

	foo(&var2);

	cout << "var2 = " << var2 << endl;


	cout << endl;
	system("pause");
	return 0;
}

void foo(const int* p){
	cout << "int *v = const_cast<int*>(p);" << endl;
	int *v = const_cast<int*>(p);
	*v = 20;
	//*p = 20; // error �L�k��const �ܼƶi����w�ʧ@

	//�z�]�i�H�ϥ��­��檺�૬�y�k�A�Ҧp�G
	//	void foo(const int* p) {
	//		int* v = (int*)(p);
	//		*v = 20;
	//	}
}