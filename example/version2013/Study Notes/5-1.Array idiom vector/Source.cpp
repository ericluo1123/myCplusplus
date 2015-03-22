
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv[]){


	cout << "*****Array idiom vector*****" << endl;
	cout << endl;

	//宣告向量陣列
	vector<int> intVector(10);

	for (int i = 0; i < intVector.size(); i++){
		intVector[i] = i;
	}

	for (int i = 0; i < intVector.size(); i++){
		cout << "intVector[" << i << "] = " << intVector[i] << endl;
	}

	cout << endl;
	//宣告向量陣列大小和初值

	vector<int> intVector2(10, 5);//(size initValue)

	for (int i = 0; i < intVector2.size(); i++){
		cout << "intVector2[" << i << "] = " << intVector2[i] << endl;
	}
	cout << endl;


	//以陣列建構向量 
	int iarr[] = { 1, 2, 3, 4, 5 };

	vector<int> intVector3(iarr + 1, iarr + 4); // (stratAddress, endAddress)

	for (int i = 0; i < intVector3.size(); i++) {
		cout << "intVector3[" << i << "] = " << intVector3[i] << endl;
	}
	cout << endl;


	//使用另一個vector作為引數來建構
	vector<int> intVector4(intVector3);
	for (int i = 0; i < intVector4.size(); i++) {
		cout << "intVector4[" << i << "] = " << intVector4[i] << endl;
	}
	cout << endl;

	cout << endl;
	system("pause");
	return 0;
}
