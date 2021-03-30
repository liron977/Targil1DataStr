#ifndef _ARRUTILS_H
#define _ARRUTILS_H

class arrUtils
{
	double* arr;
	int size_arr;
	int index;
public:
	void setArr(double* _arr, int _size_arr)
	{
		arr = _arr;
		size_arr = _size_arr;
	}
	bool isValidNumber(int str_size, char* str);
	double* getArr();
	int getSize();
	void printArr();
	void setIndex();
	int getIndex();
	bool isValidIndex(int _index);
};

#endif //_ARRUTILS_H