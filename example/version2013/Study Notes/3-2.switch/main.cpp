
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){

	cout << "*****switch*****" << endl;
	cout << endl;

	int score = 0;
	int level = 0;

	cout << "��J���ơG";
	cin >> score;
	level = score / 10;

	switch (level) {
	case 10:
	case 9:
		cout << "�oA" << endl;
		break;
	case 8:
		cout << "�oB" << endl;
		break;
	case 7:
		cout << "�oC" << endl;
		break;
	case 6:
		cout << "�oD" << endl;
		break;
	default:
		cout << "�oE(���ή�)" << endl;
	}

	//�p�G�z��諸�O�@�ӼƭȽd��A�bgcc��C++�sĶ�����٤��\�o�˪����覡�G
	//	switch (i) {
	//	case 1 ... 30:
	//		// statements 
	//	case 31 ... 1000:
	//		// statements 
	//	default:
	//		// statements 
	//}



	cout << endl;
	system("pause");
	return 0;
}