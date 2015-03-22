
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv[]){


	cout << "*****Array idiom vector*****" << endl;
	cout << endl;

	//�ŧi�V�q�}�C
	vector<int> intVector(10);

	for (int i = 0; i < intVector.size(); i++){
		intVector[i] = i;
	}

	for (int i = 0; i < intVector.size(); i++){
		cout << "intVector[" << i << "] = " << intVector[i] << endl;
	}

	cout << endl;
	//�ŧi�V�q�}�C�j�p�M���

	vector<int> intVector2(10, 5);//(size initValue)

	for (int i = 0; i < intVector2.size(); i++){
		cout << "intVector2[" << i << "] = " << intVector2[i] << endl;
	}
	cout << endl;


	//�H�}�C�غc�V�q 
	int iarr[] = { 1, 2, 3, 4, 5 };

	vector<int> intVector3(iarr + 1, iarr + 4); // (stratAddress, endAddress)

	for (int i = 0; i < intVector3.size(); i++) {
		cout << "intVector3[" << i << "] = " << intVector3[i] << endl;
	}
	cout << endl;


	//�ϥΥt�@��vector�@���޼ƨӫغc
	vector<int> intVector4(intVector3);
	for (int i = 0; i < intVector4.size(); i++) {
		cout << "intVector4[" << i << "] = " << intVector4[i] << endl;
	}
	cout << endl;

	cout << endl;
	system("pause");
	return 0;
}
