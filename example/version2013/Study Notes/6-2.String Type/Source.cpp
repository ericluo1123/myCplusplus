
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]){


	cout << "*****String Type*****" << endl << endl;

	string str1;	// �إߤ@��string����A���e���Ŧr��			
	string str2 = "caterpillar";// �H�r��`�q�إߦr��
	string str3(str2); //�Hstring��ҫإߦr��

	cout << "str1 = " << str1 << endl;
	cout << "str2 = " << str2 << endl;
	cout << "str3 = " << str3 << endl;
	cout << endl;
	//�ϥ�empty()�Ӵ��զr��O�_����
	cout << "�ϥ�empty()�Ӵ��զr��O�_����" << endl;
	if (str1.empty()){
		cout << "str1���Ŧr��" << endl;
	}
	cout << endl;

	//�ϥ�size()�Ӵ��զr�����
	cout << "�ϥ�size()�Ӵ��զr�����" << endl;

	cout << "str1�r����� : " << str1.size() << endl;
	cout << "str2�r����� : " << str2.size() << endl;
	cout << "str3�r����� : " << str3.size() << endl;

	cout << endl;

	//�ϥ� == �Ӥ����Ӧr�ꪺ�r�����e�O�_�ۦP
	cout << "�ϥ�==�Ӥ����Ӧr�ꪺ�r�����e�O�_�ۦP" << endl;
	if (str1 == str2){
		cout << "str1 �P str2 ���e�ۦP " << endl;
	}

	if (str3 == str2){
		cout << "str3 �P str2 ���e�ۦP " << endl;
	}
	cout << endl;

	/*
	�o�ӫ��w(=)�|�Nstr1�쥻���r��O����Ŷ�����A
	�í��s�t�m�����e��str2���O����Ŷ��A
	�M��Nstr2���U�Ӧr���ƻs��str1�F
	�z�]�i�H�N�@��C - Style���r����w��string�A�Ҧp�G
	*/
	string name("caterpillar");
	char str[] = "justin";

	cout << "name = " << name << endl;
	cout << "str = " << str << endl;
	cout << "����name = str (str ���w�� name)" << endl;
	name = str;
	cout << "���w��name = " << name << endl;
	cout << endl;

	//���O�z����N�@��string��ҫ��w���r���}�C�A�Ҧp�G
	/*
		str = name; // error
		*/

	//�z�]�i�H�����ϥ� + �B��l�Ӧ걵�r��A�Ҧp�G
	str1 = str1 + str2;
	str1 = str1 + "\n";
	cout << "str1 = " << str1 << endl;
	cout << endl;

	//string����ҥi�H�ϥΤU�йB��l[]
	//���w���ިӦs���۹�����m���r���A
	//�N���p�r���}�C���ާ@�@��
	cout << "�ϥΤU�йB��l[]�r���}�C���ާ@" << endl;
	for (int i = 0; i < str1.length(); i++){
		cout << str1[i];
	}
	cout << endl;


	//string���O�ҥͦ�������֦��X�ӱ`�Ϊ���k�]method�^
	string s1;
	string s2("caterpillar");
	string s3(s2);

	cout << "s1 = " << s1 << endl;
	cout << "s2 = " << s2 << endl;
	cout << "s3 = " << s3 << endl;
	cout << endl;

	//assgin ���w�r��(string,�qn�ӡA�@��n��)
	cout << "assgin ���w�r��" << endl;
	s1 = s1.assign(s2, 0, 5);
	cout << "s1 = " << s1 << endl;
	s1 = s1.assign("caterpillar", 5,6);
	cout << "s1 = " << s1 << endl;
	cout << endl;

	//append: �r��걵 
	cout << "append: �r��걵 " << endl;
	s1 = s1.append(s2, 0, 5);
	s1 = s1.append(s3, 5, 6);
	cout << "s1: " << s1 << endl;
	cout << endl;

	// find: �M��r���m 
	cout << "�M��s1�����Ĥ@��pill: "
		<< s1.find("pill", 0) << endl;
	cout << endl;

	// insert: ���J�r�� 
	cout << "�bs1���J�r��***: "
		<< s1.insert(5, "***") << endl;

	cout << "s1����: " << s1.length() << endl;
	cout << endl;



	//�� �k	�� ��
	//assign(string, start, num)	�qstring����start�Ӧr�����Xnum�Ӧr���ӫ��w���t�@�r�ꪫ��C
	//append(string, start, num)	�qstring����start�Ӧr�����Xnum�Ӧr���Ӫ��[�ܥt�@�r�ꪫ�󤧫�C
	//find(string, 0)	�q�޵ofind���r�ꪫ���0�Ӧr���M��O�_���ŦXstring���l�r��C
	//insert(start, string)	�Nstring���J�޵oinsert���r�ꪫ���start�Ӧr������C
	//length()	�Ǧ^�r�ꪺ���סC





	cout << endl;
	system("pause");
	return 0;
}