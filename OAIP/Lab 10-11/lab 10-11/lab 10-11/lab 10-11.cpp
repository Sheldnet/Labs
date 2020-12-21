#include <stdio.h> //подключение библиотеки ввода/вывода
#include <locale.h> // поключение библиотеки для русского языка
#define m 6 //объявление константы для размера массив

int main()
{
	int i, x, d, j; //переменные для "шага", количества итераций и обмена значениями 
	setlocale(LC_ALL, ""); // перевод консоли на русский язык
	printf("Заполните массив из m элементов\n");

	int array[m]; //объявление массива
	for (i = 0; i < m; ++i) {
		scanf_s("%i", &array[i]);
	}

	for (d = m / 2; d > 0; d /= 2) {
		for (i = d; i < m; i++) {
			x = array[i];
			for (j = i; j >= d; j -= d) {
				if (x < array[j - d])
					array[j] = array[j - d];
				else break;
			}
			array[j] = x;
		}
	}

	for (i = 0; i < m; ++i) {
		printf(" %i ", array[i]);
	}

	printf("\n");
	printf("Заполните массив из m элементов\n");
	for (i = 0; i < m; ++i) {
		scanf_s("%i", &array[i]);
	}

	d = m / 2;
	while (d > 0) {
		i = d;
		while (i < m) {
			x = array[i];
			j = i;
			while (j >= d) {
				if (x < array[j - d]) {
					array[j] = array[j - d];
					j = j - d;
				}
				else break;
			}
			array[j] = x;
			i++;
		}
		d = d / 2;
	}

	for (i = 0; i < m; ++i) {
		printf(" %i ", array[i]);
	}

	return 0;

}

