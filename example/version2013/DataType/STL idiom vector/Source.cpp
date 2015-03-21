
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[]){


	cout << "*****STL idiom vector*****" << endl;
	cout << endl;
	/************************
	�H����ɦV���覡�Ӿާ@vector
	*************************/

	//�z�i�H�غc�@�Ӥ������Ū�vector����G
	vector<int> ivector;

	//�p�G����N������Jvector���A�i�H�ϥ�push_back()�A�Ҧp�G
	for (int i = 0; i < 5; i++) {
		ivector.push_back(i);
		cout << "ivector[" << i << "] = " << ivector[i] << endl;
	}

	//�p�G����N�����`�Ǩ��X�A�h�i�Hbegin()�Pend()��k
	//���O�Ǧ^�_�l��m��iterator�P������m��iterator
	vector<int>::iterator it = ivector.begin();
	for (it; it != ivector.end(); it++){
		cout << *it << " ";
	}
	cout << endl;

	/*
		iterator�O�зǨ禡�w�w�q���O�]Class�^�A���O�@�ӫ��СA
		���Viterator���󪺯u����}�A�復�i��++���ʧ@�A
		��ܲ��ʦ� iterator���U�@�Ӥ����A�復�ϥ�*�B��l�]Dereferences operator�^�A
		��ܴ����Xiterator�ثe��}���ȡA�p�Giterator���X�ܵ�����m��iterator����}�A
		��ܤ������X�����C
		*/

	//capacity() ���o�e�q
	//size()���o��������
	cout << "capacity: " << ivector.capacity() << endl
		<< "size: " << ivector.size() << endl;


	//	�p�G�����vector�i��ƧǡB�M��B���൥�ާ@�A
	//	�i�H�ϥμзǨ禡�w�����x���t��k�A
	//	�n�ϥΪx���t��k�������t�J���Y�ɡG
	//	#include <algorithm>	

	//example
	int iarr1[] = { 30, 12, 55, 31, 98, 11, 41, 80, 66, 21 };
	vector<int> ivector1(iarr1, iarr1 + 10);

	// �Ƨ� 
	cout << "******sort*****" << endl;
	sort(ivector1.begin(), ivector1.end());
	vector<int>::iterator it1 = ivector1.begin();

	//show data
	for (it1; it1 != ivector1.end(); it1++) {

		cout << *it1 << " ";
	}
	cout << endl;
	cout << endl;


	//�j�M
	cout << "*****search*****" << endl;
	cout << "��J�j�M�ȡG";
	int search = 0;
	cin >> search;

	it1 = find(ivector1.begin(), ivector1.end(), search);


	if (it1 != ivector1.end()) {
		cout << "���j�M�ȡI = " <<*it1<< endl;
	}
	else {
		cout << "�䤣��j�M�ȡI" << endl;
	}

	cout << endl;
	cout << endl;



	//����
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