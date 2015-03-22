
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){


	cout << "*****Hello World*****" << endl;
	cout << endl;

	int a = 0;
	int b = 0;

	cout << "請輸入被除數: ";
	cin >> a;
	cout << "請輸入除數: ";
	cin >> b;

	try {
		if (b == 0)
			throw 0;
		cout << "a / b = "
			<< static_cast<double>(a) / b
			<< endl;
	}
	catch (int err) {
		cout << "除數為: " << err << endl;
		cout << "結果無限大" << endl;
	}



	cout << endl;
	system("pause");
	return 0;
}