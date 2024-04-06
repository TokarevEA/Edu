#include <iostream>
using namespace std;

class BadLength : public std::exception {
private:
	int _length;
public:
	BadLength(int length) : _length(length) {}
	void Show() const {
		cout << " \u2642 Your array length is " << _length << " and it is so freaking bad \u2642" << endl;
	}
	
};