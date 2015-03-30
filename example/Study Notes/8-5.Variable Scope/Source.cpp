
#include <iostream>

using namespace std;

//�u�����ܼơv�]Global variable�^
//�����ܼƬO�������ŧi�b�]�D�^�禡���~���ܼơA
//�o���ܼƦb��ӵ{���������u�ݡv�o�����s�b�A�ӥi�H�I�s�ϥ�,�Ҧp
const double PI = 3.14159;

//�u�ϰ��ܼơv�]Local variable�^
//�ŧi�b�禡�������ܼơA�άO�ŧi�b�ѼƦC���e���ܼơA
//�����i���d��u�b�ŧi�����禡�϶������A�䥦���禡���i�H�ϥθ��ܼơA
//�Ҧp�b�W�Ҫ��D�� �����A�z���i�H������area()�禡�����ܼ�r�@�X�s�����ʧ@
//�A�ϰ��ܼƪ��ͩR�g���}�l��禡�Q�I�s����A�פ��禡���槹�����ɡC
double area(double);

double area(double r) {
	return r*r*PI;
}

void count();

int main(int argc, char* argv[]){




	cout << "*****Variable Scope*****" << endl << endl;



	//�u�϶��ܼơv�]Block variable�^
	//�϶��ܼƬO���ŧi�b�Y�ӳ��z�϶��������ܼơA
	//�Ҧpwhile�j��϶����A�άOfor�j��϶��A
	//�Ҧp�U�����ܼ�i�b�j�鵲������A�N�|�۰ʮ����G
	//for (int i = 0; i < 100; i++)
		// ....


	//��@�i���d��j���ܼƻP�i���d��p���ܼƵo�ͦP�W���p�ɡA
	//�i���d��p���ܼƷ|�Ȯ��л\�i���d��j���ܼơA
	//�٤����u�ܼ��л\�v�A�Ҧp�G
	int i = 10;
	for (int i = 0; i < 100; i++)  {
		// ...
	}
	cout << i << endl;

	//�o�ӵ{���̫���ܪ� i �Ȥ��O10�A�����j��ɡA
	//�j�餺�� i �ܼƧ@�αN�л\�j��~�� i �ܼơF
	//�P�˪��@�εo�ͩ�����ܼƻP�ϰ��ܼƵo�ͦP�W���ɭԡC


	/*�A�Ӥ���static�ܼơA���ܼƦ��ŧi�ɥ[�Wstatic���w�ɡA
	�@���ܼƥͦ��A���N�|�@���s�b�O���餧���A
	�Y�Ϩ禡���槹���A�ܼƤ]���|�����A�Ҧp�G*/
	for (int i = 0; i < 10; i++)
		count();


	/*���M�ܼ�c�O�bcount()�禡���ŧi���A���O�禡������A
	�ܼƤ��M�s�b�A���|����{�����浲���ɤ~�����A
	���M�ܼƤ@���s�b�A���ѩ󥦬O�Q�ŧi�b�禡�� ���A
	�ҥH�禡���~���L�k�s��static�ܼơC*/


	/*extern�i�H�n���ܼƷ|�b�䥦����m�Q�w�q�A
	�o�Ӧ�m�i��O�b�P�@����󤧤��A�άO�b�䥦��󤧤��A�Ҧp*/

	extern double someVar;

	cout << someVar << endl;
	//�bmain.cpp����ڤW�èS���ŧisomeVar�A
	//extern���XsomeVar�O�b�䥦��m�Q�w�q�A
	//�sĶ���|�չϦb�䥦��m�Τ�󤤧�X someVar���w�q�A
	//���G�bsome.cpp�����A�]�ӷ|��ܵ��G��1000�A
	//�n�`�N���O�Aextern�n��someVar�b�䥦��m�Q�w�q�A
	//�p�G�z �b�ϥ�extern�ɦP�ɫ��w��ȡA�h�����b�Ӧ�m�w�q�ܼơA
	//���G�N�޵o���Щw�q���~�A�Ҧp�G

	//extern double someVar = 2000; // error, `someVar' has both `extern' and 
	
	//�z�������n��extern����ܼơA�A���s���w��ȡA�o��ϥΤ~�O���T���G
	someVar = 2000;
	cout << someVar << endl;

	cout << endl;
	system("pause");
	return 0;
}

void count() {
	static int c = 1;
	cout << c << endl;
	c++;
}