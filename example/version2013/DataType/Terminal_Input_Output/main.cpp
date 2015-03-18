
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){

	cout << "Terminal Input & Output " << endl;

	cout << "Hello World" << endl;
	cerr << "Sorry World" << endl;
	cout << endl;

	cout << "請輸入數字 : ";
	int number;
	cin >> number;
	cout << "輸入的數字是:"<<number << endl;



	cout << endl;
	system("pause");
	return 0;
}