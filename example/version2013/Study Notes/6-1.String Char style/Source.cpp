
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]){


	cout << "*****String Char Style*****" << endl;
	cout << endl;

	//char style �r�ꪺ�ŧi
	char str[] = "hello";


	for (int i = 0; i < (sizeof(str) / sizeof(str[0])); i++){
		if (str[i] == '\0'){
			cout << " NULL";
		}
		else{
			cout << " " << str[i];
		}
	}

	cout << endl;

	//�Ŧr���b�@����P�_�ɡA�|�Q����0�A�ҥH�W���٥i�H�o��g�G
	if (!str[0]) {
		cout << "�r�ꬰ��";
	}
	cout << endl;


	//�r��@�����w�A�������״N�T�w�F�A�]�N�O�r���}�C�����סA�ҥH�z�ѨϥΪ̿�J���o�r��ȮɡA�ݪ`�N���n�W�L�r�ꪺ���סF
	//�q�ϥΪ̿�J���o�r��ȥu�n�o��@ �N�i�H�F�G
	//�]�A�ťզr���A�ҥH��ڤW�i�H��J79�Ӧr��

	char str1[80] = "input";
	cout << "��J�r��G";
	cin >> str1;
	cout << "�z��J���r�ꬰ " << str1 << endl;
	cout << endl;

	char str2[80] = "hello";

	//str1 �M str2 �r�ꤺ�e
	cout << "str1 �M str2 ���r�ꤺ�e" << endl;
	cout << "str1: " << str1 << endl
		<< "str2: " << str2 << endl
		<< endl;

	// �Nstr2�ƻs��str1 
	cout << "�Nstr2�ƻs��str1 " << endl;
	strcpy_s(str1, str2);
	cout << "str1: " << str1 << endl
		<< "str2: " << str2 << endl
		<< endl;

	// �Nstr2���bstr1�� 
	cout << "�Nstr2���bstr1��" << endl;
	strcat_s(str1, str2);
	cout << "str1: " << str1 << endl
		<< "str2: " << str2 << endl
		<< endl;

	//�p�⤣�t�Ŧr�����r����� 
	cout << "�p�⤣�t�Ŧr�����r����� " << endl;
	cout << "str1���סG" << strlen(str1) << endl
		<< "str2���סG" << strlen(str2) << endl
		<< endl;


	//�����Ӧr��
	cout << "�����Ӧr��" << endl;
	cout << "str1�Pstr2��� return :" << strcmp(str1, str2) << endl
		<< endl;



	/*
	�p�G�z�ϥ�cin�Ө��o�ϥΪ̪���J�r��A
	�h�z�|�o�{��J�r��ɤ�������]�A�ťաA
	�p�G�z�Q�n�b��J�r��ɥ]�A�ťաA�z�����ϥ�gets()�禡�A�Ҧp�G
	*/
	//char str3[80];
	//cout << "��J�r��G";
	//gets(str);
	//cout << "��J���r��G" << str << endl;
	//cout << endl;

	system("pause");
	return 0;
}