#include <stdio.h> //подключение библиотеки ввода/вывода
#include <locale.h> // поключение библиотеки для русского языка
#define m 6 //объявление константы для размера массива
int main() { 
    setlocale(LC_ALL, "Rus"); // перевод консоли на русский язык
    printf("Заполните массив из m элементов\n");
    int i, temp, step; // объявление переменных для количества итераций, обмена значений, шага
    int array[m]; //объявление массива
    for (i = 0; i < m; ++i) {
        scanf_s("%i", &array[i]);
    }
    float k = 1.247; //объявление переменной для изменения "шага"
    for (step = m - 1; step >= 1; step /= k) {
        for (i = 0; i < m - step; i++) {
            if (array[i] > array[i + step]) {
                temp = array[i];
                array[i] = array[i + step];
                array[i + step] = temp;
            }
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
    step = m - 1; //инициализация переменной заного для корректной работы алгоритма
        while (step >= 1) {
            i = 0;
            while (i < m - step) {
                if (array[i] > array[i + step]) {
                    temp = array[i];
                    array[i] = array[i + step];
                    array[i + step] = temp;
                }
                i++;
            }
            step /= k;
        }
        for (i = 0; i < m; ++i) {
            printf(" %i ", array[i]);
        }

        return 0;
    }