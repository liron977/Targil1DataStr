#include "FiveSort.h"
#include "arrUtils.h"
double FiveSort::fiveSortArr(arrUtils a,double* arr3) const
{
    a.copyArr(arr3);
    int size = a.getSize();
    int index = a.getIndex();
    return(sort(arr3, 0, index, size-1));
}
double FiveSort::sort(double* arr, int left, int index, int size) const
{
    int pivot_index=0;
    if (size <= MIN_SIZE) {
        a.bubbleSort(arr, size + 1);
        return arr[index - 1];
    }
    else {
        int b_size = (size + (MIN_SIZE-1)) / MIN_SIZE;
        double* b = new double[b_size];
        for (int i = 0; i < b_size; i++) {
            int t = left + i * MIN_SIZE;      // 5-elements block pointer
            if (size - t > (MIN_SIZE-1)) {
                a.bubbleSort(arr, MIN_SIZE);      // sort 5 elements
                b[i] = arr[t + MIN_SIZE/2];
            }
            else {      // less than 5 left
                a.bubbleSort(arr + t, size - t + 1);  // sort the rest 
                b[i] = arr[t + (size - t) / (MIN_SIZE/2)];
            }
        }
        double pivot = (int)sort(b, 0, (b_size / (MIN_SIZE/2)), b_size - 1);
        delete [] b;
        for (int i = 0; i < size; i++) {
            if (arr[i] == pivot)
                pivot_index = i;
        }
        a.swap(&arr[0], &arr[pivot_index]);//moving the pivot to the start of the array
        int k = a.partitionV1(arr, 0, size);
        if (k > index){
            return sort(arr, 0, index, k - 1);
        }
        if (k < index){
            return sort(arr + k + 1, k + 1, index - k - 1, size - k - 1);
        }
        if (k == index){
            return pivot - 1;
        }
    }
}
