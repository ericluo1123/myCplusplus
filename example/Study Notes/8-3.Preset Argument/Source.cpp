
#include <iostream>

using namespace std;

//�b�����w�ĤG�Ӥ޼ƮɡAarea()�N�|�۰ʨϥιw�]�޼ơA
//�ϱopi�]�w�� 3.14�A�p�G���wpi�Ȫ��ܡA
//�h�N�H�ϥΪ̪����w�ӳ]�wpi�ȡC
double area(double, double = 3.14);

int main(int argc, char* argv[]){


	cout << "*****Preset Argument*****" << endl << endl;

	double r, pi;

	cout << "��J�b�|�PPI: ";
	cin >> r >> pi;

	cout << "���n(�ۭqPI): " << area(r, pi)
		<< endl;
	cout << "���n(default): " << area(r)
		<< endl;




	cout << endl;
	system("pause");
	return 0;
}

double area(double r, double pi) {
	return r*r*pi;
}

//�z�i�H���w��ӥH�W���w�]�޼ơA�M�ӥ����`�N���O�A
//�w�]�޼Ƥ@���X�{�b�ѼƦC�A�h��k�䪺�ѼƤ]�����]�w�w�]�޼ơA
//�ҥH�b�ϥιw�]�޼ƮɡA�����`�N�޼ƦC ���t�m���ǡA
//�Ҧp�U�����ŧi�O���~���G
//double volumn(double h = 1.0, double w = 1.0, double l);
//
//�ӥ����O�H�U�~�O���T���G
//double volumn(double l, double w = 1.0, double h = 1.0);
//
//�p�G�{��������ӥH�W���w�]�޼ơA�h�b�{���I�s�ɴN�����`�N�A
//�]���w�]�޼ƪ��ϥάO�H�޼ƪ����ǥѥ��ܥk�Ӷi�檺�A
//�Ҧp�Y���Ө禡�ŧi�p�U�G
//bool setScreen(int width = 80, int height = 24, char bkcolor = ' ');
//
//�h�b�I�s�禡�ɡA�Y�ϥ�setScreen('R'); �A
//�h��@�ά۷��setScreen('R', 24, ' '); 
//�Ӥ��OsetScreen(80, 24, 'R'); �A
//�өI�s�ɨϥ�setScreen(, , 'R'); 
//�o�Ӥ�k�h�O���~���A�ҥH�w�]�޼ƪ������O�����p�߳]�p���C

