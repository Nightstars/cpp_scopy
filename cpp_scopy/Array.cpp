#include "Array.h"

void Array::setCount(int _count)
{
	m_iCount = _count;
}

int Array::getCount()
{
	return m_iCount;
}

Array::Array()
{
	cout << "Array()" << endl;
}

Array::Array(const Array& arr)
{
	m_iCount = arr.m_iCount;
	cout << "Array(const Array& arr)" << endl;
}

Array::~Array()
{
	cout << "~Array()" << endl;
}
