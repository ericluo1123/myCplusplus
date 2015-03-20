
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){

	cout << "*****Assignment Operator*****" << endl;
	cout << endl;

	//程式的執行會顯示0或1，分別表示false或true
	cout << "(10 > 5) return = " << (10 > 5) << endl;
	cout << "(10 >= 5) return = " << (10 >= 5) << endl;
	cout << "(10 < 5) return = " << (10 < 5) << endl;
	cout << "(10 <= 5) return = " << (10 <= 5) << endl;
	cout << "(10 == 5) return = " << (10 == 5) << endl;
	cout << "(10 != 5) return = " << (10 != 5) << endl;
	//在C++中，所有非零的數值在作為條件式時都被視為true。 
	cout << endl;

	

	cout << endl;
	system("pause");
	return 0;
}