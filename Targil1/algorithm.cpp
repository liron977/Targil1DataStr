#include "arrUtils.h"
#include "algorithm.h"
#include <iostream>
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;



double algorithm::insertionSort()
{
    double key;
    int j, i;
    arrUtils arr, size_arr;
    double* arr_1 = arr.getArr();
    arr.setIndex();
    int size = arr.getSize();
    int index = arr.getIndex();

    for (i = 1; i < size; i++)
    {
        key = arr_1[i];//take value
        j = i;
        while (j > 0 && arr_1[j - 1] > key)
        {
            arr_1[j] = arr_1[j - 1];
            j--;
        }
        arr_1[j] = key;   //insert in right place
    }
    return arr_1[index-1];
    return arr_1[i - 1];
}
