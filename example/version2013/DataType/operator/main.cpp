
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){

	cout << "*****Operator*****" << endl;
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

	//「條件運算子」（Conditional operator），它的使用方式如下： 條件式 ? 成立傳回值 : 失敗傳回值
	int score;
	cout << "please input score : ";
	cin >> score;
	cout << "result :" << (score >= 60 ? "pass" : "fail") << endl;

	int number;
	cout << "please input number : ";
	cin >> number;
	cout << "number is :" << (number % 2 ? "Odd" : "Even") << endl;





	cout << endl;
	system("pause");
	return 0;
}