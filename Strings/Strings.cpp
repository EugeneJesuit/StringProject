#include <iostream>
#include <string>

int main()
{
	std::string wiseWords = "With great power comes great responsibility";
	std::cout << "The original said:" << std::endl;
	std::cout << wiseWords << std::endl;
	int stringLenght = wiseWords.length();
	int firstChar = wiseWords[0];
	int lastChar = stringLenght - 1;
	std:: cout << "Line lenght: " << stringLenght << std::endl;
	std::cout << "First character: " << firstChar << std::endl;
	std::cout << "Last character: " << lastChar << std::endl;
}
