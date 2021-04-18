#include "arrUtils.h"
#include <iostream>
using namespace std;
bool arrUtils::isValidNumber(int str_size, char* str) const
{
    int i, negative_symbol = 0;
    int counter_num_after_point = -1; // cuase in same iterstion we'r checking point_counter == 1
    int point_counter = 0;
    int value = 1;
    for (i = 0; i < str_size; i++) {
        if ((str[i] < '0' || str[i] > '9') &&  str[i] != '.'&& str[i]!='-') { // if the char is not a number or point 
            return false;
        }
        if (str[i] == '.') {// if there are more then one point 
            point_counter++;
            if (point_counter > 1) {
              return false;
            }
        }
        if (str[i] == '-'){ //for negative numbers
            if (i == size_arr - 1)
                return false;
            if((str[i+1] < '0' || str[i+1] > '9'))
                return false;
            negative_symbol++;
            if (negative_symbol > 1){
                return false;
            }
        }
        if (point_counter == 1) { // if there are more the 4 numbers after the poit
            counter_num_after_point++;
            if (counter_num_after_point >= 5)
            {
                return false;
            }
        }
    }
    if (point_counter != 1 || point_counter == 0|| counter_num_after_point==0){//(point_counter == 0)-if the number isn`t decimal number,(point_counter != 1)-in order to make sure that the number has only one point,(counter_num_after_point==0)-to make sure tjat after the point we have number
        return false;
    }
    return true;

}
void arrUtils::setUserInput()
{
    char curr_char;
    int i = 0, j, size_arr;
    char str[256];
    double num;
    char* tmp;
    cin >> size_arr;
    if (size_arr < 1) {
        cout << "Wrong input" << endl;
        exit(-1);
    }
    setSize(size_arr);
    indexInput();
    arr = new double[size_arr];
    cin.get(curr_char); // for whitespace from arr size 
    for (j = 0; j < size_arr; j++)
    {
        cin.get(curr_char);
        while (curr_char != ' ' && curr_char != '\n') //here we get each of the number characters
        {
            str[i] = curr_char;
           cin.get(curr_char);
            i++;
        }
       str[i] = '\n';
        if (isValidNumber(i, str)) // i is the str size
        {
           num = atof(str); //we got a valid number and change its type to double 
            //num =std::stod(str, i + 1);
            arr[j] = num;
        }
        else {
            cout << "Wrong input" << endl;
            exit(-1);
        }
        i = 0;
    }
    setArr(arr);

}
int  arrUtils::getSize() const
{
    return size_arr;
}
void arrUtils::indexInput() {
    cin >> index;
    if (!isValidIndex(index)){
        cout << "Wrong input" << endl;
        exit(-1);
    }
    setIndex(index);
}
bool arrUtils::isValidIndex(int _index) const
{
    if (_index > size_arr)
    {
        return false;
    }
    if (_index == 0) // testing if user input is not a number 
    {
        return false;
    }

    return true;
}
int arrUtils::getIndex() const
{
    return index;
}
void arrUtils::copyArr(double* dest_arr) const
{
    for (int i = 0; i < size_arr; i++)
    {
        dest_arr[i] = arr[i];
    }
}
void arrUtils::swap(double* a, double* b) const
{
    double t = *a;
    *a = *b;
    *b = t;
}
void arrUtils::bubbleSort(double arr[], int n) const
{
    int i, j;
    for (i = 0; i < n - 1; i++)

        // Last i elements are already in place 
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}
int arrUtils::partitionV1(double arr[], int left, int right) const {

    int pivot = left;
    int index = right;
    while (pivot != index) {
        if (pivot < index) {
            if (arr[pivot] >= arr[index]) {
                swap(&arr[pivot], &arr[index]);
                int newIndex = pivot + 1;
                pivot = index;
                index = newIndex;
            }
            else {
                index--;
            }
        }
        else {
            if (arr[pivot] >= arr[index]) {
                index++;
            }
            else {
                swap(&arr[pivot], &arr[index]);
                int newIndex = pivot - 1;
                pivot = index;
                index = newIndex;
            }
        }
    }
    return pivot;
}
void arrUtils::freeArr()
{
    delete[] arr;
}
void arrUtils::setArr(double* _arr) {
    arr = _arr;
}
void arrUtils::setIndex(int _index) {
    index = _index;
}
void arrUtils::setSize(int _size_arr) {
    size_arr = _size_arr;

}
