
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){


	cout << "*****Hello World*****" << endl;
	cout << endl;

	int score = 0;
	int sum = 0;
	int count = -1;

	while (score != -1) {
		count++;
		sum += score;
		cout << "��J����(-1����)�G";
		cin >> score;
	}

	cout << "�����G"
		<< static_cast<double>(sum) / count
		<< endl;

	/*
		break;  // �����j��
	*/
 

	//do while
	int input = 0;
	bool replay = false;

	do {
		cout << "��J��ƭȡG";
		cin >> input;
		cout << "��J�Ƭ��_�ơH" << ((input % 2) ? 'Y' : 'N') << "\n";
		cout << "�~��(1:�~�� 0:����)�H";
		cin >> replay;
	} while (replay);

	cout << endl;
	system("pause");
	return 0;
}