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
	std::string str;

	if (argc > 1)
	{
		for (size_t i =1; i < (size_t)argc; i++)
		{
			tmp = argv[i];
			while (*tmp)
			{
				str.push_back(*tmp);
				tmp++;
			}
			for (size_t j = 0; j < str.size(); j++)
			{
				str[j] = toupper(str[j]);
			}
			std::cout << str;
			str.clear();
		}
	}
	else
	{
		std::getline(std::cin, str);
	}
	for (size_t j = 0; j < str.size(); j++)
	{
		str[j] = toupper(str[j]);
	}
	std::cout << str;
	std::cout << std::endl;
	return (0);
}
