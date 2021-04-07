#ifndef _SELECTION_H
#define _SELECTION_H
#include "arrUtils.h"

class Selection
{
	arrUtils a;
private:
	double selection(double A[], int left, int right, int i);
public:

	double selectionArr(arrUtils arr, double* arr2);	
};



#endif//_SELECTION_H
