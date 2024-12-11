#include <iostream>

int main()
{
	unsigned int size = 0;

	int t1 = 0, t2 = 1;

	std::cout << "what is the size of the series? ";
	std::cin >> size;

	// The bug was size not quitting at 0 so it would go into the negatives as its an unsigned int
	while (size > 0)
	{
		std::cout << t1 << ", ";

		int nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;

		size--;
	}

	return 0;
}