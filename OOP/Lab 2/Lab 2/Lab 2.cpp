#include <iostream>
using namespace std;

int main()
{
    /*
    cout << "Задание 5" << endl;
    char n = 'X';
    char p = ' ';

    int p1 = 41; //количество пробелов в первой строке
    int p0; // количество пробелов на этом конкретном шаге
    int n1 = 1; // количество звёздочек на первом шаге 
    int n0; // количество звёздочек на этом конкретном шаге

    for (int i = 0; i <= 20; i++)
    {
        p0 = p1;
        n0 = n1;
        while (n1 > 0)
        {
            while (p1 > 0)
            {
                cout << p; p1 -= 1;
            }
            cout << n;
            n1 -= 1;
        }
        cout << endl;
        n1 = n0 + 2;
        p1 = p0 - 1;

    } 
    
    cout << "Задание 6" << endl;

    unsigned int numb;                     
    unsigned long fact = 1;
    int n=1;

    while (n != 0)
    {
        fact = 1;
        cout << "Введите факториал: "; cin >> numb;
        for (int j = numb; j > 0; j--)
        {
            fact *= j;
        }
        cout << "Факториал = " << fact << endl;
        cout << "Если хотите закончить, нажмите 0: ";
        cin >> n; cout << endl;
    }   

    

    cout << "Задание 7" << endl;

    float vklad, vklad1 = 0.0f, vklad2 = 0.0f, vklad3 = 0.0f;
    int let;
    float proc;

    cout << "Введите начальный вклад: "; cin >> vklad;
    cout << "Введие количество лет: "; cin >> let;
    cout << "Введите процет: "; cin >> proc;

    for (int m = let; m > 0; m--)
    {
        vklad = vklad * (1.0f + (proc/100.0f));
        if (m == let)
            vklad1 = vklad;
        if (m == let-1)
            vklad2 = vklad;
        if (m == let - 2) 
            vklad3 = vklad;
    }
    cout << "В конце первого года вы получите: " << vklad1 <<" долларов"<< endl;
    cout << "В конце второго года вы получите: " << vklad2 <<" долларов" <<endl;
    cout << "В конце третьего года вы получите: " << vklad3 << " долларов"<< endl;
    cout << "По итогу у вас выйдет: " << vklad <<" долларов"<< endl;
    
    cout << "Задание 8" << endl;

    int funt,funt1;
    int shel,shel1;
    int penc,penc1;
    int next = 1;
    do
    {
        cout << "Введите первую сумму £";
        cin >> funt >> shel >> penc;
        cout << "Введите вторую сумму £";
        cin >> funt1 >> shel1 >> penc1;
        penc = penc + penc1;
        shel = shel + shel1 + penc / 12;
        penc = penc % 12;
        funt = funt + funt1 + shel / 20;
        shel = shel % 20;
        cout << "Вывод: £" << funt <<" "<< shel<< " "<< penc << endl;
        cout << "Если хотите остановиться, нажмите 0:";
        cin >> next;
    } while (next == 1); 

    cout << "Задание 9" << endl;

    int gost, gost0;
    int stul;

    cout << "Введите количетсво гостей: "; cin >> gost; gost0=gost;
    cout << "Введите количество стульев: "; cin >> stul;
    for (int i = gost-1; i> (gost0-stul); i--)
    {
        gost *= i;
    }
    cout << "Всего вариантов размещения: " << gost << endl; 

    cout << "Задание 10" << endl;

    int vklad, itogvklad, procent, s1, summ, l = 0;
    cout << "введите начальный вклад: "; cin >> vklad;
    cout << "Введите итоговую сумму: "; cin >> itogvklad;
    cout << "Введите процентную ставку: "; cin >> procent;
    summ = vklad;
    do
    {
        s1 = summ / 100 * procent;
        summ = s1 + summ;
        l++;
    } while (summ <= itogvklad);
    cout << "через " << l << " лет вы получите " << summ << endl; */

    cout << "Задание 11" << endl;

    return 0;
}
