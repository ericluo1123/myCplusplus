
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

	CaseBox boxes[]={CaseBox(5.0,5.0,5.0),CaseBox(6.0,6.0,6.0),CaseBox(7.0,7.0,7.0)};





	//destructor
	cout << boxes[0].getVolume() << endl;
	cout << boxes[1].getVolume() << endl;
	cout << boxes[2].getVolume() << endl;
	
	system("pause");
	return 0;
}
