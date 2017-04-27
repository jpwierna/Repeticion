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
	std::string a;
	
	std::cout << "Ingrese una frase\n";
	std::getline(std::cin, a);
	std::cout << a << "\n";
	std::cout << "Repetir? 1:si 2:no\n";
	std::cin >> i;
	if (i==1)
	{
	std::cout << a << "\n";
	std::cout << "Repetir? 1:si 2:no\n";
	std::cin >> i;
	}
	if (i==1)
	{
	std::cout << a << "\n";
	std::cout << "Repetir? 1:si 2:no\n";
	std::cin >> i;
	}
	if (i==1)
	std::cout << a << "\n";

}



 