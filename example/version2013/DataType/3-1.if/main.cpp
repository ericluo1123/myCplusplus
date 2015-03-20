#include <iostream>

using namespace std;

int main(int argc, char* argv[]){

	cout << "*****if*****" << endl;
	cout << endl;

	//耞ㄏノ块琌计临琌案计
	int input = 0;
	int remain = 0;

	cout << "块俱计";
	cin >> input;

	remain = input % 2;
	if (remain == 1)
		cout << input << "计" << endl;
	else
		cout << input << "案计" << endl;


	//硂祘Α硂或糶
	cout << "块俱计";
	cin >> input;

	if (input % 2)//钡 盢緇计笲衡 挡狦讽兵ンΑㄓㄏノ
		cout << input << "计" << endl;
	else
		cout << input << "案计" << endl;


	//瓃痹
	int score = 0;
	cout << "块だ计";
	cin >> score;

	if (score >= 90)
		cout << "眔A" << endl;
	else if (score >= 80 && score < 90)
		cout << "眔B" << endl;
	else if (score >= 70 && score < 80)
		cout << "眔C" << endl;
	else if (score >= 60 && score < 70)
		cout << "眔D" << endl;
	else
		cout << "眔E(ぃの)" << endl;
	cout << endl;
	system("pause");
	return 0;
}