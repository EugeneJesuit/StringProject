#include <iostream>
#include <string>
#include "StringPrinter.h"

int main()
{
	std::string wiseWords = "With great power comes great responsibility";
	std::cout << "The original said:" << std::endl;
	//���������� ������ ���� ������ ����� ����������������
	//std::getline(std::cin, wiseWords);
	stringPrinter(wiseWords);
	return 0;
}
