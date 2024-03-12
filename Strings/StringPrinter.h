#include <iostream>
#include <string>

void stringPrinter(std::string line)
{
	//Следующую строчку надо закомментировать, если нужна возможность вводить свой текст для анализа.
	std::cout << line << std::endl;
	int stringLenght = line.length();
	std::string firstChar{ line[0] };
	std::string lastChar{ line[stringLenght - 1] };
	std::cout << "Line lenght: " << stringLenght << std::endl;
	std::cout << "First character: " << firstChar << std::endl;
	std::cout << "Last character: " << lastChar << std::endl;
}
