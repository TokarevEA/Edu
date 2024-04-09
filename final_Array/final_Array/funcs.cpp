#include <iostream>
#include"Array.h"

using namespace std;

int insertLength() {
	int length = 0;
	cout << "Enter array length" << endl;
	cin >> length;
	return length;
}

int operSelect() {	
	cout << endl << "Enter operation code:" << endl
		<< "1 - Create Array" << endl
		<< "2 - Get length" << endl
		<< "3 - Copy Array" << endl
		<< "4 - Get Element" << endl
		<< "5 - Change size" << endl
		<< "6 - Delete Element" << endl
		<< "7 - Insert element at beginning" << endl
		<< "8 - Insert element at end" << endl
		<< "9 - Replace element" << endl
		<< "10 - Search element" << endl
		<< "0 - Exit" << endl;
	int oper = 0;
	cin >> oper;
	return oper;
}

template <typename T>void performOperations(Array<T>* arr) {
	bool open = true;	
	while (open) {
		try{
			int oper = operSelect();
			switch (oper) {
			case 1: {
				arr->resize();
				cout << "New array has been created" << endl;
				arr->show_arr();
				break;
			}
			case 2: {
				cout << arr->getLength();
				break;
			}
			case 3: {
				Array<T>* newArr = new Array<T>();
				newArr = arr;
				newArr->show_arr();
				break;
			}
			case 4: {
				arr->getElement();
				break;
			}
			case 5: {
				arr->resize();
				arr->show_arr();
				break;
			}
			case 6: {
				arr->remove();
				arr->show_arr();
				break;
			}
			case 7: {
				arr->insertAtBeginning();
				arr->show_arr();
				break;
			}
			case 8: {
				arr->insertAtEnd();
				arr->show_arr();
				break;
			}
			case 9: {
				arr->insert_el();
				arr->show_arr();
				break;
			}
			case 10: {
				arr->show_arr();
				arr->search_el();
				break;
			}
			case 0: {
				cout << "Exit" << endl;
				open = false;
				break;
			}
			default: {
				cout << "Invalid type entered. Enter 1 to 10 or 0 to exit" << endl;
			}
			}
		}
		catch (const BadRange& e) {
			e.Show();
		}

		catch (const BadLength& e) {
			e.Show();
		}
	
	}
}


template void performOperations<short>(Array<short>* arr);
template void performOperations<int>(Array<int>* arr);
template void performOperations<long>(Array<long>* arr);
template void performOperations<float>(Array<float>* arr);
template void performOperations<double>(Array<double>* arr);
template void performOperations<char>(Array<char>* arr);
template void performOperations<string>(Array<string>* arr);

int typeSelect() {
	cout << "Enter what you want to contain:" << endl
		<< "1 - Short" << endl
		<< "2 - Int" << endl
		<< "3 - Long" << endl
		<< "4 - Float" << endl
		<< "5 - Double" << endl
		<< "6 - Char" << endl
		<< "7 - String" << endl
		<< "0 - Exit" << endl;
	int type = 0;
	cin >> type;
	return type;
}



