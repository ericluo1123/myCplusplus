#include "ArrayIndexOutOfBoundsException.h"
#include "SafeArray.h"
#include <iostream>
#include "Exception.h"

using namespace std;

int main(int argc, char* argv[]){


	cout << "*****Exception Class*****" << endl;
	cout << endl;

	SafeArray safeArray(10);

	try {
		// 故意存取超過陣列長度
		for (int i = 0; i <= safeArray.length; i++) {
			safeArray.set(i, (i + 1) * 10);
			cout << safeArray._array[i] << endl;
		}

		for (int i = 0; i < safeArray.length; i++) {
			cout << safeArray.get(i) << " ";
		}

		cout << endl;
	}
	catch (ArrayIndexOutOfBoundsException e) {
		cout << endl
			<< e.message()
			<< endl;
	}
	catch (Exception e) {
		cout << endl
			<< e.message()
			<< endl;
	}



	cout << endl;
	system("pause");
	return 0;
}