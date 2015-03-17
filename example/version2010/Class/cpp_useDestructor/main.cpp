
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
	cout << "Title : use destructor" << endl << endl;

	//rectangle area
	CaseBox cb1(5,5,5);
	cout << "cb1 rectangle area = " << cb1.getRectangleArea() << endl;

	CaseBox cb2(6,6,6);
	cout << "cb2 rectangle area = " << cb2.getRectangleArea() << endl;

	CaseBox cb3(7,7,7);
	cout << "cb3 rectangle area = " << cb3.getRectangleArea() << endl;


	//objcet volumn fucntion compare volumn
	if(cb2 > cb1){
		cout << "cb2 > cb1 "<< endl;
	}else if(cb2 >cb3){
		cout << "cb2 > cb3 "<< endl;
	}else{
		cout << "cb2 < cb3 "<< endl;
	}

	//objcet volumn fucntion compare value
	if(cb2 > 100.0){
		cout << "cb2 > 100.0" << endl;
	}else{
		cout << "cb2 < 100.0" << endl;
	}

	//class out value compare objcet volumn fucntion
	if(50.0 > cb2){
		cout << "50.0 > cb2" << endl;
	}else{
	cout << "50.0 < cb2" << endl;
	}


	//destructor
	cb1.~CaseBox();

	system("pause");
	return 0;
}
