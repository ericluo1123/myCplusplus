
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){


	cout << "*****continue*****" << endl;
	cout << endl;

	//continue�������������j��,�M��q�϶��}�Y�Y����U�@���j��
	for (int i = 1; i < 10; i++) {
		if (i == 5)	
			continue;

		cout << "i = " << i << endl;//i = 5 ���|�Q���
	}


	cout << endl;
	system("pause");
	return 0;
}