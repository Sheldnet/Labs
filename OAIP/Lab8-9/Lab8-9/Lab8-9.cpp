#include <stdio.h> //подключение библиотеки ввода/вывода
#include <iso646.h> //подключение библиотеки макросов для логических операторов
#define m 6
int main()
{
    int i, j, x; // объявление переменных для сортировки массива
    int array[m];

    printf("enter array value:\n");
    for (i = 0; i < m; ++i) 
    {
        scanf_s("%i", &array[i]);
    } //заполение массива
    for (i = 1; i < m; i++)
    {
        x = array[i];
        j = i;
        while (j > 0 and x < array[j - 1])
        {
            array[j] = array[j-1];
            --j;
        }
        array[j] = x;
    }

    
    for (i = 0; i < m; ++i)
    {
        printf(" %i ", array[i]);
    } //вывод значений массива

    printf("\n");
    printf("enter array value:\n");
    for (i = 0; i < m; ++i)
    {
        scanf_s("%i", &array[i]);
    } //заполение массива

    for (i = 1; i < m; i++)
    {
        for (j = i, x = array[i]; (j > 0) and (array[j - 1] > x); j--) 
        {
            array[j] = array[j - 1];
        }
        array[j] = x;
    }

    for (i = 0; i < m; ++i)
    {
        printf(" %i ", array[i]);
    } //вывод значений массива

    return 0;

}
