
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){


	cout << "*****Literal constant*****" << endl;
	cout << endl;

	//�b�{�����g�U1�B1.0�B3.14159�o�˪��ƭȡA�o���ƭȺ٤����u�r���`�q�v
	cout << "sizeof(1): " << sizeof(1) << "\n";
	cout << "sizeof(1.0): " << sizeof(1.0) << "\n";
	cout << endl;


	//�p�G�z�n�ϥ�8�i�쪺�r���`�q�A�}�Y�[�W0�N�i�H�F�A
	//�p�G�n�ϥ�16�i�쪺 �r���`�q�A�}�Y�[�W0x
	cout << "10�i�� 26	 = " << 26 << "\n";		//	10�i��
	cout << "8�i��  032	 = " << 032 << "\n";		//	8�i��
	cout << "16�i�� 0x1A = " << 0x1A << "\n";	//	16�i��


	/*
	escape sequence	|	����
	----------------|---------------------------------
	\n				|	����B�s��]newline�^
	\t				|	�����w���I�]horizontal tab�^
	\v				|	�����w���I�]vertical tab�^
	\b				|	�h�^�@��]backspace�^
	\r				|	��^�]carriage return�^
	\f				|	�����]formfeed�^
	\a				|	���n�]alert bell�^
	\\				|	�˱׽u�]backslash�^
	\ ?				|	�ݸ�
	\'				|	��޸�
	\"				|	���޸�
	*/


	//�C�@�Ӧr��̫�|�H�@��null�r�������C
	//true�Pfalse�]�O�r���`�ơA�������A��bool�C

	cout << endl;
	system("pause");
	return 0;
}