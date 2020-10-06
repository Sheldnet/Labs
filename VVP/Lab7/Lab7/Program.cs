using System; // подключение пространства имён Sistem

namespace Lab7
{
    class Program
    {
        static void Main(string[] args) //начало
        {
            Console.WriteLine("Задание 1");
            Console.Write("(в градусах)Угл Альфа=");
            float a; // обяъвление переменной для градусной меры угла
            a = float.Parse(Console.ReadLine());
            a = a / 180; // перевод в радианы
            Console.WriteLine($"Угл Альфа={a:0.00} Pi");
            //------------------------------------------
            Console.WriteLine("Задание 2");
            Console.Write("(в радианах)угл Альфа="); ;
            a = float.Parse(Console.ReadLine()); 
            a = a * 180; // перевод в градусы
            Console.WriteLine($"Угол Альфа={a:0.00} градусов");
            //------------------------------------------
            float x, y, a1, a2; // обяъвление переменных для веса и стоимости конфет
            Console.WriteLine("Задание 3");
            Console.WriteLine(". Известно, что X кг конфет стоит A рублей. Определить, сколько стоит 1 кг и Y кг этих же конфет.");
            Console.Write("X=");
            x = float.Parse(Console.ReadLine());
            Console.Write("A=");
            a = float.Parse(Console.ReadLine());
            a1 = a / x; // вес одного килограмма 
            Console.Write("Y=");            
            y = float.Parse(Console.ReadLine());
            a2 = y * a / x; //вес У килограммов
            Console.WriteLine($"1 кг стоит {a1}р, {y} кг стоит {a2}р");
            //-----------------------------------------
            int v1, v2, vd, s, t ; //объявлние переменных для скорости, разности скорости, времени, расстояния
            Console.WriteLine("Задание 4");
            Console.Write("V1=");
            v1 = int.Parse(Console.ReadLine());
            Console.Write("V2=");
            v2 = int.Parse(Console.ReadLine());
            if (v1 > v2)
            {
                vd = v1 - v2;// вычисление расности скорости
            }
            else
            {
                vd = v2 - v1;
            }
            Console.Write("T=");
            t = int.Parse(Console.ReadLine());
            s = vd * t;// вычисление расстояния 
            Console.WriteLine($"Расстояние через {t}ч будет {s} км");
            //----------------------------------------
            float b; // объявление переменной для коэф. B 
            Console.WriteLine("Задание 5");
            Console.WriteLine("Ax + B = 0");
            Console.Write("A=");
            a = float.Parse(Console.ReadLine());
            Console.Write("B=");
            b = float.Parse(Console.ReadLine());
            x = (-1 * b) / a; // нахождение X
            Console.WriteLine($"x = {x}");
            //----------------------------------------
            float x1, x2, b1, b2, c1, c2, delta, nx,ny; // объявление для коэф. СЛАУ, значений определителей системы
            Console.WriteLine("Задание 6"); // Решение методом Крамера
            Console.WriteLine("A1x + B1y = C1,");
            Console.WriteLine("A2x + B2y = C2,");
            Console.Write("A1=");
            a1 = float.Parse(Console.ReadLine());
            Console.Write("A2=");
            a2 = float.Parse(Console.ReadLine());
            Console.Write("B1=");
            b1 = float.Parse(Console.ReadLine());
            Console.Write("B2=");
            b2 = float.Parse(Console.ReadLine());
            Console.Write("C1=");
            c1 = float.Parse(Console.ReadLine());
            Console.Write("C2=");
            c2 = float.Parse(Console.ReadLine());
            delta = a1 * b2- b1 * a2; // нахождение определителя
            x1 = c1 * b2 - b1 * c2; // нахождения определителя1
            x2 = a1 * c2 - c1 * a2;// нахождения определителя2
            if (delta == 0 && (x1 != 0 || x1 != 0)) //проверка, чтобы уравнение имело решение и их было не бесконечное колличество
            {
                Console.WriteLine("Система не имеет решений");
                return;
            }
            else {
                if(x1==0 && delta==0 && x2==0)
                {
                    Console.WriteLine("Система имеет бесконечно много решений");
                    return;
                }
            }
            nx = x1 / delta;// нахождение Х
            ny = x2 / delta;// нахождение Y
            Console.WriteLine($"y = {ny}, x = {nx}");

        }
    }
}
