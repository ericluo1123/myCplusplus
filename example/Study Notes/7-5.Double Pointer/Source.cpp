
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){


	cout << "*****Double Pointer*****" << endl << endl;


	int p = 10; 
	int *ptr = &p; 
	int **ptr2 = &ptr;


	cout << "p的值：" << p 
		<< endl; 
	cout << "&p的記憶體位置: " << &p 
		<< endl;
	cout << endl;

	cout << "*ptr參照的值: " << *ptr 
		<< endl; 
	cout << "ptr儲存的位址值: " << ptr 
		<< endl; 
	cout << "&ptr的記憶體位置: " << &ptr 
		<< endl; 

	cout << endl;

	cout << "**ptr2參照的值: " << **ptr2
		<< endl; 
	cout << "ptr2儲存的位址值: " << ptr2 
		<< endl; 
	cout << "&ptr2的記憶體位置: " << &ptr2 
		<< endl; 
	cout << "*ptr2參照的值: " << *ptr2 
		<< endl; 


	cout << endl;
	system("pause");
	return 0;
}