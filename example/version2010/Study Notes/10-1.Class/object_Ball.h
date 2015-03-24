#pragma once

#include <string>
using namespace std;

class object_Ball{

private:
	string name;
	double radius;


public:
	object_Ball(void);
	~object_Ball(void);

	object_Ball(double, const char*); 
	object_Ball(double, string&); 

	//double radius();
	//string& name(); 

	//void radius(double); 
	//void name(const char*); 
	//void name(string&); 

	double volumn(); 
};

