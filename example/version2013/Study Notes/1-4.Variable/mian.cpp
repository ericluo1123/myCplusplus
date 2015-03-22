
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){


	cout << "*****Variable***** " << endl;
	cout << endl;
	//�S����l��ȡA�ҥH�Ĥ@����ܮɷ|�X�{���i�w�������
	int age1;
	double score1;
	char level1;

	//�u���w�B��l�v�]Assignment operator�^=�ӫ��w�ܼƪ���

	cout << "*****���w�B��l***** " << endl << endl;
	age1 = 5;
	score1 = 80.0;
	level1 = 'A';

	cout << "age\tscore\tlevel" << endl;
	cout << age1 << "\t" << score1 << "\t" << level1 << endl;
	cout << endl;

	//���몺�覡�ӫŧi�ܼƨë��w���
	int age2(2);
	double score2(2.0);
	char level2('B');

	cout << "*****����***** " << endl << endl;

	cout << "age\tscore\tlevel" << endl;
	cout << age2 << "\t" << score2 << "\t" << level2 << endl;
	cout << endl;

	//�غc�l(Constuctor)�ӫ��w�ܼƪ���
	int age3;
	double score3;
	char level3;

	cout << "*****�غc�l***** " << endl << endl;
	age3 = int(1);
	score3 = double(2);
	level3 = char('C');

	cout << "age\tscore\tlevel" << endl;
	cout << age3 << "\t" << score3 << "\t" << level3 << endl;
	cout << endl;

	//coust ����r �ŧi���`�q(�Ψӭ��w�ܼƫ��w�ȫ�A�����\�A�@���)
	cout << "*****const keyword*****" << endl;
	/*const�O�Ω�O�@�{�Ǫ������ʡA��ֵ{�����w�C
	const���Ϊk��������A�`���_�ӤS�����H�U���
	1:�b�w�q�ܶq�ɨϥ� :

	a: const int a=100; ��²�檺�Ϊk�A�����ܶqa�O�@�ӱ`�ܶq;
	b: int const b=100; �Pa�\��ۦP;
	c: const int *a=&b; ���V�`�ƪ����w�A�Y���w�������ȬO�i�H���ܪ��A
	�����V�����e�O������ܪ�;
	d: int const *a=&b; �Pc�\��ۦP;
	e: int * const a = &b; �`���w�A�Y���w�������ȬO���i���ܪ��A�����V�����e�O�i���ܪ�;
	f: const int * const a = &b;���V�`�ƪ��`���w,�Y���w�����P���V�����e���O���i���ܪ�;
	g: const int &a=100; �`�Ƥޥ�,�Y������ܤޥΪ���;

	�`��: �b�ϥ�const�w�q�ܶq�ɡA�@�w�n�i���l�ƾާ@,
	�b�ާ@��(*,&)���䪺�׹����O���V�����e�A�b�k�䪺�O�����C


	2 : �b��ƥΨϥ� :

	a: void func(const int a); �����ѼƨϥΡA��������餺�O��
	��ק�ӰѼƪ�;�藍�ѼƩw�q�ɤ��P���Φ��A�i�Ѩ��w�q�ܶq
	�ɨϥΤ覡;
	b: const int func(); ������^�ȨϥΡA������ƪ���^�ȬO��
	��Q�ק諸�A�b���o��^�Ȯ�����const int a = func();�藍
	�ѼƩw�q�ɤ��P���Φ��A�i�Ѩ��w�q�ܶq�ɨϥΤ覡;
	c: int func() const; �`��ơA������ƬO����ק�����������
	�Ȫ��A�u��Ω�����������Ƥ�;

	�`���G�b��Ƥ��ϥ�const,���p�P�w�q�ܶq�����p�j�P�ۦP�C

	*/


	//1.a
	const int a = 10; 
	//a = 20;		���~	1	error C3892: 'maxNum' : �L�k�� const �ܼƶi����w�ʧ@
		
	//1.b
	int const b = 100; 
	//b = 10;		���~	1	error C3892: 'maxNum' : �L�k�� const �ܼƶi����w�ʧ@	
	
	//1.c
	int z = 5;
	const int *c = &b; 

	
	c = &z; //pass
	cout << "*c = &z =" << *c << endl;
	c = &b;
	cout << "*c = &b =" << *c << endl;
	c = &a;
	cout << "*c = &a =" << *c << endl;

	
	//*c = 5; //fail

	cout << endl;

	//1.d
	int const *d = &b; //�M1.c�ۦP
	

	d = &z;
	cout << "*d = &z =" << *d << endl;
	d = &b;
	cout << "*d = &b =" << *d << endl;
	d = &a;
	cout << "*d = &a =" << *d << endl;
	cout << endl;
	
	int ee = 10,aa=5,bb=10;
	int* const e = &ee; //1.e

	
	*e = 10; //pass

	
	//e= &ee; //fail
	
	cout << "*e  =" << *e << endl;
	cout << "e  =" << e << endl;
	cout << endl;
	
	//1.f
	const int * const f = &b;

	//fail
	//*f = 10;
	//f = &aa;

	//1.g
	const int &g = 100;
	cout << "g = " << g <<endl;
	cout << "&g = " << &g << endl;
	cout << endl;

	const int &h = ee;



	//fial
	//g = 10;

	//�򥻰ѷ�����
	int vv = 10, ff = 20;
	int &v =vv;

	cout << "&v = " << &v << endl;
	cout << "v = " << v << endl;
	cout << endl;
	v = ff;
	cout << "&v = " << &v << endl;
	cout << "v = " << v << endl;
	cout << endl;
	v = 10;


	//�򥻫�������
	int j = 20, k = 30;
	int *p;
	p = &j;	//�Nj����}������p
	
	cout << "pointer p address = " << p << endl; //��X����p����} : p
	
	cout << "pointer p content = " << *p << endl; //��X����p�����e : *p

	cout << endl;

	*p = 5; //�N*p��}�����e���w��5
	cout << "pointer p address = " << p << endl; //��X����p����} : p

	cout << "pointer p content = " << *p << endl; //��X����p�����e : *p

	cout << endl;











	cout << endl;
	//unsinged  ����r :�ŧi���L��(�L���t)

	unsigned int i = 1;

	//bool ���A �L�k�[�W�L��
	bool checked = true;




	system("pause");
	return 0;
}