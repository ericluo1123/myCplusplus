
#include <iostream>
#include "Source.h"

using namespace std;

int main(int argc, char* argv[]){


	cout << "*****inline function*****" << endl << endl;


	int num = 0;
	int power = 0; 

	cout << "輸入數值："; 
	cin >> num; 

	cout << "輸入平方："; 
	cin >> power; 

	cout << num << "平方：" 
		<< pow2(num) << endl; 
	cout << num << "的" << power << "次方：" 
		<< pow(num, power) 
		<< endl; 

	
//行內函式只能建議編譯器，也就是說建議並不一定會被採納，這視您的編譯器而定，像是使用到goto、static變數、迴圈、switch等等，這些編譯 器可能不接受行內函式的建議，遞迴函式也無法在呼叫點展開，一個數千行的函式也不適合在呼叫點展開，如果編譯器拒絕將函式展開，它會將該函式視為一般函式 進行編譯，inline的建議會被忽略。

	cout << endl;
	system("pause");
	return 0;
}