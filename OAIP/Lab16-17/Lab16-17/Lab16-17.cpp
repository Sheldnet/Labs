#include <stdio.h> //подключение библиотеки ввода/вывода
#include <locale.h> // поключение библиотеки для русского языка
#define m 6 //объявление константы для размера массив

void quickSort(int* numbers, int left, int right)
{
    int pivot; // разрешающий элемент
    int l_hold = left; //левая граница
    int r_hold = right; // правая граница
    pivot = numbers[left];
    while (left < right) // пока границы не сомкнутся
    {
        while ((numbers[right] >= pivot) && (left < right))
            right--; // сдвигаем правую границу пока элемент [right] больше [pivot]
        if (left != right) // если границы не сомкнулись
        {
            numbers[left] = numbers[right]; // перемещаем элемент [right] на место разрешающего
            left++; // сдвигаем левую границу вправо
        }
        while ((numbers[left] <= pivot) && (left < right))
            left++; // сдвигаем левую границу пока элемент [left] меньше [pivot]
        if (left != right) // если границы не сомкнулись
        {
            numbers[right] = numbers[left]; // перемещаем элемент [left] на место [right]
            right--; // сдвигаем правую границу вправо
        }
    }
    numbers[left] = pivot; // ставим разрешающий элемент на место
    pivot = left;
    left = l_hold;
    right = r_hold;
    if (left < pivot) // Рекурсивно вызываем сортировку для левой и правой части массива
        quickSort(numbers, left, pivot - 1);
    if (right > pivot)
        quickSort(numbers, pivot + 1, right);
}
    int main()
    {

        setlocale(LC_ALL, ""); // перевод консоли на русский язык
        int arr[m]; //массив для сортировки
        int i; //переменные для "шага", количества итераций и обмена значениями

        printf("Заполните массив из ""%d"" элементов\n", m);
        for (i = 0; i < m; ++i)
        {
            scanf_s("%i", &arr[i]);
        }

        // Вывод элементов массива до сортировки
        for (int i = 0; i < m; i++)
            printf("%4d ", arr[i]);
        printf("\n");
        quickSort(arr, 0, m - 1); // вызов функции сортировки
                  // Вывод элементов массива после сортировки
        for (int i = 0; i < m; i++)
            printf("%4d ", arr[i]);
        printf("\n");
        getchar();
        return 0;
    }
