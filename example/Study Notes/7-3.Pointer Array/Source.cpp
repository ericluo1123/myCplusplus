
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){


	cout << "*****Pointer Array *****" << endl << endl;

	cout << "�}�Carr�P&arr[0]�ҫ��V�� ��m�O�ۦP��" << endl;
	int array[10]={0};
	cout << "array : \t\t"<< array << endl;
	cout << "&array[0] : \t\t"<<&array[0]<< endl;
	cout << endl;


	cout << "�H���йB��P�}�C���޾ާ@�A��ܥX�ۦP��������}��" << endl;
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


	// �H���Ф覡�s�����
	cout << "�H���Ф覡�s�����" << endl;
	for(int i=0;i<length2;i++){
		cout << "ptr2 +" << i << " : " << ptr2+i<<endl;
	}
	cout << endl;

	// �H�}�C�覡�s����� 
	cout << "�H�}�C�覡�s����� " << endl;
	for(int i=0;i<length2;i++){
		cout << "ptr2[" << i << "] : " << ptr2[i]<<endl;
	}
	cout << endl;


	// �H���Ф覡�s����� 
	cout << "�H���Ф覡�s����� " << endl;
	for(int i=0;i<length2;i++){
		cout << "*(array2+" << i<<") : "<<*(array2+i)<<endl;
	}
	cout << endl;


	// �H�}�C�覡�s����� 
	cout << "�H�}�C�覡�s����� " << endl;
    for(int i = 0; i < length2; i++) {
        cout << "array2[" << i << "]: " << array2[i]
             << endl;
    }
    cout << endl;

	cout << endl;
	system("pause");
	return 0;
}