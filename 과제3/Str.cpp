#include <iostream>
#include <cstring>
using namespace std;
#include "Str.h"


Str::Str(int leng) {
    	len = leng;
	str = new char[len];
}
Str::Str(char* neyong) {
	len = strlen(neyong);
	str = new char[len];
	for (int i=0; i<len; i++){
		str[i]=neyong[i];
	}
}
Str::~Str() {
    	delete str;
}
int Str::length() {
    	return len;
}
char* Str::contents() {
    	char* temp = new char[len];
	for (int i=0; i<len; i++)
		temp[i]=str[i];
	return temp;
}
int Str::compare(class Str& a) {
	int same;
	same=strcmp(a.contents(), str);
	return same;
}
int Str::compare(char* a) {
	int same;
	same=strcmp(a, str);
	return same;
}
void Str::operator=(char* a) {
    	len = strlen(a);
	delete str;
	str = new char[len];
	for (int i=0; i<len; i++){
		str[i]=a[i];
	}

}
void Str::operator=(class Str& a) {
	char* b=a.contents();
    	len = strlen(b);
	delete str;
	str = new char[len];
	for (int i=0; i<len; i++)
		str[i]=b[i];
}
