
#include <iostream>

using namespace std;

void showpara(int);
void showpara(int, int);
void showpara(double);

int main(int argc, char* argv[]){


	cout << "*****Overloaded Function*****" << endl << endl;

	//�̰ѼƦC�Ӽƪ����P�ӭ���
	showpara(10);
	showpara(20, 30);
	//�ھڰѼƪ����A�ӨM�w�n�I�s���禡
	showpara(10.0);
	//�]�i�H�ھڰѼƪ��ӼơA�άO��Ӫ����X�A���n�`�N���O�A
	//��^�ȫ��A����Χ@�P�_�禡�������̾ڡC



	cout << endl;
	system("pause");
	return 0;
}

void showpara(int x) {
	cout << "�޼ơG" << x
		<< endl;
}

void showpara(int x, int y) {
	cout << "�޼ơG" << x
		<< "\t" << y
		<< endl;
}


void showpara(double x) {
	cout << "double �޼ơG" << x
		<< endl;
}