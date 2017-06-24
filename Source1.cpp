#include "conio.h"
#include "locale.h"
#include "stdio.h"
#include "string.h"
#define N 3

typedef struct {
	char name[25];
	int zodiak[15];
	int bday[3];
} Znak;

void inputBaza(Znak baza[N]);
void printBaza(Znak baza[N]);

const char *number_zodiac[12] = { "Овен", "Телец", "Близнецы", "Рак", "Лев", "Дева", "Весы", "Скорпион", "Стрелец", "Козерог", "Водолей", "Рыбы" }; // порядок следования знаков зодиака

int main()
{
	setlocale(LC_CTYPE, "rus");
	Znak baza[N];
	inputBaza(baza);
	printBaza(baza);
	return 0;
}

void inputBaza(Znak baza[N]) {
	setlocale(LC_CTYPE, "rus");
	for (int i = 0; i<N; i++) {
		printf("Введите ФИО: ");
		gets_s(baza[i].name);
		printf("Введите знак зодиака: ");
		scanf_s("%d", &baza[i].zodiak);
		printf("день.месяц.год: ");
		scanf_s("%d.%d.%d", &baza[i].bday[0], &baza[i].bday[1], &baza[i].bday[2]);
		printf("***\n");
	}
}

void printBaza(Znak baza[N]) {
	setlocale(LC_CTYPE, "rus");
	for (int i = 0; i<N; i++)
		printf("ФИО %s\n Зодиак: %d\n Дата рождения: %d.%d.%d\n", baza[i].name, baza[i].zodiak, baza[i].bday[0], baza[i].bday[1], baza[i].bday[2]);
}
