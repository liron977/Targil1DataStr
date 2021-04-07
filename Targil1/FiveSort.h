#ifndef _FIVESORT_H
#define  _FIVESORT_H
#include "arrUtils.h"

class FiveSort
{
	arrUtils a;
private:
	double sort(double* arr, int left, int index, int size);
public:
	double fiveSortArr(arrUtils a, double* arr3);
};

#endif// _FIVESORT_H