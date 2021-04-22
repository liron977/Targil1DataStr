#ifndef _SELECTION_H
#define _SELECTION_H
#include "arrUtils.h"

class Selection
{
	arrUtils a;
	double selection(double A[], int left, int right, int i)const;
public:

	double selectionArr(const arrUtils& arr, double* arr2)const;
};



#endif//_SELECTION_H
