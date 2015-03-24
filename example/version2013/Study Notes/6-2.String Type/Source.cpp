
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]){


	cout << "*****String Type*****" << endl << endl;

	string str1;	// 建立一個string物件，內容為空字串			
	string str2 = "caterpillar";// 以字串常量建立字串
	string str3(str2); //以string實例建立字串

	cout << "str1 = " << str1 << endl;
	cout << "str2 = " << str2 << endl;
	cout << "str3 = " << str3 << endl;
	cout << endl;
	//使用empty()來測試字串是否為空
	cout << "使用empty()來測試字串是否為空" << endl;
	if (str1.empty()){
		cout << "str1為空字串" << endl;
	}
	cout << endl;

	//使用size()來測試字串長度
	cout << "使用size()來測試字串長度" << endl;

	cout << "str1字串長度 : " << str1.size() << endl;
	cout << "str2字串長度 : " << str2.size() << endl;
	cout << "str3字串長度 : " << str3.size() << endl;

	cout << endl;

	//使用 == 來比較兩個字串的字元內容是否相同
	cout << "使用==來比較兩個字串的字元內容是否相同" << endl;
	if (str1 == str2){
		cout << "str1 與 str2 內容相同 " << endl;
	}

	if (str3 == str2){
		cout << "str3 與 str2 內容相同 " << endl;
	}
	cout << endl;

	/*
	這個指定(=)會將str1原本的字串記憶體空間釋放，
	並重新配置足夠容納str2的記憶體空間，
	然後將str2的各個字元複製至str1；
	您也可以將一個C - Style的字串指定給string，例如：
	*/
	string name("caterpillar");
	char str[] = "justin";

	cout << "name = " << name << endl;
	cout << "str = " << str << endl;
	cout << "執行name = str (str 指定給 name)" << endl;
	name = str;
	cout << "指定後name = " << name << endl;
	cout << endl;

	//但是您不能將一個string實例指定給字元陣列，例如：
	/*
		str = name; // error
		*/

	//您也可以直接使用 + 運算子來串接字串，例如：
	str1 = str1 + str2;
	str1 = str1 + "\n";
	cout << "str1 = " << str1 << endl;
	cout << endl;

	//string的實例可以使用下標運算子[]
	//指定索引來存取相對應位置的字元，
	//就有如字元陣列的操作一般
	cout << "使用下標運算子[]字元陣列的操作" << endl;
	for (int i = 0; i < str1.length(); i++){
		cout << str1[i];
	}
	cout << endl;


	//string類別所生成的物件擁有幾個常用的方法（method）
	string s1;
	string s2("caterpillar");
	string s3(s2);

	cout << "s1 = " << s1 << endl;
	cout << "s2 = " << s2 << endl;
	cout << "s3 = " << s3 << endl;
	cout << endl;

	//assgin 指定字串(string,從n個，共取n個)
	cout << "assgin 指定字串" << endl;
	s1 = s1.assign(s2, 0, 5);
	cout << "s1 = " << s1 << endl;
	s1 = s1.assign("caterpillar", 5,6);
	cout << "s1 = " << s1 << endl;
	cout << endl;

	//append: 字串串接 
	cout << "append: 字串串接 " << endl;
	s1 = s1.append(s2, 0, 5);
	s1 = s1.append(s3, 5, 6);
	cout << "s1: " << s1 << endl;
	cout << endl;

	// find: 尋找字串位置 
	cout << "尋找s1中的第一個pill: "
		<< s1.find("pill", 0) << endl;
	cout << endl;

	// insert: 插入字串 
	cout << "在s1插入字串***: "
		<< s1.insert(5, "***") << endl;

	cout << "s1長度: " << s1.length() << endl;
	cout << endl;



	//方 法	說 明
	//assign(string, start, num)	從string的第start個字元取出num個字元來指定給另一字串物件。
	//append(string, start, num)	從string的第start個字元取出num個字元來附加至另一字串物件之後。
	//find(string, 0)	從引發find的字串物件第0個字元尋找是否有符合string的子字串。
	//insert(start, string)	將string插入引發insert的字串物件第start個字元之後。
	//length()	傳回字串的長度。





	cout << endl;
	system("pause");
	return 0;
}