#include <iostream>
#include <string>

struct Addresses
{	
	std::string country;
	std::string city;
	std::string street;
	int build;
	int flat;
	int zipcode;
};

void printAddress(Addresses *Address)
{
	std::cout << "Страна:\t\t"			<< Address -> country		<< '\n';
	std::cout << "Город:\t\t"			<< Address -> city		<< '\n';
	std::cout << "Улица:\t\t"			<< Address -> street	<< '\n';
	std::cout << "Номер дома:\t"		<< Address -> build		<< '\n';
	std::cout << "Номер квартиры:\t"	<< Address -> flat		<< '\n';
	std::cout << "Индекс:\t\t"			<< Address -> zipcode	<< "\n\n";
}

int main()
{
	setlocale(LC_ALL, "RU");
	Addresses address1 = {"Россия", "Москва", "Тверская", 8, 25, 125310};
	Addresses address2 = {"Россия", "Санкт-Петербург", "Невский проспект", 71, 8, 325687};
	printAddress(&address1);
	printAddress(&address2);
}



