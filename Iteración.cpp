/*
TP #3 Repetición de Frase
27/04/2017
Wierna Juan Pablo
*/

#include<iostream>
#include <string>

int main()
{

	int i;
	int c=0;
	std::string a;
	
	std::cout << "Ingrese una frase\n";
	std::getline(std::cin, a);
	std::cout << "Ingrese la cantidad de veces que se mostrara la frase\n";
	std::cin >> i;
	do {
		
		std::cout << a << "\n";
		c++;
		
	} while (i != c);
}

