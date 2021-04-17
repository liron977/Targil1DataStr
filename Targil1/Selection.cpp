#include "Selection.h"
#include "arrUtils.h"


double Selection::selectionArr(arrUtils arr,double* arr2) const//initialize arr in order to use a selection algorithm
{
    arr.copyArr(arr2);
    int size = arr.getSize();
    int index = arr.getIndex();
    return(selection(arr2, 0, size - 1, index)); 
}
double Selection::selection(double A[], int left, int right, int i)const
{
    int pivot;
    int leftPart;
      pivot = a.partitionV1(A, left, right);
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
