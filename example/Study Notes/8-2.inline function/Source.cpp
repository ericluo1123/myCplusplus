
#include <iostream>
#include "Source.h"

using namespace std;

int main(int argc, char* argv[]){


	cout << "*****inline function*****" << endl << endl;


	int num = 0;
	int power = 0; 

	cout << "��J�ƭȡG"; 
	cin >> num; 

	cout << "��J����G"; 
	cin >> power; 

	cout << num << "����G" 
		<< pow2(num) << endl; 
	cout << num << "��" << power << "����G" 
		<< pow(num, power) 
		<< endl; 

	
//�椺�禡�u���ĳ�sĶ���A�]�N�O����ĳ�ä��@�w�|�Q�įǡA�o���z���sĶ���өw�A���O�ϥΨ�goto�Bstatic�ܼơB�j��Bswitch�����A�o�ǽsĶ ���i�ण�����椺�禡����ĳ�A���j�禡�]�L�k�b�I�s�I�i�}�A�@�ӼƤd�檺�禡�]���A�X�b�I�s�I�i�}�A�p�G�sĶ���ڵ��N�禡�i�}�A���|�N�Ө禡�����@��禡 �i��sĶ�Ainline����ĳ�|�Q�����C

	cout << endl;
	system("pause");
	return 0;
}