
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]){


	cout << "*****String Char Style*****" << endl;
	cout << endl;

	//char style 字串的宣告
	char str[] = "hello";


	for (int i = 0; i < (sizeof(str) / sizeof(str[0])); i++){
		if (str[i] == '\0'){
			cout << " NULL";
		}
		else{
			cout << " " << str[i];
		}
	}

	cout << endl;

	//空字元在作條件判斷時，會被視為0，所以上式還可以這麼寫：
	if (!str[0]) {
		cout << "字串為空";
	}
	cout << endl;


	//字串一但指定，它的長度就固定了，也就是字元陣列的長度，所以您由使用者輸入取得字串值時，需注意不要超過字串的長度；
	//從使用者輸入取得字串值只要這麼作 就可以了：
	//包括空白字元，所以實際上可以輸入79個字元
	char str1[80];
	cout << "輸入字串：";
	cin >> str1;
	cout << "您輸入的字串為 " << str1 << endl;
	cout << endl;




	cout << endl;
	system("pause");
	return 0;
}