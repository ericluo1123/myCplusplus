
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[]){


	cout << "*****STL idiom vector*****" << endl;
	cout << endl;
	/************************
	以物件導向的方式來操作vector
	*************************/

	//您可以建構一個元素為空的vector物件：
	vector<int> ivector;

	//如果打算將元素放入vector中，可以使用push_back()，例如：
	for (int i = 0; i < 5; i++) {
		ivector.push_back(i);
		cout << "ivector[" << i << "] = " << ivector[i] << endl;
	}

	//如果打算將元素循序取出，則可以begin()與end()方法
	//分別傳回起始位置的iterator與結束位置的iterator
	vector<int>::iterator it = ivector.begin();
	for (it; it != ivector.end(); it++){
		cout << *it << " ";
	}
	cout << endl;

	/*
		iterator是標準函式庫定義類別（Class），它是一個指標，
		指向iterator物件的真正位址，對它進行++的動作，
		表示移動至 iterator的下一個元素，對它使用*運算子（Dereferences operator），
		表示提取出iterator目前位址的值，如果iterator走訪至結束位置的iterator的位址，
		表示元素走訪完畢。
		*/

	//capacity() 取得容量
	//size()取得元素長度
	cout << "capacity: " << ivector.capacity() << endl
		<< "size: " << ivector.size() << endl;


	//	如果打算對vector進行排序、尋找、反轉等操作，
	//	可以使用標準函式庫中的泛型演算法，
	//	要使用泛型演算法必須先含入表頭檔：
	//	#include <algorithm>	

	//example
	int iarr1[] = { 30, 12, 55, 31, 98, 11, 41, 80, 66, 21 };
	vector<int> ivector1(iarr1, iarr1 + 10);

	// 排序 
	cout << "******sort*****" << endl;
	sort(ivector1.begin(), ivector1.end());
	vector<int>::iterator it1 = ivector1.begin();

	//show data
	for (it1; it1 != ivector1.end(); it1++) {

		cout << *it1 << " ";
	}
	cout << endl;
	cout << endl;


	//搜尋
	cout << "*****search*****" << endl;
	cout << "輸入搜尋值：";
	int search = 0;
	cin >> search;

	it1 = find(ivector1.begin(), ivector1.end(), search);


	if (it1 != ivector1.end()) {
		cout << "找到搜尋值！ = " <<*it1<< endl;
	}
	else {
		cout << "找不到搜尋值！" << endl;
	}

	cout << endl;
	cout << endl;



	//反轉
	cout << "*****reverse*****" << endl;
	reverse(ivector1.begin(), ivector1.end());

	//show data
	it1 = ivector1.begin();
	for (it1; it1 != ivector1.end(); it1++) {

		cout << *it1 << " ";
	}
	cout << endl;
	cout << endl;


	cout << endl;
	system("pause");
	return 0;
}