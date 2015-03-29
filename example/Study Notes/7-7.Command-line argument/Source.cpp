
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
	//程式在執行後，argc的值一定會大於1，因為至少包括了程式名稱，而argv則分別儲存了引數的字串
	//使用命令提示字元
	//程式名稱(不可有空白) 引數1 引數2
	//argument -o -p

	//	程式在執行時，可以附加一些引數以指定執行不同的功能，例如：
	//copy -r ./temp ./tmp

	cout << "*****Command-line argument*****" << endl << endl;

	/*	程式在執行時，可以附加一些引數以指定執行不同的功能，例如：
	copy -r ./temp ./tmp
	每個引數之間以空白作區隔，上面的命令包括程式名稱共會有五個引數，即app、hello.c、-o、-c、project.p，
	這五個引數分別儲存在使 用指標的字串陣列之中，即char *argv[]中。

	程式在執行後，argc的值一定會大於1，因為至少包括了程式名稱，而argv則分別儲存了引數的字串，
	例如上面的例子中，argv[0]是"app"、 argv[1]是"hello.c"、argv[2]是"-o"、argv[3]是"-c"、argv[4]是"project.p"。
	如此argv[0]是程式名稱"show"，而argv[1]的字串就會是"This is a string!"。
	*/ 

	for(int i = 0; i < argc; i++) { 
		char *arg = argv[i]; 


		switch(arg[0]) { 
		case '-': 
			/*		 處理參數，設定執行選項，例如-o、-p、-r等等 
			在判斷執行選項的case中，您可以進一步檢查第二個字元，例如：*/ 
			switch(arg[1]) { 
			case 'o': 
				// 選項o的處理
				cout << "-o" << endl;
				break; 
			case 'p': 
				// 選項p的處理 
				cout << "-p" << endl;
				break; 
			case 'r': 
				// 選項r的處理 
				cout << "-r" << endl;
				break; 
			default: 
				// 選項錯誤處理或其它處理 
				cout << "default" << endl;
				break;
			}
		default: 
			// 執行對應功能 
			break;
		}

	}


	cout << endl;
	system("pause");
	return 0;
}