#ifndef _FIVESORT_H
#define  _FIVESORT_H
#include "arrUtils.h"

class FiveSort
{
	enum { MIN_SIZE = 5 };
	arrUtils a;
	double sort(double* arr, int left, int index, int size) const;
public:
	double fiveSortArr(arrUtils a, double* arr3) const;
};

#endif// _FIVESORT_H