using System //поключение простраства имён sistem

namespace Lab6 
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Задание 1");
            int a = 10, b = 14, k;
            Console.WriteLine($"A={a}, B={b}");
            k = a;
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
            b = a;
            a = c;
            c = k;
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
            c = a;
            a = b;
            b = k;
            Console.WriteLine($"A={a}, B={b} С={c}");
            //-------------------------------------------
            Console.WriteLine("Задание 4");
            int x;
            int y;
            Console.Write("Введите X=");
            x = int.Parse(Console.ReadLine());
            int arg1= Convert.ToInt32(Math.Pow(x, 6));
            int arg2= Convert.ToInt32(Math.Pow(x, 2));
            y = 3 * arg1 - 6 * arg2 - 7;
            Console.WriteLine($"y=3x^6 - 6x^2 - 7={y}");
            //-------------------------------------------
            Console.WriteLine("Задание 5");
            Console.Write("Введите X=");
            x = int.Parse(Console.ReadLine());
            int z;
            z = x - 3;
            arg1= Convert.ToInt32(Math.Pow(z, 6));
            arg2= Convert.ToInt32(Math.Pow(x, 3));
            y = 4 * arg1 - 7 * arg2 + 2;
            Console.WriteLine($"y=4(x-3)^6 - 7(x-3)^3 + 2={y}");
            //-------------------------------------------
            Console.WriteLine("Задание 6");
            Console.Write("Введите А=");
            a = int.Parse(Console.ReadLine());
            z = a * a;
            z = z * z;
            z = z * z;
            Console.WriteLine($"{a}^8={z}");
            //-------------------------------------------
            Console.WriteLine("Задание 7");
            Console.Write("Введите А=");
            a = int.Parse(Console.ReadLine());
            int z1;
            z = a * a;
            z1 = a * z;
            z1 = z1 * z;
            z = z1 * z1;
            z1 = z * z1;
            Console.WriteLine($"{a}^15={z1}");





        }
    }
}
