#include <iostream>

char	convertBig(char c)
{
	char p;

	p = c;
	if (c >= 'a' && c <= 'z')
	{
		p = p - 32;
	}
	return (p);
}

int main(int argc, char **argv)
{
	char *tmp;
	int  i;
	int length;

	if (argc != 2)
		return (0);
	tmp = argv[1];
	length = 0;
	while (*tmp)
	{
		length++;
		tmp = tmp + 1;
	}
	for(i = 0; i < length; i++)
	{
		std::cout << convertBig(argv[1][i]);
	}
	std::cout << std::endl;
	return (0);
}
