
#include <iostream>
#include "CaseBox.h"

using namespace std;

int CaseBox::obj_count = 0;

int main(int argc,char* argv[]){

	cout << "Title : use destructor" << endl << endl;


	CaseBox cb1(5,5,5);
	cout << "cb1 rectangle area = " << cb1.getRectangleArea() << endl;
	
	
	cb1.~CaseBox();

	system("pause");
	return 0;
}
 