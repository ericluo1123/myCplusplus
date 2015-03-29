
#include <iostream>
#include "Source.h"

using namespace std;

int main(int argc, char* argv[]){


	cout << "*****Function*****" << endl << endl;

	int num = 0;
	int power = 0; 

	cout << "輸入數值："; 
	cin >> num; 

	cout << "輸入平方："; 
	cin >> power; 

	cout << num << " 平方：" 
		<< pow2(num) << endl; 
	cout << num << " 的" << power << "次方：" 
		<< pow(num, power) 
		<< endl; 


	//在編譯時期，編譯器會對被呼叫函式作檢查，如果無法根據函式名稱、提供的引數型態與函式宣告上參數型態來決定被呼叫的函式，則會出現編譯錯誤，這就是必須 先作函式宣告的原因，這對編譯器的檢查工作是必要的資料。

	cout << endl;
	system("pause");
	return 0;
}


int pow2(int num) { 
	return num*num; 
} 

int pow(int n, int p) { 
	int r = 1; 

	for(int i = 0; i < p; i++) 
		r *= n;

	return r; 
}