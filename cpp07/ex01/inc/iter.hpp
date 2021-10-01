#ifndef ITER_HPP
#define ITER_HPP

template <typename T>
void iter(T* a, int size, void (*func)(T&)) 
{
	for (int i = 0; i < size; i++)
	{
		func(a[i]);
	}
}

template <typename T>
void add(T& a)
{
	a++;
}

template <typename T>
void sub(T& a)
{
	a--;
}

template <typename T>
void print(T& a)
{
	std::cout << a << std::endl;
}
#endif