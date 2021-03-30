#include "arrUtils.h"
#include <iostream>
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

bool arrUtils::isValidNumber(int str_size, char* str)
{

    int i, negative_symbol = 0;
    int counter_num_after_point = -1; // cuase in same iterstion we'r checking point_counter == 1
    int point_counter = 0;
    int value = 1;
    for (i = 0; i < str_size; i++)
    {
       
        if ((str[i] < '0' || str[i] > '9') &&  str[i] != '.'&& str[i]!='-') // if the char is not a number or point 
        {
            return false;
        }
        if (str[i] == '.') // if there are more then one point 
        {
            point_counter++;
            if (point_counter > 1)
            {
                return false;
            }

        }
        if (str[i] == '-')
        {
            if (i == size_arr - 1)
                return false;
            if((str[i+1] < '0' || str[i+1] > '9'))
                return false;
            negative_symbol++;
            if (negative_symbol > 1)
            {
                return false;
            }
        }
        if (point_counter == 1) // if there are more the 4 numbers after the poit
        {
            counter_num_after_point++;
            if (counter_num_after_point > 5)
            {
                return false;
            }
        }


    }
    if (point_counter != 1 || point_counter == 0)
    {
        return false;
    }
    return true;

}
double* arrUtils::getArr()
{
    char curr_char;
    int i = 0, j, size_arr;
    char str[256];
    double num;
    char* tmp;
    cout << "Pleas enter num of numbers\n";
    cin >> size_arr;
    if (size_arr < 1)
    {
        cout << "Wrong iput" << endl;
        exit(-1);
    }
        
    arr = new double[size_arr];

    curr_char = getchar(); // for whitespace from arr size 

    for (j = 0; j < size_arr; j++)
    {

        curr_char = getchar();
        while (curr_char != ' ' && curr_char != '\n') //here we get each of the number characters
        {
            str[i] = curr_char;
            curr_char = getchar();
            i++;
        }
        tmp = new char[i + 1];
        str[i + 1] = '\n';
        if (isValidNumber(i, str)) // i is the str size
        {
  
            num = atof(str); //we got a valid number and change its type to double 
       
            arr[j] = num;
        }
        else
        {
            cout << "Wrong iput" << endl;
            exit(-1);
        }

        i = 0;


    }
    setArr(arr, size_arr);
    return arr;


}
int  arrUtils::getSize()
{
    return size_arr;
}
void arrUtils::printArr()
{
    int i;
    for (i = 0; i < size_arr; i++)
    {
        printf("%lf", arr[i]);
    }
}
void arrUtils::setIndex()
{
    cout << "Please enter the requsted number:" << endl;
    cin >> index;
    if (!isValidIndex(index)){
        cout << "Wrong iput" << endl;
        exit(-1);
    }
}
bool arrUtils::isValidIndex(int _index)
{
    if (_index>size_arr)
    {
        return false;
    }

    if (_index == 0) // testing if user input is not a number 
    {
        return false;
    }

    return true;
}
int arrUtils::getIndex()
{
    return index;

}