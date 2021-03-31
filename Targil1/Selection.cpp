#include "Selection.h"
#include "arrUtils.h"


void Selection::swap(double* a, double* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
double Selection::selectionArr(double* arr2,arrUtils arr)//initialize arr in order to use a selection algorithm
{
    //double* arr_1 = arr.getArr();
    int size = arr.getSize();
    int index = arr.getIndex();
    return(selection(arr2, 0, size - 1, index));
   
}
double Selection::selection(double A[], int left, int right, int i)
{
    int pivot;
    int leftPart;
    pivot = partition(A, left, right);
    leftPart = pivot - left + 1;
    if (i == leftPart)
        return A[pivot];
    if (i < leftPart) {
    return selection(A, left, pivot - 1, i);
    } 
    else {
        return selection(A, pivot + 1,right, i-leftPart);
    }
}
int Selection::partition(double arr[], int left, int right)
{
    int pivot = arr[right]; // pivot
    int i = (left - 1); // Index 

    for (int j = left; j <= right - 1; j++)
    {
        if (arr[j] < pivot) // 
        {
            i++; // increment index 
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[right]);
    return (i + 1);
}
