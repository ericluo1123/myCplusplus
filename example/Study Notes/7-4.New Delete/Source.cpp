
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){


	cout << "*****New Delete*****" << endl << endl;
	//�ʺA���覡�Ӱt�m�@��int���A�j�p���O����,�öǦ^�ӪŶ�����}
	cout << "int *ptr = new int(100); // �t�m�@��int���A,�x�s�ȳ]�w��100" <<endl;
	int *ptr = new int(100);

	cout << "ptr �Ŷ���m:" << ptr 
		<< endl; 
	cout << "*ptr �Ŷ��x�s�ȡG" << *ptr
		<< endl; 


	*ptr = 200; 

	cout << "ptr �Ŷ���m:" << ptr 
		<< endl;
	cout << "*ptr �Ŷ��x�s�ȡG" << *ptr 
		<< endl;

	delete ptr;
	cout << endl;


	/*�o�q�{���X�ʺA�t�m�F1000��int�j�p���Ŷ��A�öǦ^�Ŷ����Ĥ@�Ӧ�}�A
	�t�m�᪺�Ŷ���ƬO�������A�S����k�b�ʺA�t�m�}�C�Ŷ���P�ɫŧi������ȡC*/
	int *arr = new int[1000];
	//�P�˪��A�ϥ�new�t�m�o�Ӫ��Ŷ��A�b���ϥή����Өϥ�delete�k�ٵ��O����A��k�p�U�G 
	delete [] arr;
	cout << endl;



	cout << "�C�ʺA�t�m��²��ܽd" << endl;
	int size = 0;
	cout << "please input array size : ";
	cin >> size;
	int *array =new int[size];

	cout << "���w����" << endl;
	for(int i =0 ;i<size ;i++){
		cout << "array[" << i << "] : " ;
		cin >> *(array + i);
	}
	cout << endl;
	cout << "��ܤ����ȡG" << endl; 
	for(int i = 0; i < size; i++) {
		cout << "array[" << i << "] = " << *(array+i)
			<< endl; 
	} 

	delete [] array;
	cout << endl;

	cout << "���ШӼ����G���}�C" << endl;
	int m = 0;
	int n = 0;

	cout << "��J�G���}�C���סG"; 
	cin >> m >> n; 

	int *array1 = new int[m * n];

	//��l����
	for(int i = 0 ; i< m ; i++){
		for(int j = 0;j< n;j++){
			*(array1 + n*i + j ) = i+j;
		}
	}

	//��ܤ���
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