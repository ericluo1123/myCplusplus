
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){

	cout << "*****Arithmetic*****" << endl;
	cout << endl;


	//產生0~99亂數，每次執行產生的亂數都一樣
	cout << rand() % 100 << endl;
	cout << rand() % 100 << endl;
	cout << rand() % 100 << endl;

	/*
	//0~9循環計數
	int counter = 0;
	while (true){

	counter = (counter + 1) % 10;
	cout << counter << endl;

	}*/

	//依算式中的型態作型態轉換，依較長度的資料型態為目標型態，較小長度轉成目標型態
	//"算術轉換 (Arithmetic conversion)"，"隱式型態轉換 (Implicit type conversion)"
	int number = 10;
	cout << "number = " << number / 3 << endl;

	double number2 = 10.0;
	cout << "number2 = " << number2 / 3 << endl;



	int number3 = 0;
	double number4 = 3.14;
	//將 'double' 轉換為 'int'，由於類型不同，可能導致資料遺失
	number3 = number4;
	cout << "number3 = " << number3 << endl;
	//顯式型態轉換（Explicit type conversion）或稱之為強制轉型（Cast）
	number3 = static_cast<int>(number4);
	cout << "number3 = " << number3 << endl;

	//先執行explicit type conversion再作運算
	int number5 = 10;
	cout << "number5 = " << static_cast<double>(number5) / 3 << endl;

	//舊式explicit type conversion
	int number6 = 10;
	cout << "number6 = " << (double)number6 / 3 << endl;


	cout << endl;
	system("pause");
	return 0;
}