
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
	//�{���b�����Aargc���Ȥ@�w�|�j��1�A�]���ܤ֥]�A�F�{���W�١A��argv�h���O�x�s�F�޼ƪ��r��
	//�ϥΩR�O���ܦr��
	//�{���W��(���i���ť�) �޼�1 �޼�2
	//argument -o -p

	//	�{���b����ɡA�i�H���[�@�Ǥ޼ƥH���w���椣�P���\��A�Ҧp�G
	//copy -r ./temp ./tmp

	cout << "*****Command-line argument*****" << endl << endl;

	/*	�{���b����ɡA�i�H���[�@�Ǥ޼ƥH���w���椣�P���\��A�Ҧp�G
	copy -r ./temp ./tmp
	�C�Ӥ޼Ƥ����H�ťէ@�Ϲj�A�W�����R�O�]�A�{���W�٦@�|�����Ӥ޼ơA�Yapp�Bhello.c�B-o�B-c�Bproject.p�A
	�o���Ӥ޼Ƥ��O�x�s�b�� �Ϋ��Ъ��r��}�C�����A�Ychar *argv[]���C

	�{���b�����Aargc���Ȥ@�w�|�j��1�A�]���ܤ֥]�A�F�{���W�١A��argv�h���O�x�s�F�޼ƪ��r��A
	�Ҧp�W�����Ҥl���Aargv[0]�O"app"�B argv[1]�O"hello.c"�Bargv[2]�O"-o"�Bargv[3]�O"-c"�Bargv[4]�O"project.p"�C
	�p��argv[0]�O�{���W��"show"�A��argv[1]���r��N�|�O"This is a string!"�C
	*/ 

	for(int i = 0; i < argc; i++) { 
		char *arg = argv[i]; 


		switch(arg[0]) { 
		case '-': 
			/*		 �B�z�ѼơA�]�w����ﶵ�A�Ҧp-o�B-p�B-r���� 
			�b�P�_����ﶵ��case���A�z�i�H�i�@�B�ˬd�ĤG�Ӧr���A�Ҧp�G*/ 
			switch(arg[1]) { 
			case 'o': 
				// �ﶵo���B�z
				cout << "-o" << endl;
				break; 
			case 'p': 
				// �ﶵp���B�z 
				cout << "-p" << endl;
				break; 
			case 'r': 
				// �ﶵr���B�z 
				cout << "-r" << endl;
				break; 
			default: 
				// �ﶵ���~�B�z�Ψ䥦�B�z 
				cout << "default" << endl;
				break;
			}
		default: 
			// ��������\�� 
			break;
		}

	}


	cout << endl;
	system("pause");
	return 0;
}