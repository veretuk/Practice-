#include "conio.h"
#include "locale.h"
#include "stdio.h"
#include "string.h"

struct Znak
{
	char name[30]; 
	char zodiac[30]; 
	int bday[3];
};

const char *number_zodiac[12] = { "Овен", "Телец", "Близнецы", "Рак", "Лев", "Дева", "Весы", "Скорпион", "Стрелец", "Козерог", "Водолей", "Рыбы" }; // порядок следования знаков зодиака

int main()
{
	setlocale(LC_CTYPE, "rus");
	const int size_array = 2; // количество записей
	puts("Введите 3 записей: ");
	Znak book[size_array]; // объявляем массив структур
	int counter_rec = 0; // счётчик записей

	while (counter_rec < size_array) // пока не внесли
	{
		puts("Введите имя и фамилию через пробел: ");
		scanf("&s", book[counter_rec].name);

		puts("Введите знак зодиака: ");
		scanf("&s", book[counter_rec].zodiac);

		puts("Введите дату рождения в формате (дд.мм.гг) ");
		scanf("&s", book[counter_rec].bday[0]);
		scanf("&s", book[counter_rec].bday[1]); 
		scanf("&s", book[counter_rec].bday[2]); 
		counter_rec++; 
	}

	/*int month = 0;
	puts("Введите порядковый номер месяца: ");
	scanf("&s", month);
	*/
	return 0;
}
