#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {

public:
	Array(){
		_array = new T[0];
		_size = 0;
	};
	Array(int n){
		_array = new T[n];
		_size = n;
	};
	virtual ~Array() {
		delete[] _array;
	};
	Array(Array& tmp){
		_array = new T[tmp.getSize()];
		_size = tmp.getSize();
		for (int i = 0; i < _size; i++)
			_array[i] = tmp._array[i];

	};
	Array& operator=(Array& tmp) {

		if (this == &tmp)
			return (*this);
		if (_array != 0)
			delete[] _array;
		_array = new T[tmp.getSize()];
		_size = tmp.getSize();
		for (int i = 0; i < _size; i++)
			_array[i] = tmp._array[i];
		return (*this);
	};

	int getSize() const {
		return _size;
	};

	T& operator[](int n)
	{
		if (n < 0 || n + 1  > _size)
		{
			throw Array::RangeException();
		}
		if (n == 0 && _size == 0)
			throw Array::RangeException();
		return _array[n];
	};

	class RangeException : public std::exception {
		public :
			~RangeException() throw() {};
			const char *what() const throw() { return "Range Error";};
	};

private:
	T* _array;
	int _size;

	
};
#endif