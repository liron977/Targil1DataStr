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

public:
	void run();
private:
	void printResult(double& algo_res, int algo);
	void runTimeInsertion(double* arr1);
	void runTimeSelection(double* arr2);
	void runTimeQuintuple(double* arr3);
};
#endif // ALGORITHMS_H