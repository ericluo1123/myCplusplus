#include <iostream>

using namespace std;

int main(int argc, char* argv[]){

	cout << "*****if*****" << endl;
	cout << endl;

	//�P�_�ϥΪ̪���J�O�_���٬O���ơG
	int input = 0;
	int remain = 0;

	cout << "��J��ơG";
	cin >> input;

	remain = input % 2;
	if (remain == 1)
		cout << input << "���_��" << endl;
	else
		cout << input << "������" << endl;


	//�o�ӵ{���]�i�H�o��g�G
	cout << "��J��ơG";
	cin >> input;

	if (input % 2)//���� �N�l�ƹB�⪺ ���G��@���󦡨Өϥ�
		cout << input << "���_��" << endl;
	else
		cout << input << "������" << endl;


	//�h�z�ԥy
	int score = 0;
	cout << "��J���ơG";
	cin >> score;

	if (score >= 90)
		cout << "�oA" << endl;
	else if (score >= 80 && score < 90)
		cout << "�oB" << endl;
	else if (score >= 70 && score < 80)
		cout << "�oC" << endl;
	else if (score >= 60 && score < 70)
		cout << "�oD" << endl;
	else
		cout << "�oE(���ή�)" << endl;
	cout << endl;
	system("pause");
	return 0;
}