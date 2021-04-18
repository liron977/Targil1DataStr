#include "Algorithms.h"
void Algorithms::run(){

	arr.setUserInput();

	double* arr1 = new  double[arr.getSize()];
	double* arr2 = new  double[arr.getSize()];
	double* arr3= new double[arr.getSize()];

	runInsertionSort(arr,arr1);
	runSelectionSort(arr, arr2);
	runeQuintupleSort(arr, arr3);
	
	freeArray(arr1, arr2, arr3);
	
}
void Algorithms::freeArray(double* arr1,double*arr2,double* arr3) {
	delete[] arr1;
	delete[] arr2;
	delete[] arr3;
	arr.freeArr();
}

void Algorithms::printResult(double& algo_res,int algo) const
{
	cout << fixed << showpoint;
	cout << setprecision(4);
	if(algo== INSERATION)
	cout << "Insertion sort i'th element " << algo_res << endl;
	else if(algo==SELECTION)
	cout << "Selection i'th element " << algo_res << endl;
	else
	{
		cout << "Quintuplet algorithm i'th element " << algo_res << endl;
	}

}
void Algorithms::runInsertionSort(arrUtils arr,double*arr1)  {

	
	auto start = chrono::high_resolution_clock::now();
	// unsync the I/O of C and C++.
	ios_base::sync_with_stdio(false);
	double indexInsertionSort = insertionSort.insertionSort(arr, arr1);
	auto end = chrono::high_resolution_clock::now();
	// Calculating total time taken by the program.
	double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
	time_taken *= 1e-9;
	myfile.open("Measure.txt",ios_base::app);
	myfile << "Time taken by function Insertion is : " << fixed << time_taken << setprecision(9);
	myfile << " sec" << endl;
	myfile.close();
	printResult(indexInsertionSort, 1);

}

void Algorithms::runSelectionSort(arrUtils arr, double* arr2) {

	
	auto start = chrono::high_resolution_clock::now();
	// unsync the I/O of C and C++.
	ios_base::sync_with_stdio(false);
	double indexSelection = selection.selectionArr(arr, arr2);
	auto end = chrono::high_resolution_clock::now();
	// Calculating total time taken by the program.
	double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
	time_taken *= 1e-9;
	myfile.open("Measure.txt", ios_base::app);
	myfile << "Time taken by function Selection is : " << fixed << time_taken << setprecision(9);
	myfile << " sec" << endl;
	myfile.close();	
	printResult(indexSelection, 2);

}
void Algorithms::runeQuintupleSort(arrUtils arr, double* arr3) {
	
	auto start = chrono::high_resolution_clock::now();
	// unsync the I/O of C and C++.
	ios_base::sync_with_stdio(false);
	double indexFiveSort = fiveSort.fiveSortArr(arr, arr3);
	auto end = chrono::high_resolution_clock::now();
	// Calculating total time taken by the program.
	double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
	time_taken *= 1e-9;
	myfile.open("Measure.txt", ios_base::app);
	myfile << "Time taken by function Quintuplet is : " << fixed << time_taken << setprecision(9);
	myfile << " sec" << endl;
	myfile.close();
	printResult(indexFiveSort, 3);
}
