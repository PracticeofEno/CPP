#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <iterator>

template <typename T>
class MutantStack : public std::stack<T> { 
	public :
		MutantStack();
		virtual ~MutantStack();
		MutantStack(MutantStack& tmp);
		MutantStack& operator=(MutantStack& tmp);

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin();
		iterator end();
	private :

};
template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {
}

template <typename T>
MutantStack<T>::~MutantStack() {
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack& tmp) : std::stack<T>(tmp){

}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(MutantStack<T>& tmp){
	std::stack<T>::operator=(tmp);
	return (*this);
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(){
	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(){
	return this->c.end();
}
#endif