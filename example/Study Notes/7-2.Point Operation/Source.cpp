
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){

	//���w�B��l=�B���}�B��l&�P���ȹB��l*���~�A
	//�٦�+�B-�B++�B--�B+=�P-=���B��l�i�H�ϥΦb���ФW�C
	//���йB�⪺�O��ƫ��A���O�������
	cout << "*****Point Operation*****" << endl << endl;


	//�ŧi���Oint���A�����СA�ҥH�C�[1�N�|�e�i4�Ӧ줸�ժ�����
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