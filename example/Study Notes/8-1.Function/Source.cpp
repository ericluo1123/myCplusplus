
#include <iostream>
#include "Source.h"

using namespace std;

int main(int argc, char* argv[]){


	cout << "*****Function*****" << endl << endl;

	int num = 0;
	int power = 0; 

	cout << "��J�ƭȡG"; 
	cin >> num; 

	cout << "��J����G"; 
	cin >> power; 

	cout << num << " ����G" 
		<< pow2(num) << endl; 
	cout << num << " ��" << power << "����G" 
		<< pow(num, power) 
		<< endl; 


	//�b�sĶ�ɴ��A�sĶ���|��Q�I�s�禡�@�ˬd�A�p�G�L�k�ھڨ禡�W�١B���Ѫ��޼ƫ��A�P�禡�ŧi�W�Ѽƫ��A�ӨM�w�Q�I�s���禡�A�h�|�X�{�sĶ���~�A�o�N�O���� ���@�禡�ŧi����]�A�o��sĶ�����ˬd�u�@�O���n����ơC

	cout << endl;
	system("pause");
	return 0;
}


int pow2(int num) { 
	return num*num; 
} 

int pow(int n, int p) { 
	int r = 1; 

	for(int i = 0; i < p; i++) 
		r *= n;

	return r; 
}