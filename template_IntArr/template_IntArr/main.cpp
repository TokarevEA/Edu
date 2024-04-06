#include <iostream>
#include"Array.h"
#include"Exceptions.h"
using namespace std;

int main() {
	
	Array<int>* newArr = new Array<int>();
	int length = 0;
	int index = 0;
	int value = 0;
	int size = 0;
	try {
		Array<int>* arr = new Array<int>(-1);
		cout << "arr size: " << arr->getLength() << endl;
		cout << arr->debug() << endl;
		
	} 
	catch (const BadLength& e) {
		e.Show(); 
	} 
	return 0;
}