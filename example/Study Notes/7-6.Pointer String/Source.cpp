
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){


	cout << "*****Pointer String*****" << endl << endl;

	//�r�����Хi�H�ѦҦܤ@�Ӧr��`��
	cout  << "�r������" << endl;
	char *str = "hello";
	void *strAddress = 0;

	strAddress= str;
	cout << "str = " << str << endl;
	cout << "str Address : " << strAddress << endl;
	//�ϥΦr�����Ъ��n�B�O�A�z�i�H�����ϥΫ��w�B��l�N�@�Ӧr��`�ƫ��w���r�����СA�Ҧp�G
	str = "world";
	strAddress = str;
	cout << "str = " << str <<endl;
	cout << "str Address : " << strAddress << endl;
	cout << endl;


	cout << "�r�����а}�C" <<endl;
	char *strArray[] = {"professor", "teacher", 
		"student", "etc."}; 

	for(int i = 0; i < 4; i++){ 
		cout << strArray[i] << endl; 
	}
	cout << endl;

	cout << "�r�����ФG���}�C" <<endl;

	char *str1[3][2] = {"professor", "Justin", 
                      "teacher", "Momor", 
                      "student", "Caterpillar"}; 


    for(int i = 0; i < 3; i++) {
        cout << str1[i][0] << ": " 
             << str1[i][1] << endl; 
    }
	cout << endl;




	cout << endl;
	system("pause");
	return 0;
}