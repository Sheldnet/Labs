#include <stdio.h> //подключение библиотеки ввода/вывода
#include <locale.h> // поключение библиотеки для русского языка
#define m 6 //объявление константы для размера массив

int main()
{
	setlocale(LC_ALL, ""); // перевод консоли на русский язык
	int arr[m]; //массив для сортировки
	int j = 2, i = 1, buf; //переменные для "шага", количества итераций и обмена значениями

	printf("Заполните массив из ""%d"" элементов\n", m);
	for (i = 0; i < m; ++i)
	{
		scanf_s("%i", &arr[i]);
	}
	i = 1;

	while (i < m) {
		if (arr[i - 1] > arr[i]) 
		{
			buf = arr[i];
			arr[i] = arr[i - 1];
			arr[i - 1] = buf;
			i--;
			if (i > 0) continue;

		}
		i = j++;
	}

	for (i = 0; i < m; ++i)
	{
		printf(" %i ", arr[i]);// вывод переменных, которые были отсортированы через while
	}

	printf("\n");
	printf("Заполните массив из ""%d"" элементов\n", m);
	for (i = 0; i < m; ++i)
	{
		scanf_s("%i", &arr[i]);
	}

	j = 2;
	for (i = 1; i < m;)
	{
		if (arr[i - 1] > arr[i])
		{
			buf = arr[i];
			arr[i] = arr[i - 1];
			arr[i - 1] = buf;
			i--;
			if (i > 0) continue;

		}
		i = j++;
	}

	for (i = 0; i < m; ++i)
	{
		printf(" %i ", arr[i]);// вывод переменных, которые были отсортированы через for
	}

	return 0;
}
