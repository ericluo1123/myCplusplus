

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]){

	cout << "*****Logic operatior*****" << endl;
	cout << endl;

	int num = 75;
	cout << "num > 70 && num < 80 return = " <<(num > 70 && num < 80) << endl;
	cout << "(num > 80 || num < 75) return = "<<(num > 80 || num < 75) << endl;
	cout << "!(num > 80 || num < 75) return = "<<!(num > 80 || num < 75) << endl;

	//三段程式分別會輸出1、0與1，也就是分別表示true、false與true三種狀況。



	cout << endl;
	system("pause");
	return 0;
}