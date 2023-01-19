#include <iostream>

// using namespace std; interdit pour 42

int	main()
{
	int	n = 42;
	char	c = 'c';
	char	str[12] = "Hello word!";
	double	x = 3.14159265358979; // n'affiche pas apres la 5eme decimale normal un double stock 8bytes

	std :: cout << "Valeur de n: " << n << "\n";
	std :: cout << "Valeur de c: " << c << "\n";
	std :: cout << "Valeur de str: " << str << "\n";
	std :: cout << "Valeur de x: " << x << "\n";
	return 0;
}

