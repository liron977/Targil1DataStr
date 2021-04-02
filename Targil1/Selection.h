#ifndef _SELECTION_H
#define _SELECTION_H
#include "arrUtils.h"

class Selection
{
	arrUtils a;
public:
	
	//void swap(double* a, double* b);
	double selection(double A[], int left, int right, int i);
	//int partition(double arr[], int left, int right);
	//double selectionArr(double* arr1, arrUtils arr);
	double selectionArr(arrUtils arr);
	
};



#endif//_SELECTION_H
