
#include <iostream>

using namespace std;

void foo(const int*);


int main(int argc, char* argv[]){


	cout << "*****Pointer And Memory Address*****" << endl << endl;

	int var = 10;
	cout << "var的值" << var << endl;
	//&是「取址運算子」（Address-of operator），它可以取出變數的記憶體位址
	cout << "var的記憶體位置 " << &var << endl;
	cout << endl;

	//指標可指向特定的記憶體位址，而不直接操作變數或物件
	//int* iptr;
	//float* fptr;
	//char* cptr;

	//宣告指標為var的記憶體位置
	cout << "ptr取var的記憶體位置" << endl;
	int *ptr = &var;
	cout << "int var = 10" << endl;
	cout << "int* ptr = &var;" << endl;
	cout << "var memory address = " << &var << endl;
	cout << "var content value = " << var << endl;
	cout << "ptr memory address = " << ptr << endl;
	cout << "ptr content value = " << *ptr << endl;
	cout << endl;

	//將值放到ptr所指向的記憶體位址
	cout << "將值放到ptr所指向的記憶體位址" << endl;
	*ptr = 20;
	cout << "*ptr = 20;" << endl;
	cout << "var content value = " << var << endl;
	cout << "ptr content value = " << *ptr << endl;
	cout << endl;


	/*
	未初始指標就指定值給*ptr，所以會造成不可預知的結果（通常是記憶體區段錯誤），
	最好為指標設定初值，如果指標一開始不指向任何的物 件，
	則可設定初值為0，表示不指向任何物件
	*/
	int *tptr = 0;
	cout << "設定初值為0，表示不指向任何物件" << endl;
	//cout << "*tptr =" << *tptr << endl; //讀取位置 0x00000000 時發生存取違規
	cout << "tptr =" << tptr << endl;
	cout << endl;
	/*
	在指標宣告時，可以靠在名稱旁邊，也可以靠在關鍵字旁邊
	可以避免以下的錯誤：
	int* ptr1, ptr2;
	這樣的宣告方式，初學者可能以為ptr2也是指標，但事實上並不是，
	以下的宣告ptr1與ptr2才都是指標：
	int *ptr1, *ptr2;
	*/
	/*只希望儲存記憶體的位址，然後將之與另一個記憶體位址作比較，
	這時並不需要關心型態的問題，您可以使用void*來宣告指標，例如：*/
	cout << "使用void*來宣告指標" << endl;
	cout << "void* vptr = &var;" << endl;
	void* vptr = &var;
	cout << endl;
	//void型態的指標沒有任何的型態資訊，所以只用來持有位址資訊，
	//您不可以使用*運算子對void型態指標提取值，
	//而必須使用 reinterpret_cast作轉型動作至對應的型態

	// 下面這句不可行，void型態指標不可取值 
	//cout << *vptr << endl;
	// 轉型為int型態指標並指定給v2ptr 
	cout << "轉型為int型態指標並指定給v2ptr" << endl;
	cout << "int *v2ptr = reinterpret_cast<int*>(vptr);" << endl;

	int *v2ptr = reinterpret_cast<int*>(vptr);
	cout << "void轉型後才可讀內容值 *v2ptr = " << *v2ptr << endl;
	cout << endl;
	//您也可以使用舊風格的轉型語法，如下所示：
	//	int var = 10;
	//void *vptr = &var;
	//// 轉型為int型態指標並指定給iptr 
	//int *iptr = (int*)(vptr);


	/*
	const宣告的變數，被const宣告的變數一但被指定值，
	就不能再改變變數的值，您也無法對該變數如下取值：
	*/
	cout << "const宣告的變數" << endl;
	cout << "const int var1 = 10;" << endl;
	const int var1 = 10;
	//var1 = 20; // error, assignment of read-only variable `var' 
	//int *cptr = &var1; // error,  invalid conversion from `const int*' to `int*' 

	//用const宣告的變數，必須使用對應的const型態指標才可以：
	cout << "必須使用對應的const型態指標" << endl;
	cout << "const int *vptr1 = &var1;" << endl;
	const int *vptr1 = &var1;
	cout << "*vptr1  = " << *vptr1 << endl;
	//不能如下試圖改變所指向記憶體中的資料：
	//*vptr = 20; // error, assignment of read-only location 

	//指標常數，也就是您一旦指定給指標值，就不能指定新的記憶體位址值給它，例如：
	int x = 10;
	int y = 20;
	int* const vptr2 = &x;
	cout << " *vptr2 = &x = " << *vptr2 << endl;
	//vptr2 = &y;  // error,  assignment of read-only variable `vptr'
	cout << " *vptr2 = &y = " << *vptr2 << endl;
	cout << endl;
	/*
	const int a = 10; 說明變量a是一個常數
	int const b =10;與a相同
	int* const vptr2 = &x; address不能被修改
	int const *vptr2 = &x; 此address的content不能被修改
	const int* const vptr2 = &x address和content不能被修改
	const int &a=100; 常數引用,即不能改變引用的值
	*/


	cout << "改變唯讀區域的值，這時您可以使用const_cast改變指標的型態" << endl;
	int var2 = 10;

	cout << "var2 = " << var2 << endl;

	foo(&var2);

	cout << "var2 = " << var2 << endl;


	cout << endl;
	system("pause");
	return 0;
}

void foo(const int* p){
	cout << "int *v = const_cast<int*>(p);" << endl;
	int *v = const_cast<int*>(p);
	*v = 20;
	//*p = 20; // error 無法對const 變數進行指定動作

	//您也可以使用舊風格的轉型語法，例如：
	//	void foo(const int* p) {
	//		int* v = (int*)(p);
	//		*v = 20;
	//	}
}