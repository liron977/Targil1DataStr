#ifndef _ALGORITHMS_H
#define _ALGORITHMS_H
#include "arrUtils.h"
#include "FiveSort.h"
#include "InsertionSort.h"
#include "Selection.h"
#include <cstdio>
#include <iostream>
#include <iomanip>
#include <chrono>
#include <fstream>
using namespace std;


class Algorithms
{
	arrUtils arr;
	InsertionSort insertionSort;
	Selection selection;
	FiveSort fiveSort;
	ofstream myfile;
	enum { INSERATION = 1, SELECTION = 2, FIVESORT = 3 };
	void printResult(double& algo_res, int algo) const;
	void runInsertionSort(arrUtils arr, double* arr1);
	void runSelectionSort(arrUtils arr, double* arr2);
	void runeQuintupleSort(arrUtils arr, double* arr3);
	void freeArray(double* arr1, double* arr2, double* arr3);

public:
	void run();
	
};
#endif // ALGORITHMS_H