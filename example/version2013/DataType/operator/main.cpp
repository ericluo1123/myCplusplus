
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){

	cout << "*****Operator*****" << endl;
	cout << endl;

	//�{��������|���0��1�A���O���false��true
	cout << "(10 > 5) return = " << (10 > 5) << endl;
	cout << "(10 >= 5) return = " << (10 >= 5) << endl;
	cout << "(10 < 5) return = " << (10 < 5) << endl;
	cout << "(10 <= 5) return = " << (10 <= 5) << endl;
	cout << "(10 == 5) return = " << (10 == 5) << endl;
	cout << "(10 != 5) return = " << (10 != 5) << endl;
	//�bC++���A�Ҧ��D�s���ƭȦb�@�����󦡮ɳ��Q����true�C 
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