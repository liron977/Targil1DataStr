#include "InsertionSort.h"
#include "arrUtils.h"
#include "Selection.h"
#include <iostream>
#include <cstdio>
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	arrUtils arr;
	
	//arr.getArr();
	InsertionSort insertionSort;
	Selection selection;
	//arr.printArr();

	double indexAlgorithm = insertionSort.insertionSort();
	double index = selection.selectionArr();
	cout << fixed << showpoint;
	cout << setprecision(4);
	cout << index << endl;
	//cout << std::setprecision(4) <<index<< endl;

}
