#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]){

	cout << "*****Bitwise operatior*****" << endl;
	cout << endl;

	string str = "";
	string symbol = "";

	//&
	cout << " 'AND' '&' operator" << endl;
	symbol = "AND";
	str = "0 " + symbol + " 0";
	cout << str << " = " << (0 & 0) << endl;
	str = "0 " + symbol + " 1";
	cout << str << " = " << (0 & 1) << endl;
	str = "1 " + symbol + " 0";
	cout << str << " = " << (1 & 0) << endl;
	str = "1 " + symbol + " 1";
	cout << str << " = " << (1 & 1) << endl;
	cout << endl;

	//|
	cout << " 'OR' '&' operator" << endl;
	symbol = "OR";
	str = "0 " + symbol + " 0";
	cout << str << " = " << (0 | 0) << endl;
	str = "0 " + symbol + " 1";
	cout << str << " = " << (0 | 1) << endl;
	str = "1 " + symbol + " 0";
	cout << str << " = " << (1 | 0) << endl;
	str = "1 " + symbol + " 1";
	cout << str << " = " << (1 | 1) << endl;
	cout << endl;

	//
	cout << " 'OR' '|' operator" << endl;
	symbol = "OR";
	str = "0 " + symbol + " 0";
	cout << str << " = " << (0 | 0) << endl;
	str = "0 " + symbol + " 1";
	cout << str << " = " << (0 | 1) << endl;
	str = "1 " + symbol + " 0";
	cout << str << " = " << (1 | 0) << endl;
	str = "1 " + symbol + " 1";
	cout << str << " = " << (1 | 1) << endl;
	cout << endl;

	//|
	cout << " 'XOR' '^' operator" << endl;
	symbol = "XOR";
	str = "0 " + symbol + " 0";
	cout << str << " = " << (0 ^ 0) << endl;
	str = "0 " + symbol + " 1";
	cout << str << " = " << (0 ^ 1) << endl;
	str = "1 " + symbol + " 0";
	cout << str << " = " << (1 ^ 0) << endl;
	str = "1 " + symbol + " 1";
	cout << str << " = " << (1 ^ 1) << endl;
	cout << endl;

	//NOT
	cout << " 'NOT' '!' operator" << endl;
	symbol = "NOT";
	str = symbol + " 0";
	cout << str << " = " << (!0) << endl;
	str = symbol + " 1";
	cout << str << " = " << (!1) << endl;
	cout << endl;

	//~ 補數運 算是將所有的位元0變1，1變0
	cout << " 'complement' '~' operator" << endl;
	symbol = "complement";
	str = "0 " + symbol;
	cout << str << " = " << (~0) << endl;
	str = "1 " + symbol;
	cout << str << " = " << (~1) << endl;
	cout << endl;




	cout << endl;
	system("pause");
	return 0;
}