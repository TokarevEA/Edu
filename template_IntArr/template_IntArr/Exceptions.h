#pragma once
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


//int ValidInput() {
//	int operation;
//	if (!(cin >> operation)) {
//		cin.clear();
//		cin.ignore(numeric_limits<streamsize>::max(), '\n');
//		cout << "Invalid input. Please enter a number." << endl;
//
//		return 0;
//	}
//	return operation;
//};
//case 1:
//	operOpen = true;
//	while (operOpen) {
//		operMenu();
//		cin >> operation;
//		switch (operation)
//		{
//			int length;
//			short value;
//
//		case 1:
//			Array<short>*arrShort = new Array<short>();
//			arrShort = new Array<short>();
//			cout << "Enter length of Array" << endl;
//			cin >> length;
//			arrShort->resize(length);
//			arrShort->show();
//			break;
//
//		case 2:
//			cout << "Array length is " << arrShort->getLength() << endl;
//			break;
//
//		case 3:
//			newArrShort = arrShort;
//			newArrShort->show();
//			break;
//
//		case 4:
//			cout << "Enter element index" << endl;
//			cin >> index;
//			arrShort->getElement(index);
//			break;
//
//		case 5:
//			cout << "Enter new length" << endl;
//			cin >> newLength;
//			arrShort->resize(newLength);
//			arrShort->show();
//			break;
//
//		case 6:
//			cout << "Enter index elemet to delete" << endl;
//			cin >> index;
//			arrShort->remove(index);
//			arrShort->show();
//			break;
//
//		case 7:
//			cout << "Enter value to insert" << endl;
//			cin >> value;
//			arrShort->insertAtBeginning(value);
//			arrShort->show();
//			break;
//
//		case 8:
//			cout << "Enter value to insert" << endl;
//			cin >> value;
//			arrShort->insertAtEnd(value);
//			arrShort->show();
//			break;
//
//		case 9:
//			cout << "Enter value and index to replace element" << endl;
//			cin >> value, index;
//			arrShort->insert(value, index);
//			arrShort->show();
//			break;
//
//		case 10:
//			cout << "Enter value you are looking for" << endl;
//			cin >> value;
//			arrShort->search(value);
//			break;
//
//		case 0:
//			operOpen = false;
//			delete arrShort;
//			delete newArrShort;
//			break;
//
//		default:
//			cout << "Choose operation 1 to 10 or 0 to exit" << endl;
//			break;
//		}
//	}
//	break;
//case 2:
//	operOpen = true;
//	while (operOpen) {
//		operMenu();
//		cin >> operation;
//		switch (operation)
//		{
//			int length;
//			short value;
//
//		case 1:
//			arrInt = new Array<int>();
//			cout << "Enter length of Array" << endl;
//			cin >> length;
//			arrInt->resize(length);
//			arrInt->show();
//			break;
//
//		case 2:
//			cout << "Array length is " << arrInt->getLength() << endl;
//			break;
//
//		case 3:
//			newArrInt = arrInt;
//			newArrInt->show();
//			break;
//
//		case 4:
//			cout << "Enter element index" << endl;
//			cin >> index;
//			arrInt->getElement(index);
//			break;
//
//		case 5:
//			cout << "Enter new length" << endl;
//			cin >> newLength;
//			arrShort->resize(length);
//			arrInt->show();
//			break;
//
//		case 6:
//			cout << "Enter index elemet to delete" << endl;
//			cin >> index;
//			arrInt->remove(index);
//			arrInt->show();
//			break;
//
//		case 7:
//			cout << "Enter value to insert" << endl;
//			cin >> value;
//			arrInt->insertAtBeginning(value);
//			arrInt->show();
//			break;
//
//		case 8:
//			cout << "Enter value to insert" << endl;
//			cin >> value;
//			arrInt->insertAtEnd(value);
//			arrInt->show();
//			break;
//
//		case 9:
//			cout << "Enter value and index to replace element" << endl;
//			cin >> value, index;
//			arrInt->insert(value, index);
//			arrInt->show();
//			break;
//
//		case 10:
//			cout << "Enter value you are looking for" << endl;
//			cin >> value;
//			arrInt->search(value);
//			break;
//
//		case 0:
//			operOpen = false;
//			delete arrInt;
//			delete newArrInt;
//			break;
//
//		default:
//			cout << "Choose operation 1 to 10 or 0 to exit" << endl;
//			break;
//		}
//	}
//	break;