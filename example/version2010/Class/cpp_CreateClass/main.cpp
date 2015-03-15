
#include <iostream>
#include "CaseBox.h"

using namespace std;


int CaseBox::obj_count=0;

int main(int argc,char* argv[]){

	cout<<"Title : create class"<<endl;
	cout << endl;

	//box1
	CaseBox box1;
	box1.setHigh(5);
	box1.setLength(5);
	box1.setWidth(5);

	cout << "objce count (by class)" << CaseBox::obj_count << endl;
	cout << "objce count (by objcet)" <<box1.obj_count <<endl;
	cout<<"box1 volume = "<<box1.getVolume()<<endl;
	cout<<"box1 RectangleArea = "<<box1.getRectangleArea()<<endl;
	cout << "one CaseBox use " << sizeof box1 << " bytes" << endl;
	cout << endl;
		box1.~CaseBox();
	//box2
	CaseBox box2(6,6,6);
	cout << "objce count (by class) = " << CaseBox::obj_count << endl;
	cout << "objce count (by objcet) = " <<box2.obj_count <<endl;
	cout<<"box2 volume = "<<box2.getVolume()<<endl;
	cout<<"box2 RectangleArea = "<<box2.getRectangleArea()<<endl;
	cout << "one CaseBox use " << sizeof box2 << " bytes" << endl;
	cout << endl;

	//p1 pointer
	CaseBox* p1 = &box1;

	cout << "box1 address = " << p1 <<endl;
	cout << "box1 rectangle area = " << p1->getRectangleArea() <<endl;
	cout << endl;

	//p2 pointer
	CaseBox* p2 ;
	p2 = &box2;
	cout << "box2 address = " << p2 <<endl;
	cout << "box2 rectangle area = " << p2->getRectangleArea() <<endl;
	cout << endl;

	cout << "p2 rectangle area compare p1 = " << p2->objectCompare(p1) << endl;
	if(p2->objectCompare(p1)){
		cout << "box2 > box1" << endl;
	}else{
		cout << "box1 > box2" << endl;
	}
	cout << endl;

	//objce array use
	CaseBox myCaseBox[5];
	p1 = myCaseBox;
	myCaseBox[2] = box2;

	cout << "myCaseBox[2] rectangle area = " << (p1 + 2)->getRectangleArea() << endl;
	cout << endl;
	cout << "myCaseBox[0] sizeof = " << sizeof myCaseBox[0] << endl;
	cout << "myCaseBox sizeof = " << sizeof myCaseBox << endl;
	cout << endl;

	p1->~CaseBox();
	p2->~CaseBox();

	box2.~CaseBox();

	
	system("pause");

	return 0;
}
