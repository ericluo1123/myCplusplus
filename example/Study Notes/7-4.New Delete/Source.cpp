
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){


	cout << "*****New Delete*****" << endl << endl;
	//動態的方式來配置一個int型態大小的記憶體,並傳回該空間的位址
	cout << "int *ptr = new int(100); // 配置一個int型態,儲存值設定為100" <<endl;
	int *ptr = new int(100);

	cout << "ptr 空間位置:" << ptr 
		<< endl; 
	cout << "*ptr 空間儲存值：" << *ptr
		<< endl; 


	*ptr = 200; 

	cout << "ptr 空間位置:" << ptr 
		<< endl;
	cout << "*ptr 空間儲存值：" << *ptr 
		<< endl;

	delete ptr;
	cout << endl;


	/*這段程式碼動態配置了1000個int大小的空間，並傳回空間的第一個位址，
	配置後的空間資料是未知的，沒有方法在動態配置陣列空間後同時宣告元素初值。*/
	int *arr = new int[1000];
	//同樣的，使用new配置得來的空間，在不使用時應該使用delete歸還給記憶體，方法如下： 
	delete [] arr;
	cout << endl;



	cout << "列動態配置的簡單示範" << endl;
	int size = 0;
	cout << "please input array size : ";
	cin >> size;
	int *array =new int[size];

	cout << "指定元素" << endl;
	for(int i =0 ;i<size ;i++){
		cout << "array[" << i << "] : " ;
		cin >> *(array + i);
	}
	cout << endl;
	cout << "顯示元素值：" << endl; 
	for(int i = 0; i < size; i++) {
		cout << "array[" << i << "] = " << *(array+i)
			<< endl; 
	} 

	delete [] array;
	cout << endl;

	cout << "指標來模擬二維陣列" << endl;
	int m = 0;
	int n = 0;

	cout << "輸入二維陣列維度："; 
	cin >> m >> n; 

	int *array1 = new int[m * n];

	//初始元素
	for(int i = 0 ; i< m ; i++){
		for(int j = 0;j< n;j++){
			*(array1 + n*i + j ) = i+j;
		}
	}

	//顯示元素
	for(int i = 0 ; i< m ; i++){
		for(int j = 0;j< n;j++){
			//example
			//m=2, n=2
			// 00,01,10,11,20,21
			// n*i+j
			// 2*0+0=0,2*0+1=1,2*1+0=2,2*1+1=3,2*2+0=4,2*2+11=5
			cout << "array1["<<i<<"]["<<j<<"]"<< " = " << *(array1 +n*i + j) << "  ";
		}
		cout << endl;
	}

	delete [] array1;



	cout << endl;
	system("pause");
	return 0;
}