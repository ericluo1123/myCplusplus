
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){


	cout << "*****Pointer String*****" << endl << endl;

	//字元指標可以參考至一個字串常數
	cout  << "字元指標" << endl;
	char *str = "hello";
	void *strAddress = 0;

	strAddress= str;
	cout << "str = " << str << endl;
	cout << "str Address : " << strAddress << endl;
	//使用字元指標的好處是，您可以直接使用指定運算子將一個字串常數指定給字元指標，例如：
	str = "world";
	strAddress = str;
	cout << "str = " << str <<endl;
	cout << "str Address : " << strAddress << endl;
	cout << endl;


	cout << "字元指標陣列" <<endl;
	char *strArray[] = {"professor", "teacher", 
		"student", "etc."}; 

	for(int i = 0; i < 4; i++){ 
		cout << strArray[i] << endl; 
	}
	cout << endl;

	cout << "字元指標二維陣列" <<endl;

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