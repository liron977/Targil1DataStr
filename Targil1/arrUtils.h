#ifndef _ARRUTILS_H
#define _ARRUTILS_H

class arrUtils
{	
	double* arr;
	int size_arr;
	int index;

private:
	void setArr(double* _arr){
		arr = _arr;
	}
	void setIndex(int _index){
		index = _index;
	}
	void setSize(int _size_arr){
		size_arr = _size_arr;

	}
	bool isValidNumber(int str_size, char* str);
	void indexInput();
	bool isValidIndex(int _index);
public:

	void setUserInput();
	int getSize();
	int getIndex();
	void copyArr(double* dest_arr);
	void swap(double* a, double* b);
	void bubbleSort(double arr[], int n);
	int partitionV1(double arr[], int left, int right);
	void freeArr();
};

#endif //_ARRUTILS_H