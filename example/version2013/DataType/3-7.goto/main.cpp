
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){


	cout << "*****goto*****" << endl;
	cout << endl;

	//goto�O�@�ӫܤ�K�A���O�̤��Q��ĳ�ϥΪ��y�k�A
	//�ݥΥ����ܷ|�}�a�{�����[�c�B�ϱo�{�����޿����Htrace�A�ƹ�W�A
	//�b�������ϥ�goto�����p�U�A 
	//�z�]�i�H�ϥε��c�ƪ��y�k�Ӽ��g�{���C

	int input = 0;

begin:

	cout << "��J�@�ơG";
	cin >> input;

	if (input == 0)
		goto error;

	cout << "100 / " << input
		<< " = " << static_cast<double>(100) / input
		<< endl;

	return 0;

error:
	cout << "���Ƥ��i��0" << endl;
	goto begin;




	cout << endl;
	system("pause");
	return 0;
}