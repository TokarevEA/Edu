#include <iostream>
//#include"func.cpp"
//#include "Exceptions.h"

using namespace std;

template <typename T> class Array {
private:
	T m_length;
	T* m_data;
public:
	Array() = default;
	Array(T length);
	~Array();
	T getLength();
	T debug();
};

/*template<class T> Array<T>::Array(T length) :
	m_length{ length } {
	if (length < 0) {
		throw BadLength(length);
	}
	m_data = new T[length]{};
	cout << "New Array has been successfully created" << endl;
}

template<class T> Array<T>::~Array() {
	delete[] m_data;
}

template<typename T>T Array<T>::getLength() {
	return m_length;
}

template<typename T>T Array<T>::debug() {
	cout << "arr is:" << endl;
	for (int i = 0; i < m_length; ++i) {
		cout << m_data[i] << endl;
	}
	cout << "\u2642 Do you like what you see? \u2642" << endl;
	return 0;
}*/