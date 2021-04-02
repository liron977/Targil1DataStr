#include "FiveSort.h"
#include "arrUtils.h"

double FiveSort::fiveSortArr(arrUtils a)
{
    double* arr3 = new double[a.getSize()];
    a.copyArr(arr3);
    int size = a.getSize();
    int index = a.getIndex();
    return(sort(arr3, 0, index, size-1));
}


double FiveSort::sort(double* arr, int left, int index, int size)
{
    int pivot_index=0;
    if (size <= 5)
    {
        a.bubbleSort(arr, size + 1);
        return arr[index - 1];
    }
    else
    {
        int b_size = (size + 4) / 5;
        double* b = new double[b_size];

        for (int i = 0; i < b_size; i++) {
            int t = left + i * 5;      // 5-elements block pointer
            if (size - t > 4) {
                a.bubbleSort(arr, 5);      // sort 5 elements
                b[i] = arr[t + 2];
            }
            else {      // less than 5 left
                a.bubbleSort(arr + t, size - t + 1);  // sort the rest 
                b[i] = arr[t + (size - t) / 2];
            }
        }
        int pivot = (int)sort(b, 0, (b_size / 2), b_size - 1); //b = [5,6]
        for (int i = 0; i < size; i++) {
            if (arr[i] == pivot)
                pivot_index = i;
        }
        a.swap(&arr[0], &arr[pivot_index]);
        //call partition (a,pivot,right) 
        int k = a.partitionV1(arr, 0, size);
        if (k > index)
        {
            return sort(arr, 0, index, k - 1);
        }
        if (k < index)
        {
            return sort(arr + k + 1, k + 1, index - k - 1, size - k - 1);
        }
        if (k == index)
        {

            return pivot - 1;
        }
    }
}
