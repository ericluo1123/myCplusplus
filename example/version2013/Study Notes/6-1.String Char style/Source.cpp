
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
	char str1[80];
	cout << "��J�r��G";
	cin >> str1;
	cout << "�z��J���r�ꬰ " << str1 << endl;
	cout << endl;




	cout << endl;
	system("pause");
	return 0;
}