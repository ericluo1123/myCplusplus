
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){


	cout << "*****Pointer Array *****" << endl << endl;

	cout << "陣列arr與&arr[0]所指向的 位置是相同的" << endl;
	int array[10]={0};
	cout << "array : \t\t"<< array << endl;
	cout << "&array[0] : \t\t"<<&array[0]<< endl;
	cout << endl;


	cout << "以指標運算與陣列索引操作，顯示出相同的對應位址值" << endl;
	const int length = 10;
	int array1[length] = {0};
	int *ptr1=array1;

	for(int i =0;i<length;i++){

		cout<< "array1["<<i<<"] : " << &array1[i] << "\t*ptr1 + " << i << " : " << ptr1+i << endl;

	}
	cout << endl;


	const int length2 =5;
	int array2[length2] = {10,20,30,40,50};
	int *ptr2 = array2;


	// 以指標方式存取資料
	cout << "以指標方式存取資料" << endl;
	for(int i=0;i<length2;i++){
		cout << "ptr2 +" << i << " : " << ptr2+i<<endl;
	}
	cout << endl;

	// 以陣列方式存取資料 
	cout << "以陣列方式存取資料 " << endl;
	for(int i=0;i<length2;i++){
		cout << "ptr2[" << i << "] : " << ptr2[i]<<endl;
	}
	cout << endl;


	// 以指標方式存取資料 
	cout << "以指標方式存取資料 " << endl;
	for(int i=0;i<length2;i++){
		cout << "*(array2+" << i<<") : "<<*(array2+i)<<endl;
	}
	cout << endl;


	// 以陣列方式存取資料 
	cout << "以陣列方式存取資料 " << endl;
    for(int i = 0; i < length2; i++) {
        cout << "array2[" << i << "]: " << array2[i]
             << endl;
    }
    cout << endl;

	cout << endl;
	system("pause");
	return 0;
}