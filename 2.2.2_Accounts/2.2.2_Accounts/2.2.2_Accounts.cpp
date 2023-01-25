#include <iostream>
#include <string>
#include "windows.h"

struct Accounts
{	
	unsigned long long number;
	std::string name;
	double balance;
};

void changeBalance(Accounts &account, double newBalance)
{
	account.balance = newBalance;
}

int main()
{
	setlocale(LC_ALL, "RU");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	Accounts account1;
	double newBalance;

	std::cout << "Введите номер счета: ";
	std::cin >> account1.number;
	
	std::cout << "Введите имя владельца: ";
	std::cin >> account1.name;

	std::cout << "Введите баланс: ";
	std::cin >> account1.balance;

	std::cout << "Введите новый баланс: ";
	std::cin >> newBalance;

	changeBalance(account1, newBalance);

	std::cout.precision(2);
	std::cout << "Ваш счет: " << account1.name << ", " << account1.number << ", " << std::fixed << account1.balance << std::endl;

	std::system("pause");
}

