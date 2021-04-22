#include "arrUtils.h"
#include "InsertionSort.h"
#include <iostream>
#include <cstdio>
#include <iostream>
#include <string>
#include <iomanip>
#include <chrono>
using namespace std;

double InsertionSort::insertionSort(const arrUtils& arr,double* arr1) const
{
    arr.copyArr(arr1);
    double key;
    int size = arr.getSize(),j=0;
    int index = arr.getIndex();
    for (int i = 1; i < size; i++)
    {
        key = arr1[i];//take value
        j = i;
        while ( j > 0 && arr1[j - 1] > key)
        {
            arr1[j] = arr1[j - 1];
            j--;
        }
        arr1[j] = key;   //insert in right place
    }
    return arr1[index - 1];
}
