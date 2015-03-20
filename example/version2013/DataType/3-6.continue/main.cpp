
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){


	cout << "*****continue*****" << endl;
	cout << endl;

	//continue直接結束此次迴圈,然後從區塊開頭頭執行下一次迴圈
	for (int i = 1; i < 10; i++) {
		if (i == 5)	
			continue;

		cout << "i = " << i << endl;//i = 5 不會被顯示
	}


	cout << endl;
	system("pause");
	return 0;
}