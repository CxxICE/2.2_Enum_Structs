#include <iostream>
#include <string>


enum class months				
{
	jan = 1,
	feb,
	mar,
	apr,
	may,
	jun,
	jul,
	aug,
	sep,
	oct,
	nov,
	dec
};


int main()
{
	
	setlocale(LC_ALL, "RU");
	months month;
	std::string inText;

	do
	{
		std::cout << "Введите номер месяца: ";
		std::getline(std::cin, inText);
		if (!(isdigit(inText[0])) || inText.length() > 2 || (!(isdigit(inText[1])) && (inText.length() == 2)))
		{
			std::cout << "Неправильный номер!"; // если длина введенного текста больше 2 или в первых двух позициях есть НЕ цифры
		}
		else
		{
			month = static_cast<months>(stoi(inText));
			switch (month)
			{
			case months::jan:
				std::cout << "Январь";
				break;
			case months::feb:
				std::cout << "Февраль";
				break;
			case months::mar:
				std::cout << "Март";
				break;
			case months::apr:
				std::cout << "Апрель";
				break;
			case months::may:
				std::cout << "Май";
				break;
			case months::jun:
				std::cout << "Июнь";
				break;
			case months::jul:
				std::cout << "Июль";
				break;
			case months::aug:
				std::cout << "Август";
				break;
			case months::sep:
				std::cout << "Сентябрь";
				break;
			case months::oct:
				std::cout << "Октябрь";
				break;
			case months::nov:
				std::cout << "Ноябрь";
				break;
			case months::dec:
				std::cout << "Декабрь";
				break;
			default:
				if (inText != "0") { std::cout << "Неправильный номер!"; }
				break;
			}
		}		
		std::cout << '\n';
	} while (inText != "0");
	std::cout << "До свидания!";

}


