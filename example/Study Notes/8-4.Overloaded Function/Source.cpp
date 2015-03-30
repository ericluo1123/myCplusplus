
#include <iostream>

using namespace std;

void showpara(int);
void showpara(int, int);
void showpara(double);

int main(int argc, char* argv[]){


	cout << "*****Overloaded Function*****" << endl << endl;

	//ㄌ把计计ぃㄓ更
	showpara(10);
	showpara(20, 30);
	//沮把计篈ㄓ∕﹚璶㊣ㄧΑ
	showpara(10.0);
	//沮把计计┪琌ㄢ挡璶猔種琌
	//篈ぃノ耞ㄧΑ更ㄌ沮



	cout << endl;
	system("pause");
	return 0;
}

void showpara(int x) {
	cout << "ま计" << x
		<< endl;
}

void showpara(int x, int y) {
	cout << "ま计" << x
		<< "\t" << y
		<< endl;
}


void showpara(double x) {
	cout << "double ま计" << x
		<< endl;
}