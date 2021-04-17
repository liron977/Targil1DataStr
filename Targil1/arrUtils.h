#ifndef _ARRUTILS_H
#define _ARRUTILS_H

class arrUtils
{	
	double* arr;
	int size_arr;
	int index;
	void setArr(double* _arr);
	void setIndex(int _index);
	void setSize(int _size_arr);
	bool isValidNumber(int str_size, char* str)const;
	void indexInput();
	bool isValidIndex(int _index)const;
public:

	void setUserInput();
	int getSize() const;
	int getIndex()const;
	void copyArr(double* dest_arr) const;
	void swap(double* a, double* b) const;
	void bubbleSort(double arr[], int n) const;
	int partitionV1(double arr[], int left, int right) const;
	void freeArr();
	/*~arrUtils();*/
};

#endif //_ARRUTILS_H