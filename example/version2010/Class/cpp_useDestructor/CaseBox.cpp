#include "CaseBox.h"
#include <iostream>

using namespace std;


/**
*	Constructor
*/
CaseBox::CaseBox(void)
{
	this->obj_count++;
}

/**
*	Constructor (length,width,high)
*/
CaseBox::CaseBox(double length,double width,double high){
	this->length=length;
	this->width=width;
	this->high=high;
	this->obj_count++;
}

/**
*	Destructor
*/
CaseBox::~CaseBox(void){
	cout << "execute destuctor !!" << endl;
}

/**
*	setLength
*/
void CaseBox::setLength(double length){
	this->length=length;
}

/**
*	setWidth
*/
void CaseBox::setWidth(double width){
	this->width=width;
}

/**
*	setHigh
*/
void CaseBox::setHigh(double high){
	this->high=high;
}

/**
*	getLength
*/
double CaseBox::getLength(){
	return this->length;
}

/**
*	getWidth
*/
double CaseBox::getWidth(){
	return this->width;
}

/**
*	getHigh
*/
double CaseBox::getHigh(){
	return this->high;
}

/**
*	getRectangleArea
*/
double CaseBox::getRectangleArea(){

	return 2.0*((this->length*this->width)+(this->high*this->length)+(this->width*this->high));

}

/**
*	getVolume
*/
double CaseBox::getVolume(){

	return this->length*this->high*this->width;
}

/**
*	objectCompare 
*/
int CaseBox::objectCompare(CaseBox* casebox){

	return this->getRectangleArea() > casebox->getRectangleArea();
}

bool CaseBox::operator > (CaseBox& caseBox){
	return this->getVolume() > caseBox.getVolume();
}



