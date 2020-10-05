﻿#include <stdio.h> // подключение библиотеки ввода вывода
#include <locale.h> // подключение библиотеки языка
#include <math.h> // подключение библиотеки математических функций

int main() { // говорю о сущетсвовании функции main, которой возвращаются целочисленное заничение
	setlocale(LC_ALL, "Rus");// перевод консоли на русский язык
	const float pi = 3.14; //объявление константы пи
	float a, b, s, p; //объявление вещественных переменных 
	printf("Задание 1: Найти S и P прямоугольника\n "); // вывод в консоль
	printf("Введите a= ");// вывод в консоль
	scanf_s("%f", &a); //ввод переменной а
	printf("Введите b= "); // вывод в консоль
	scanf_s("%f", &b);//ввод переменной b
	s = a * b; // площадь
	p = (a + b) * 2; //периметр
	printf("s= %.2f и p= %.2f\n", s, p);// // вывод в консоль
	//-----------------------------------------------------------------
	printf("Задание 2: найти длинну окружности\n");//// вывод в консоль
	float d,l; // объявление вещественных переменных 
	printf("Введите диаметр d="); // вывод в консоль
	scanf_s("%f", &d); //ввод диаметра
	l = pi * d; // вычисление длинны окружности
	printf(" L=%.2f\n ", l); 
	//----------------------------------------------------------------
	float sr; // объявление вещественной переменной 
	printf("Задание 3: найти среднее арифметическое \n");// вывод в консоль
	printf("Введите первое число a=");// вывод в консоль
	scanf_s("%f", &a);//ввод первого числа
	printf("Введите второе число b=");// вывод в консоль
	scanf_s("%f", &b); //ввод второй переменной
	sr = (a + b) / 2; //вычисление среднего арифметического 
	printf("Среднее арифметическое =%.2f\n", sr); // вывод в консоль результата
	//---------------------------------------------------------------
	float sum, raz, pr, ch; //объявление вещественных переменных
	printf("Задание 4: сумма, разность, произведение квадратов двух неотрицательных чисел \n");// вывод в консоль
	printf("Ввести первое число a=");// вывод в консоль
	scanf_s("%f", &a);// ввод переменной 
	printf("Ввести второе число b="); // вывод в консоль
	scanf_s("%f", &b); // ввод переменной 
	sum = a*a + b*b; //сумма
	raz = a*a - b*b; //разность
	pr = a*a * b*b; //произведение
	ch = a*a / b*b; //частное
	printf("Cумма=%.2f Разность=%.2f Произведение=%.2f Частное=%.2f", sum, raz, pr, ch); // вывод в консоль результата
	//----------------------------------------------------------------
	float sumM, razM, prM, chM; // объявление вещественных переменных
	printf("Задание 5: Найти сумму, разность, произведение частное модулей двух ненулевых чисел\n"); // вывод в консоль
	printf("Введите первое число a="); // вывод в консоль
	scanf_s("%f", &a); // ввод переменной a
	printf("Введите второе число b="); // вывод в консоль
	scanf_s("%f", &b); // ввод переменной b
	sumM = abs(a) + abs(b); // сумма модулей
	razM = abs(a) - abs(b); // разность модулей
	prM = abs(a) * abs(b); // произведение модулей
	chM = abs(a) / abs(b); // частное модулей
	printf("Сумма=%.2f Разность=%.2f Произведние=%.2f Частное=%.2f\n", sumM, razM, prM, chM); // вывод в консоль результата
	return 0; // возращение нуля функции main
	 
} // конец функции main