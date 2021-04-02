#include "InsertionSort.h"
#include "arrUtils.h"
#include "Selection.h"
#include "FiveSort.h"
#include <iostream>
#include <cstdio>
#include <iostream>
#include <string>
#include <iomanip>
#include <chrono>
using namespace std;

int main()
{
	arrUtils arr;
	arr.setUserInput();
	arr.indexInput();
	InsertionSort insertionSort;
	Selection selection;
	FiveSort fiveSort;
	double indexAlgorithm = insertionSort.insertionSort(arr);
	double indexSelection = selection.selectionArr(arr);
	double indexFiveSort = fiveSort.fiveSortArr(arr);
	cout << fixed << showpoint;
	cout << setprecision(4);
	cout <<"Insertion-sort: "<< indexAlgorithm << endl;
	cout << "Selection "<< indexSelection << endl;
	cout << "Five-sort " << indexFiveSort << endl;

	auto start = chrono::high_resolution_clock::now();
	// unsync the I/O of C and C++.
	ios_base::sync_with_stdio(false);
	insertionSort.insertionSort(arr);// Here you put the name of the function you wish to measure
	auto end = chrono::high_resolution_clock::now();
	// Calculating total time taken by the program.
	double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
	time_taken *= 1e-9;
	ofstream myfile("Measure.txt"); // The name of the file
	myfile << "Time taken by function <name-of-fun> is : " << fixed << time_taken << setprecision(9);
	myfile << " sec" << endl;
	myfile.close();


}
