#include <iostream>

struct Password
{
	char value[16];
	bool incorrect;
	Password() : value(""), incorrect(true)
	{
	}
};

int main()
{
	std::cout << "Enter your password to continue:" << std::endl;
	Password pwd;
	//qegtqrgqtqehrgab this phrase is a valid password
	std::cin >> pwd.value;

	// there are many issues with the code such as buffer overflows and sloppy comparison
	// even the string "******** a" would work
	if (!strcmp(pwd.value, "********"))
		pwd.incorrect = false;

	if(!pwd.incorrect)
		std::cout << "Congratulations\n";

	return 0;
}
