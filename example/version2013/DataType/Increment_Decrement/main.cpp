#include <iostream>

using namespace std;

int main(int argc, char* argv[]){

	cout << "*****Imcrement Operator*****" << endl;
	cout << endl;

	int i = 0;
	int num = 0;


	//++i instance
	cout << "i = " << i << endl;
	num = ++i;
	cout << "++i; " << endl;
	cout << "i = " << i << endl;
	cout << endl;

	//i++ instance
	cout << "i = " << i << endl;
	num = i++;
	cout << "i++; " << endl;
	cout << "i = " << i << endl;
	cout << endl;




	cout << endl;
	system("pause");
	return 0;
}