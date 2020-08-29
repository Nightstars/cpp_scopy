#pragma once
#include <iostream>
using namespace std;
class Array
{
public:
	void setCount(int _count);
	int getCount();
	Array();
	Array(const Array& arr);
	~Array();
private :
	int m_iCount;
};

