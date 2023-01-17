#include <iostream>
#include "SampleClass.hpp"

Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;
	
	this->foo = 42;
	std::cout <<"this->: " << this->foo << std::endl;
	
	this->bar();
	
	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

void	Sample::bar(void)// type_de_retour	NomDeLaClasse :: identifiant_de_ma_fonction(parametres)
{
	std::cout << "Member fonction bar called" << std::endl;
	return;
}

