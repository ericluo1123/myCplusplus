
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){

	cout << "*****Conditional Operator*****" << endl;
	cout << endl;

	//�u����B��l�v�]Conditional operator�^�A�����ϥΤ覡�p�U�G ���� ? ���߶Ǧ^�� : ���ѶǦ^��
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