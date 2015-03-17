
#include <iostream>
#include "CaseBox.h"

using namespace std;

int CaseBox::obj_count = 0;

//too many parameter cannot declare in the class
bool operator > (const double& value,const CaseBox& caseBox);

bool operator > (const double& value,const CaseBox& caseBox){
	return value > caseBox.getVolume();
}

int main(int argc,char* argv[]){

	//title
	cout << "Title : Class Template " << endl << endl;

	//rectangle area
	CaseBox cb1(5,5,5);
	cout << "cb1 rectangle area = " << cb1.getRectangleArea() << endl;

	CaseBox cb2(6,6,6);
	cout << "cb2 rectangle area = " << cb2.getRectangleArea() << endl;

	CaseBox cb3(7,7,7);
	cout << "cb3 rectangle area = " << cb3.getRectangleArea() << endl;




	//destructor
	cb1.~CaseBox();
	cb2.~CaseBox();
	cb3.~CaseBox();

	system("pause");
	return 0;
}
