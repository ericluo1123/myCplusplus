
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

	char str1[80] = "input";
	cout << "輸入字串：";
	cin >> str1;
	cout << "您輸入的字串為 " << str1 << endl;
	cout << endl;

	char str2[80] = "hello";

	//str1 和 str2 字串內容
	cout << "str1 和 str2 的字串內容" << endl;
	cout << "str1: " << str1 << endl
		<< "str2: " << str2 << endl
		<< endl;

	// 將str2複製給str1 
	cout << "將str2複製給str1 " << endl;
	strcpy_s(str1, str2);
	cout << "str1: " << str1 << endl
		<< "str2: " << str2 << endl
		<< endl;

	// 將str2接在str1後 
	cout << "將str2接在str1後" << endl;
	strcat_s(str1, str2);
	cout << "str1: " << str1 << endl
		<< "str2: " << str2 << endl
		<< endl;

	//計算不含空字元的字串長度 
	cout << "計算不含空字元的字串長度 " << endl;
	cout << "str1長度：" << strlen(str1) << endl
		<< "str2長度：" << strlen(str2) << endl
		<< endl;


	//比較兩個字串
	cout << "比較兩個字串" << endl;
	cout << "str1與str2比較 return :" << strcmp(str1, str2) << endl
		<< endl;



	/*
	如果您使用cin來取得使用者的輸入字串，
	則您會發現輸入字串時中間不能包括空白，
	如果您想要在輸入字串時包括空白，您必須使用gets()函式，例如：
	*/
	//char str3[80];
	//cout << "輸入字串：";
	//gets(str);
	//cout << "輸入的字串：" << str << endl;
	//cout << endl;

	system("pause");
	return 0;
}