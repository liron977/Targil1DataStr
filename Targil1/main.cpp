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
	arr.setUserInput();
	arr.indexInput();
	double* arr1 = new double[arr.getSize()];
	double* arr2 =new double[arr.getSize()];;
	double* arr3= new double[arr.getSize()];;
	arr.copyArr(arr1);
	arr.copyArr(arr2);
	arr.copyArr(arr3);
	InsertionSort insertionSort;
	Selection selection;
	double indexAlgorithm = insertionSort.insertionSort(arr1,arr);
	double indexSelection = selection.selectionArr(arr2,arr);
	cout << fixed << showpoint;
	cout << setprecision(4);
	cout <<"Insertion-sort: "<< indexAlgorithm << endl;
	cout << "Selection "<< indexSelection << endl;


}
