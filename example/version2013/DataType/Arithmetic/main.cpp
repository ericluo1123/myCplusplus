
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){

	cout << "*****Arithmetic*****" << endl;
	cout << endl;


	//����0~99�üơA�C�����沣�ͪ��üƳ��@��
	cout << rand() % 100 << endl;
	cout << rand() % 100 << endl;
	cout << rand() % 100 << endl;

	/*
	//0~9�`���p��
	int counter = 0;
	while (true){

	counter = (counter + 1) % 10;
	cout << counter << endl;

	}*/

	//�̺⦡�������A�@���A�ഫ�A�̸����ת���ƫ��A���ؼЫ��A�A���p�����ন�ؼЫ��A
	//"��N�ഫ (Arithmetic conversion)"�A"�������A�ഫ (Implicit type conversion)"
	int number = 10;
	cout << "number = " << number / 3 << endl;

	double number2 = 10.0;
	cout << "number2 = " << number2 / 3 << endl;



	int number3 = 0;
	double number4 = 3.14;
	//�N 'double' �ഫ�� 'int'�A�ѩ��������P�A�i��ɭP��ƿ�
	number3 = number4;
	cout << "number3 = " << number3 << endl;
	//�㦡���A�ഫ�]Explicit type conversion�^�κ٤����j���૬�]Cast�^
	number3 = static_cast<int>(number4);
	cout << "number3 = " << number3 << endl;

	//������explicit type conversion�A�@�B��
	int number5 = 10;
	cout << "number5 = " << static_cast<double>(number5) / 3 << endl;

	//�¦�explicit type conversion
	int number6 = 10;
	cout << "number6 = " << (double)number6 / 3 << endl;


	cout << endl;
	system("pause");
	return 0;
}