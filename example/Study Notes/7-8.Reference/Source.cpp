
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){


	cout << "*****Reference*****" << endl << endl;

	//要定義參考型態，在定義型態時於型態關鍵字後加上&運算子，例如：
	int var = 10;  // 定義變數
	int *ptr = &var; // 定義指標，指向var的位址
	int &ref = var;  // 定義參考，代表var變數

	//上面的程式中，最後一行即是在定義參考型態，注意參考型態一定要初始化，例如下面的定義是不能通過編譯的：
	//int &ref; // error, `ref' declared as reference but not initialized 
	cout << "var = 10" << endl;
	cout << "var: " << var 
		<< endl;
	cout << "ref: " << ref
		<< endl;
	cout << endl;

	cout << "ref = 20" << endl;
	ref = 20;
	cout << "var: " << var 
		<< endl;
	cout << "ref: " << ref
		<< endl;
	cout << endl;
	//	您也可以參考至一個字面常量，例如：
	const int &ref1 = 10;
	cout << "&ref1 = " << &ref1 << endl;
	//
	//為什麼要在前面加上const才能參考至一個字面常量呢？您知道字面常量是不可定址的，為了能夠讓符合參考定址的語義，上面這段程式編譯器會傳如下的轉 換：
	int tmp = 10;
	const int &ref2 = tmp;
	
	//
	//先想想沒有加上const的情況，如果您對ref重新指定值，則實際改變的是tmp的值，而不是字面常量10，這就在符合字面常量無法取址（也就無法改			變 位址上的值）的語義，但使用者可能困惑明明改變了ref，為何字面常量沒有改變，所以加上const，明確指示不可以再重新指定值給ref，例			如：
	//const int &ref = 10;
	//ref = 20; // error, assignment of read-only reference `ref' 
	//
	//如果要定義指標型態的參考該如何呢？很簡單，指標型態是使用type*來宣告，而參考則是在名稱前加上&，所以指標型態的參考就如下所 示：
	int *somePtr = 0;
	int *&refOfPtr = somePtr;
	cout << "refOfPtr = " << refOfPtr << endl;
	//
	//一個具體的例子如下：
	//int var = 10;
	//int *ptr = &var;
	//int *&ref = ptr;
	//
	//舉一反三的話，如果有個const變數，您可以使用一個const指標，並可以如下宣告一個指標的參考：
	//const int var = 10;
	//const int *ptr = &var;
	//const int *&ref = ptr;
	//
	//事實上很少會直接如上的方式來使用參考，而是用於函式傳遞時一種「傳參考」（Pass by reference）方式，目的在於可於函式中直接操作目標變			數或物件，或者是避免複製一個大型物件，在之後要紹函式時會見到相關應用。



	cout << endl;
	system("pause");
	return 0;
}