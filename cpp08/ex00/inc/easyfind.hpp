#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T& a, int b)
{
	return (std::find(a.begin(), a.end(), b));
}

#endif