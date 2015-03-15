#include <string>


#pragma once
class CaseBox
	{
	private:
		double length;
		double width;
		double high;
		//String name;

	public:

		/**
		*	static member
		*	only onec declared 
		*/
		static int obj_count;

		/**
		*	Constructor
		*/
		CaseBox(void);

		/**
		*	Constructor (length,width,high)
		*/
		CaseBox(double length,double width,double high);

		/**
		*	Destructor
		*/
		~CaseBox(void);

		/**
		*	setLength
		*/
		void setLength(double length);

		/**
		*	setWidth
		*/
		void setWidth(double width);

		/**
		*	setHigh
		*/
		void setHigh(double high);

		/**
		*	getLength
		*/
		double getLength();

		/**
		*	getWidth
		*/
		double getWidth();

		/**
		*	getHigh
		*/
		double getHigh();

		/**
		*	getRectangleArea
		*/
		double getRectangleArea();

		/**
		*	getVolume
		*/
		double getVolume();

		/**
		*	objectCompare 
		*/
		int objectCompare(CaseBox* casebox);

		/**
		*	setName
		*/
		//void setName(sString name);



	};

