
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){


	cout << "*****Double Pointer*****" << endl << endl;


	int p = 10; 
	int *ptr = &p; 
	int **ptr2 = &ptr;


	cout << "p���ȡG" << p 
		<< endl; 
	cout << "&p���O�����m: " << &p 
		<< endl;
	cout << endl;

	cout << "*ptr�ѷӪ���: " << *ptr 
		<< endl; 
	cout << "ptr�x�s����}��: " << ptr 
		<< endl; 
	cout << "&ptr���O�����m: " << &ptr 
		<< endl; 

	cout << endl;

	cout << "**ptr2�ѷӪ���: " << **ptr2
		<< endl; 
	cout << "ptr2�x�s����}��: " << ptr2 
		<< endl; 
	cout << "&ptr2���O�����m: " << &ptr2 
		<< endl; 
	cout << "*ptr2�ѷӪ���: " << *ptr2 
		<< endl; 


	cout << endl;
	system("pause");
	return 0;
}