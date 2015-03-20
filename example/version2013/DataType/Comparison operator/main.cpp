
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){

	cout << "*****Conditional Operator*****" << endl;
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