
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
		cout << "輸入分數(-1結束)：";
		cin >> score;
	}

	cout << "平均："
		<< static_cast<double>(sum) / count
		<< endl;

	/*
		break;  // 跳離迴圈
	*/
 

	//do while
	int input = 0;
	bool replay = false;

	do {
		cout << "輸入整數值：";
		cin >> input;
		cout << "輸入數為奇數？" << ((input % 2) ? 'Y' : 'N') << "\n";
		cout << "繼續(1:繼續 0:結束)？";
		cin >> replay;
	} while (replay);

	cout << endl;
	system("pause");
	return 0;
}