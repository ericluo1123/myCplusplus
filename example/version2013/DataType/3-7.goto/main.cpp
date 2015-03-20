
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){


	cout << "*****goto*****" << endl;
	cout << endl;

	//goto是一個很方便，但是最不被建議使用的語法，
	//濫用它的話會破壞程式的架構、使得程式的邏輯難以trace，事實上，
	//在完全不使用goto的情況下， 
	//您也可以使用結構化的語法來撰寫程式。

	int input = 0;

begin:

	cout << "輸入一數：";
	cin >> input;

	if (input == 0)
		goto error;

	cout << "100 / " << input
		<< " = " << static_cast<double>(100) / input
		<< endl;

	return 0;

error:
	cout << "除數不可為0" << endl;
	goto begin;




	cout << endl;
	system("pause");
	return 0;
}