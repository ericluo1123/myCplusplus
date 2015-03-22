
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){


	cout << "*****Hello World*****" << endl;
	cout << endl;

	//simple example
	cout << "*****simple*****" << endl;
	for (int i = 0; i < 10; i++){
		cout << " " << i;
	}
	cout << endl << endl;;

	//99­¼ªk
	cout << "*****Multiplication table*****" << endl;

	for (int i = 1; i < 10; i++){
		for (int j = 2; j < 10; j++){
			int temp = i*j;
			cout << j << "*" << i  ;
			if (temp < 10){
				cout << "= " << temp << " " ;
			}
			else{
				cout << "=" << temp << " "  ;
			}
		}
		cout << endl;
	}
	//for (int j = 1; j < 10; j++) {
	//	for (int i = 2; i < 10; i++) {
	//		int tmp = i * j;
	//		cout << i << "*" << j;
	//		if (tmp >= 10)
	//			cout << "=" << tmp;
	//		else
	//			cout << "= " << tmp;
	//		cout << " ";
	//	}
	//	cout << endl;
	//}

	cout << endl;
	system("pause");
	return 0;
}