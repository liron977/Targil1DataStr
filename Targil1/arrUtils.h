#ifndef _ARRUTILS_H
#define _ARRUTILS_H

class arrUtils
{
	
	double* arr;
	int size_arr;
	int index;
public:
	void setArr(double* _arr)
	{
		arr = _arr;

	}
	void setIndex(int _index)
	{
		index = _index;
	}
	void setSize(int _size_arr)
	{
		size_arr = _size_arr;

	}
	bool isValidNumber(int str_size, char* str);
	void setUserInput();
	double* getArr();
	int getSize();
	void printArr();
	void indexInput();
	int getIndex();
	bool isValidIndex(int _index);
	void copyArr(double* dest_arr);
	void swap(double* a, double* b);
	void bubbleSort(double arr[], int n);
	int partitionV1(double arr[], int left, int right);
};

#endif //_ARRUTILS_H