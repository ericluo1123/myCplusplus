
#include <iostream>

using namespace std;

//「全域變數」（Global variable）
//全域變數是指直接宣告在（主）函式之外的變數，
//這個變數在整個程式之中都「看」得它的存在，而可以呼叫使用,例如
const double PI = 3.14159;

//「區域變數」（Local variable）
//宣告在函式之內的變數，或是宣告在參數列之前的變數，
//它的可視範圍只在宣告它的函式區塊之中，其它的函式不可以使用該變數，
//例如在上例的主函 式中，您不可以直接對area()函式中的變數r作出存取的動作
//，區域變數的生命週期開始於函式被呼叫之後，終止於函式執行完畢之時。
double area(double);

double area(double r) {
	return r*r*PI;
}

void count();

int main(int argc, char* argv[]){




	cout << "*****Variable Scope*****" << endl << endl;



	//「區塊變數」（Block variable）
	//區塊變數是指宣告在某個陳述區塊之中的變數，
	//例如while迴圈區塊中，或是for迴圈區塊，
	//例如下面的變數i在迴圈結束之後，就會自動消失：
	//for (int i = 0; i < 100; i++)
		// ....


	//當一可視範圍大的變數與可視範圍小的變數發生同名狀況時，
	//可視範圍小的變數會暫時覆蓋可視範圍大的變數，
	//稱之為「變數覆蓋」，例如：
	int i = 10;
	for (int i = 0; i < 100; i++)  {
		// ...
	}
	cout << i << endl;

	//這個程式最後顯示的 i 值仍是10，當執行迴圈時，
	//迴圈內的 i 變數作用將覆蓋迴圈外的 i 變數；
	//同樣的作用發生於全域變數與區域變數發生同名的時候。


	/*再來介紹static變數，當變數有宣告時加上static限定時，
	一但變數生成，它就會一直存在記憶體之中，
	即使函式執行完畢，變數也不會消失，例如：*/
	for (int i = 0; i < 10; i++)
		count();


	/*雖然變數c是在count()函式中宣告的，但是函式結束後，
	變數仍然存在，它會直到程式執行結束時才消失，
	雖然變數一直存在，但由於它是被宣告在函式之 中，
	所以函式之外仍無法存取static變數。*/


	/*extern可以聲明變數會在其它的位置被定義，
	這個位置可能是在同一份文件之中，或是在其它文件之中，例如*/

	extern double someVar;

	cout << someVar << endl;
	//在main.cpp中實際上並沒有宣告someVar，
	//extern指出someVar是在其它位置被定義，
	//編譯器會試圖在其它位置或文件中找出 someVar的定義，
	//結果在some.cpp中找到，因而會顯示結果為1000，
	//要注意的是，extern聲明someVar在其它位置被定義，
	//如果您 在使用extern時同時指定其值，則視為在該位置定義變數，
	//結果就引發重覆定義錯誤，例如：

	//extern double someVar = 2000; // error, `someVar' has both `extern' and 
	
	//您必須先聲明extern找到變數，再重新指定其值，這麼使用才是正確的：
	someVar = 2000;
	cout << someVar << endl;

	cout << endl;
	system("pause");
	return 0;
}

void count() {
	static int c = 1;
	cout << c << endl;
	c++;
}