#include <iostream>

int	main(void)
{
	char	buff[512];

	std::cout << "Hello word!" << std::endl;
	std::cout << "Input a word: ";
	std::cin >> buff;
	std::cout << "You entered: [" << buff << "]" << std::endl;
	return 0;
}
