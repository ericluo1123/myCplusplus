
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char* argv[]){


	cout << "*****Library <sstream>*****" << endl;
	cout << endl;


	int n = 10000;

	char s[10];

	sprintf_s(s, "%d", n);
	cout << s << endl;

	//sprintf( ”%d”, n);// s中的内容为“10000”

	//到目前为止看起来还不错。但是，对上面代码的一个微小的改变就会使程序崩溃：

	sprintf_s(s, "%f", n);// 看！错误的格式化符
	cout << s << endl;

	/*******************************

	<sstream>式庫定義了三種類：

	istringstream	流的輸入操作
	ostringstream	流的輸出操作
	stringstream	流的輸入、輸出操作

	重復利用stringstream:
	记住再每次轉換前要使用clear()方法

	***********************************/

		//string到int的轉換

		string result = "1000";
	stringstream  stream;
	int n1 = 0;
	cout << "n1 = " << n1 << endl;


	stream << result;
	stream >> n1;//n等于10000

	cout << "n1 = " << n1 << endl;


	cout << endl;
	system("pause");
	return 0;
}