using System;//поключение простраства имён sistem

namespace Lab6 
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Задание 1");
            int a = 10, b = 14, k; // инициализация переменных для обмена
            Console.WriteLine($"A={a}, B={b}");
            k = a;  // обмен значений переменных через k
            a = b; 
            b = k; 
            Console.WriteLine($"A={a}, B={b}");
            //-------------------------------------------
            Console.WriteLine("Задание 2");
            Console.Write("А=");
            a = int.Parse(Console.ReadLine());
            Console.Write("В=");
            b = int.Parse(Console.ReadLine());
            int c;
            Console.Write("C=");
            c = int.Parse(Console.ReadLine());
            k = b;
            b = a;// значение a переносим в b
            a = c; //a в c
            c = k; // с в b
            Console.WriteLine($"A={a}, B={b} С={c}");
            //-------------------------------------------
            Console.WriteLine("Задание 3");
            Console.Write("А=");
            a = int.Parse(Console.ReadLine());
            Console.Write("B=");
            b = int.Parse(Console.ReadLine());
            Console.Write("C=");
            c = int.Parse(Console.ReadLine());
            k = c; 
            c = a; // значение A переносим в C
            a = b; // B в A
            b = k; // С в B
            Console.WriteLine($"A={a}, B={b} С={c}");
            //-------------------------------------------
            Console.WriteLine("Задание 4");
            int x; // обяъвляем переменные x и y для решения уравнения
            int y;
            Console.Write("Введите X=");
            x = int.Parse(Console.ReadLine());
            int arg1= Convert.ToInt32(Math.Pow(x, 6)); //возводим x в степень 6 
            int arg2= Convert.ToInt32(Math.Pow(x, 2)); //возводим x в степень 3 
            y = 3 * arg1 - 6 * arg2 - 7; // уравнение 
            Console.WriteLine($"y=3x^6 - 6x^2 - 7={y}");
            //-------------------------------------------
            Console.WriteLine("Задание 5");
            Console.Write("Введите X=");
            x = int.Parse(Console.ReadLine());
            int z; // объявляем переменную для удобного возведения выражения x-3 в степень
            z = x - 3;
            arg1= Convert.ToInt32(Math.Pow(z, 6));
            arg2= Convert.ToInt32(Math.Pow(x, 3));
            y = 4 * arg1 - 7 * arg2 + 2; //уравнение
            Console.WriteLine($"y=4(x-3)^6 - 7(x-3)^3 + 2={y}");
            //-------------------------------------------
            Console.WriteLine("Задание 6");
            Console.Write("Введите А=");
            a = int.Parse(Console.ReadLine());
            z = a * a; //вторая степень(первое умножение)
            z = z * z; //четвёртая степень(второе умножение)
            z = z * z; //восьмая степень(третье умножение)
            Console.WriteLine($"{a}^8={z}");
            //-------------------------------------------
            Console.WriteLine("Задание 7");
            Console.Write("Введите А=");
            a = int.Parse(Console.ReadLine());
            int z1; //новая переменная для нечётной степени
            z = a * a; //вторая степень (1)
            z1 = a * z; // третья степень(2)
            z1 = z1 * z; //пятая степень(3)
            z = z1 * z1; //десятая степень(4)
            z1 = z * z1; //пятнадцатая степень(5)
            Console.WriteLine($"{a}^15={z1}");





        }
    }
}
