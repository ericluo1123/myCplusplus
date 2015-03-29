
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){


	cout << "*****Reference*****" << endl << endl;

	//�n�w�q�Ѧҫ��A�A�b�w�q���A�ɩ󫬺A����r��[�W&�B��l�A�Ҧp�G
	int var = 10;  // �w�q�ܼ�
	int *ptr = &var; // �w�q���СA���Vvar����}
	int &ref = var;  // �w�q�ѦҡA�N��var�ܼ�

	//�W�����{�����A�̫�@��Y�O�b�w�q�Ѧҫ��A�A�`�N�Ѧҫ��A�@�w�n��l�ơA�Ҧp�U�����w�q�O����q�L�sĶ���G
	//int &ref; // error, `ref' declared as reference but not initialized 
	cout << "var = 10" << endl;
	cout << "var: " << var 
		<< endl;
	cout << "ref: " << ref
		<< endl;
	cout << endl;

	cout << "ref = 20" << endl;
	ref = 20;
	cout << "var: " << var 
		<< endl;
	cout << "ref: " << ref
		<< endl;
	cout << endl;
	//	�z�]�i�H�ѦҦܤ@�Ӧr���`�q�A�Ҧp�G
	const int &ref1 = 10;
	cout << "&ref1 = " << &ref1 << endl;
	//
	//������n�b�e���[�Wconst�~��ѦҦܤ@�Ӧr���`�q�O�H�z���D�r���`�q�O���i�w�}���A���F������ŦX�Ѧҩw�}���y�q�A�W���o�q�{���sĶ���|�Ǧp�U���� ���G
	int tmp = 10;
	const int &ref2 = tmp;
	
	//
	//���Q�Q�S���[�Wconst�����p�A�p�G�z��ref���s���w�ȡA�h��ڧ��ܪ��Otmp���ȡA�Ӥ��O�r���`�q10�A�o�N�b�ŦX�r���`�q�L�k���}�]�]�N�L�k��			�� ��}�W���ȡ^���y�q�A���ϥΪ̥i��x�b�������ܤFref�A����r���`�q�S�����ܡA�ҥH�[�Wconst�A���T���ܤ��i�H�A���s���w�ȵ�ref�A��			�p�G
	//const int &ref = 10;
	//ref = 20; // error, assignment of read-only reference `ref' 
	//
	//�p�G�n�w�q���Ы��A���ѦҸӦp��O�H��²��A���Ы��A�O�ϥ�type*�ӫŧi�A�ӰѦҫh�O�b�W�٫e�[�W&�A�ҥH���Ы��A���ѦҴN�p�U�� �ܡG
	int *somePtr = 0;
	int *&refOfPtr = somePtr;
	cout << "refOfPtr = " << refOfPtr << endl;
	//
	//�@�Ө��骺�Ҥl�p�U�G
	//int var = 10;
	//int *ptr = &var;
	//int *&ref = ptr;
	//
	//�|�@�ϤT���ܡA�p�G����const�ܼơA�z�i�H�ϥΤ@��const���СA�åi�H�p�U�ŧi�@�ӫ��Ъ��ѦҡG
	//const int var = 10;
	//const int *ptr = &var;
	//const int *&ref = ptr;
	//
	//�ƹ�W�ܤַ|�����p�W���覡�ӨϥΰѦҡA�ӬO�Ω�禡�ǻ��ɤ@�ءu�ǰѦҡv�]Pass by reference�^�覡�A�ت��b��i��禡�������ާ@�ؼ���			�ƩΪ���A�Ϊ̬O�קK�ƻs�@�Ӥj������A�b����n�Ш禡�ɷ|����������ΡC



	cout << endl;
	system("pause");
	return 0;
}