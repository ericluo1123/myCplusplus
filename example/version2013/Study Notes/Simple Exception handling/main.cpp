
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){


	cout << "*****Hello World*****" << endl;
	cout << endl;

	int a = 0;
	int b = 0;

	cout << "�п�J�Q����: ";
	cin >> a;
	cout << "�п�J����: ";
	cin >> b;

	try {
		if (b == 0)
			throw 0;
		cout << "a / b = "
			<< static_cast<double>(a) / b
			<< endl;
	}
	catch (int err) {
		cout << "���Ƭ�: " << err << endl;
		cout << "���G�L���j" << endl;
	}



	cout << endl;
	system("pause");
	return 0;
}