#include <iostream>
#include <fstream>

std::string convertString(std::string line, std::string s1, std::string s2)
{
	size_t end = line.size();
	for (size_t i = 0; i < end; i++)
	{
		if (line.compare(i, s1.size(), s1) == 0)
		{
			line.erase(i, s1.size());
			line.insert(i, s2);
			i = i + s2.size();
		}
	}
	return (line);
}

int main(int argc, char **argv)
{
	std::string filename;
	std::string line;
	std::string s1, s2;

	if (argc != 4)
		return (-1);
	filename = std::string(argv[1]);
	s1 = std::string(argv[2]);
	s2 = std::string(argv[3]);

	if (s1.empty() || s2.empty())
	{
		std::cout << "s1 or s2 is empty" << std::endl;
		return (0);
	}
	std::ifstream openFile(filename.data());
	if (openFile.is_open())
	{
		std::ofstream writeFile(filename.append(".replace").data());
		if (writeFile.is_open())
		{
			while (std::getline(openFile, line)){
				line = convertString(line, s1, s2);
				std::cout << line << std::endl;
				writeFile << line << std::endl;
			}
		}
		else
		{
			std::cout << "writefile is not available" << std::endl;
		}
		openFile.close();
		writeFile.close();
	}
	else
	{
		std::cout << "openfile is not available" << std::endl;
	}
	return (0);
}