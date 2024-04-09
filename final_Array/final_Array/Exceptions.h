#pragma once
#include <iostream>
using namespace std;

class BadLength : public std::exception {
private:
	int _length;
public:
	BadLength(int length) : _length(length) {}
	void Show() const {
		cout << _length << " bad length" << endl;
	}
};

//Checks if index is in the Array's range
class BadRange : public std::exception {
private:
	int _index;
	int _maxIndex;
public:
	BadRange(int index, int maxIndex) : _index(index), _maxIndex(maxIndex) {}
	void Show() const {
		cout << "Index " << _index << " is out of range 0:" << _maxIndex << endl;
	}
};