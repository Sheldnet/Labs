
#include <stdio.h> //подключение библиотеки ввода/вывода
#include <locale.h> // поключение библиотеки для русского языка
#define m 6  //объявление константы для размера массив


int main()
{
        setlocale(LC_ALL, ""); // перевод консоли на русский язык
        int i, j, min, buf;  //переменные для "шага", количества итераций и обмена значениями
        int arr[m]; //массив для сортировки

        printf("Заполните массив из ""%d"" элементов\n", m);
        for (i = 0; i < m; ++i)
        {
            scanf_s("%i", &arr[i]);
        }

        for (i = 0; i < m - 1; i++) {
            for (j = i + 1, min = i; j < m; j++) {
                if (arr[j] < arr[min])
                    min = j;
            }
            buf = arr[i];
            arr[i] = arr[min];
            arr[min] = buf;
        }

        for (i = 0; i < m; ++i)
        {
            printf(" %i ", arr[i]);
        }

        printf("\n");
        printf("Заполните массив из ""%d"" элементов\n", m);
        for (i = 0; i < m; ++i)
        {
            scanf_s("%i", &arr[i]);
        }

        i = 0;
        j = 0;
        min = 0;
        buf = 0;

        while (i < m - 1)
        {
            j = i + 1;
            min = i;
            while (j < m)
            {
                if (arr[j] < arr[min])
                {
                    min = j;
                    j++;
                }
            }
                buf = arr[i];
                arr[i] = arr[min];
                arr[min] = buf;
                i++;
        }

        for(i = 0; i < m; i++)
        {
            printf("%i ", arr[i]);
        }

        return 0;
}

