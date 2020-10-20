using System;// подлючение библиотеки sistem

namespace Lab8
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Задание 1");
            int a;//объявление переменной для ввода чисел в заданиях
            Console.WriteLine("Введите A");
            a = int.Parse(Console.ReadLine());
            a = a / 1024; //вычисление целого числа килобайт
            Console.WriteLine($"Колличество полных килобайтов = {a}");
            Console.WriteLine("Задание 2 (А > B)");
            int b;// переменная для ввода второго числа
            Console.WriteLine("Введите A и B");
            a = int.Parse(Console.ReadLine());
            b = int.Parse(Console.ReadLine());
            a = a / b; // нахождения количества B в A
            Console.WriteLine($"Отрезков B на отрезке А = {a} ");
            Console.WriteLine("Задание 3");
            int c;// переменная для количества B в A
            Console.WriteLine("Введите A и B (A > B)");
            a = int.Parse(Console.ReadLine());
            b = int.Parse(Console.ReadLine());
            c = a / b; // нахождения количества B в A
            a = a - c * b;
            Console.WriteLine($"Длина незанятой части= {a}");
            Console.WriteLine("Задание 4");
            Console.WriteLine("Введите двузначное число A");
            a = int.Parse(Console.ReadLine());
            c = a % 10; // находим последнюю цифру числа остатком от деления
            b = a / 10; // находим первую цифру числа
            Console.WriteLine($"{c}{b}");
            Console.WriteLine("Задание 5");
            Console.WriteLine("Введите трёхзначное число A");
            a = int.Parse(Console.ReadLine());
            c = a / 100; //нахождение числа с наибольшим разрядом
            a = a % 100; //нахождение оставшейся части после "зачёркивания"
            Console.WriteLine($"{a}{c}");






        }
    }
}
