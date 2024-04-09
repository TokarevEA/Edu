#pragma once
#include <iostream>
#include"Exceptions.h"
using namespace std;

template <typename T> class Array {
private:
	int m_length;
	T* m_data;
public:
	Array() = default;
	Array(int length) {
		m_length = length;
		if (length < 0) {
			throw BadLength(length);
		}
		m_data = new T[length]{};
		cout << "New Array has been successfully created" << endl;
		
	}

	~Array() {
		delete[] m_data;
		cout << endl << "Array deleted" << endl;
	}

	int getLength() {
		cout << "Array length is " << m_length << endl;
		return m_length;
	}

	//copy arr
	Array(const Array<T>& a) : m_length(a.m_length), m_data(new T[a.m_length]) {
		for (int i = 0; i < m_length; ++i) {
			m_data[i] = a.m_data[i];
		}
	}

	//>>overload
	friend istream& operator>>(istream& in, Array<T>& arr) {
		for (int i = 0; i < arr.m_length; ++i) {
			in >> arr.m_data[i];
		}
		return in;
	}

	void show() {
		cout << "Array is:" << endl;
		for (int i = 0; i < m_length; ++i) {
			cout << i << " - " << m_data[i] << endl;
		}
	}

	void insert_el() {
		T value;
		int index = 0;
		cout << "Enter value" << endl;
		cin >> value;
		cout << endl << "Enter index" << endl;
		cin >> index;
		if (index < 0 || index > m_length) {
			throw BadRange(index, m_length - 1);
		}
		m_data[index] = value;		
	}

	void insertBefore(T value, int index) {
		T* data = new T[m_length + 1];
		for (int i = 0; i < index; ++i) {
			data[i] = m_data[i];
		}
		data[index] = value;
		for (int i = index + 1; i < m_length + 1; ++i) {
			data[i] = m_data[i - 1];
		}
		delete[] m_data;
		m_data = data;
		++m_length;
	}

	void insertAtBeginning() {
		T value;
		cout << "Enter value to insert" << endl;
		cin >> value;
		insertBefore(value, 0);
	}

	void insertAtEnd() {
		T value;
		cout << "Enter value to insert" << endl;
		cin >> value;
		insertBefore(value, m_length);
	}
	
	void remove() {
		int index;
		cout << "Enter index you want to remove" << endl;
		cin >> index;
		if (m_length == 1) {
			erase();
			return;
		}
		T* data = new T[m_length - 1];
		for (int i = 0; i < index; ++i) {
			data[i] = m_data[i];
		}

		for (int i = index + 1; i < m_length; ++i) {
			data[i - 1] = m_data[i];
		}

		delete[] m_data;
		m_data = data;
		--m_length;
	}

	void search_el() {
		T value;
		cout << "Enter value of element you are looking for" << endl;
		cin >> value;
		bool search = false;
		for (int i = 0; i < m_length; ++i) {
			if (value == m_data[i]) {
				cout << "Element " << value << " found at " << i << " position" << endl;
				search = true;
			}			
		}
		if (!search) {
			cout << "Element " << value << " was not found :(" << endl;
		}
	}

	void erase() {
		delete[] m_data;
		m_data = nullptr;
		m_length = 0;
		cout << "Array erased" << endl;		
	}

	void reallocate(int newLength) {
		erase();
		if (newLength <= 0) {
			return;
		}
		m_data = new T[newLength];
		m_length = newLength;
	}

	void resize() {
		int newLength;
		cout << "Enter new length" << endl;
		cin >> newLength;
		if (newLength == m_length) {
			return;
		}
		if (newLength <= 0) {
			erase();
			return;
		}
		T* newData = new T[newLength];
		int elementsToCopy = (newLength < m_length) ? newLength : m_length;

		for (int i = 0; i < elementsToCopy; ++i) {
			newData[i] = m_data[i];
		}

			delete[] m_data;
			m_data = newData;
			m_length = newLength;		
	}

	void getElement() {
		cout << "Enter element index" << endl;
		int index;
		cin >> index;
		if (index < 0 || index >= m_length) {
			throw BadRange(index, m_length - 1);
		}
		cout << m_data[index] << endl;
	}

	int operator[](int index) {
		if (index < 0 || index >= m_length) {
			throw BadRange(index, m_length - 1);
		}
		return m_data[index];
	}

	Array& operator=(const Array& a) {
		if (&a == this)
			return *this;
		reallocate(a.getLength());
		for (int i = 0; i < m_length; ++i) {
			m_data[i] = a.m_data[i];
		}
		return *this;
	}
};

