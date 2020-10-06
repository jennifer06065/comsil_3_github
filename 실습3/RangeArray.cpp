#include <iostream>
using namespace std;

#include "RangeArray.h"


RangeArray::RangeArray(int a, int b) : Array(b-a+1) {
	low = a;
	high = b;
}

RangeArray::~RangeArray() {}

int RangeArray::baseValue() {
	return low;
}

int RangeArray::endValue() {
	return high;
}

int& RangeArray::operator[](int i) {
	i=i-low;
	return Array::operator[](i);
}

int RangeArray::operator[](int i) const {
	i=i-low;
	return Array::operator[](i);
}
