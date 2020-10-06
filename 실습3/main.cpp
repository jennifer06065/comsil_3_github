#include <iostream>
using namespace std;

#include "Array.h"
#include "RangeArray.h"

int main() {
	int i, x, y;
	
	RangeArray c(-1, 3), d(3, 7);
	for (i = c.baseValue(); i <= c.endValue(); i++) c[i] = i * 3;
	for (i = d.baseValue(); i <= d.endValue(); i++) d[i] = i * 4;
	cout << "c(-1,3)"; c.print();
	cout << "d(3,7)"; d.print();
	cout << "c[-2] "; c[-2] = 3;
	x = c[-1]; y = d[3];
	cout << "c[-1]=" << x << " d[3]=" << y << endl;

	return 0;
}
