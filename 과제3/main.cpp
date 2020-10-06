#include <iostream>

using namespace std;
#include "Str.h"

int main() {
/*
	Str a("I'm a girl");
	cout<<a.contents()<<endl;
	a="I'm a boy\n";
	cout << a.contents()<<endl;
	Str b(3);
	b=a;
	cout<<b.contents()<<endl;
	cout <<a.compare("I'm a a")<<endl;
	cout <<a.compare(b)<<endl;
	cout <<"크기 : "<<a.length()<<endl;
	*/
	Str a("I'm a girl");
	cout<<a.contents();
	a="I'm a boy\n";
	cout<<a.contents();
	cout<<a.compare("I'm a a")<<endl;
	return 0;
}
