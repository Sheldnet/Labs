#include <iostream>
#include <cstdlib>
using namespace std;

enum etype { laborer, secretary, manager, accountant, executive, researcher };

struct sterling
{
    int funt;
    int shiling;
    int penc;
    double decfunt;
    int decfuntInt;
};

struct timee
{
    int minutes;
    int seconds;
    int hours;
    int totalseconds;
};

struct fraction12
{
    int numerator;
    int denominator;
};

struct fraction
{
    int chislit;
    char znakDrobi;
    int znamenat;
    char znak;
};
struct Date
{
    int day;
    char znak1, znak2;
    int month;
    int year;
};
struct Employee
{
    int nomer;
    float posobie;
    Date data;
    etype dol;
    char pb;
};


void printInformation4(Employee employee)
{
    cout << "Номер: " << employee.nomer << "\n";
    cout << "Размер заработной платы: " << employee.posobie << "\n";
    cout << "Должность: ";
    switch (employee.pb)
    {
    case 'l': cout << "laborer"<< endl; break;
    case 's': cout << "secretary" << endl; break;
    case 'm': cout << "manager" << endl; break;
    case 'a': cout << "accountant" << endl; break;
    case 'e': cout << "executive" << endl; break;
    case 'r': cout << "researcher" << endl; break;
    }
    cout << "Дата вступления в должноть: " << employee.data.day << "/" << employee.data.month << "/" << employee.data.year << "\n";
}

int main()
{
    /*
    Employee sotrudnik1, sotrudnik2, sotrudnik3;
    cout << "Введите номер и размер пособие первого сотрудника: ";
    cin >> sotrudnik1.nomer >> sotrudnik1.posobie;
    cout << "Введите первую букву должности\n(laborer, secretary, manager, accountant, executive, researcher): ";
    cin >> sotrudnik1.pb;
    cout << "Введите дату/месяц/год ";
    cin >> sotrudnik1.data.day >> sotrudnik1.data.znak1 >> sotrudnik1.data.month >> sotrudnik1.data.znak2 >> sotrudnik1.data.year;
    cout << "\n";

    cout << "Введите номер и размер пособие второго сотрудника: ";
    cin >> sotrudnik2.nomer >> sotrudnik2.posobie;
    cout << "Введите первую букву должности\n(laborer, secretary, manager, accountant, executive, researcher): ";
    cin >> sotrudnik2.pb;
    cout << "Введите дату/месяц/год ";
    cin >> sotrudnik2.data.day >> sotrudnik2.data.znak1 >> sotrudnik2.data.month >> sotrudnik2.data.znak2 >> sotrudnik2.data.year;
    cout << "\n";

    cout << "Введите номер и размер пособие второго сотрудника: ";
    cin >> sotrudnik3.nomer >> sotrudnik3.posobie;
    cout << "Введите первую букву должности\n(laborer, secretary, manager, accountant, executive, researcher): ";
    cin >> sotrudnik3.pb;
    cout << "Введите дату/месяц/год ";
    cin >> sotrudnik3.data.day >> sotrudnik3.data.znak1 >> sotrudnik3.data.month >> sotrudnik3.data.znak2 >> sotrudnik3.data.year;
    cout << "\n";



    printInformation4(sotrudnik1);
    printInformation4(sotrudnik2);
    printInformation4(sotrudnik3);
    
    fraction drop1, drop2;

    int rez8 = 0;
    char znak8;

    cout << "Введите первую дробь: "; cin >> drop1.chislit >> drop1.znakDrobi>> drop1.znamenat;
    cout << "Введите вторую дробь: "; cin >> drop2.chislit >> drop2.znakDrobi >> drop2.znamenat;
    cout << "Введите знак: "; cin >> znak8;

    switch (znak8)
    {
    case '+': rez8 = (drop1.chislit * drop2.znamenat + drop1.znamenat * drop2.chislit) / (drop1.znamenat * drop2.znamenat); break;
    case '-': rez8 = (drop1.chislit * drop2.znamenat - drop1.znamenat * drop2.chislit) / (drop1.znamenat * drop2.znamenat); break;
    case '*': rez8 = (drop1.chislit * drop2.chislit) / (drop1.znamenat * drop2.znamenat); break;
    case '/': rez8 = (drop1.chislit * drop2.znamenat) / (drop1.znamenat * drop2.chislit); break;
    }

    cout << "Результат: " << rez8;
    
    
    timee time1;
    cout << "Введите часы минуты секунды: "; cin >> time1.hours >> time1.minutes >> time1.seconds;
    cout << "Это время в сенудах будет: "; 
    time1.totalseconds = time1.hours * 3600 + time1.minutes * 60 + time1.seconds;
    cout << time1.totalseconds;

    sterling zad10;

    char znak10;
    cout << "Десятичных фунтов: ";
    cin >> zad10.funt >> znak10 >> zad10.penc;
    zad10.decfuntInt= ((zad10.funt * 100) + zad10.penc) * 2.4;
    cout << "Это равно : ";
    zad10.funt = zad10.decfuntInt / 240;
    zad10.shiling =( zad10.decfuntInt % 240 )/ 12;
    zad10.penc = (zad10.decfuntInt % 240) % 12;
    cout << zad10.funt << " " << zad10.shiling << " " << zad10.penc;
        

    timee time111, time112;
    char znak111, znak112, znak121, znak122;
    cout << "Введите часы минуты секунды: "; cin >> time111.hours >> znak111 >> time111.minutes >> znak112 >> time111.seconds;
    cout << "Это время в секудах будет: ";
    time111.totalseconds = time111.hours * 3600 + time111.minutes * 60 + time111.seconds;
    cout << time111.totalseconds << endl;
    cout << "Введите часы минуты секунды: "; cin >> time112.hours >> znak121 >> time112.minutes >> znak122 >> time112.seconds;
    cout << "Это время в секудах будет: ";
    time112.totalseconds = time112.hours * 3600 + time112.minutes * 60 + time112.seconds;
    cout << time112.totalseconds << endl;
    time111.totalseconds = time111.totalseconds + time112.totalseconds;
    time111.hours = time111.totalseconds / 3600;
    time111.minutes = time111.totalseconds % 3600 / 60;
    time111.seconds = time111.totalseconds % 3600 % 60;
    cout << time111.hours << ":" << time111.minutes << ":" << time111.seconds;
    */


    fraction12 f1, f2, sumf;
    char ch = '/', zn;
    do
    {
        cout << "Введите первую дробь" << endl;
        cin >> f1.numerator >> ch >> f1.denominator;
        cout << "Введите символ" << endl;
        cin >> zn;
        cout << "Введите вторую дробь" << endl;
        cin >> f2.numerator >> ch >> f2.denominator;
        switch (zn)
        {
        case '+': sumf.numerator = f1.numerator * f2.denominator + f1.denominator * f2.numerator;
            sumf.denominator = f1.denominator * f2.denominator; break;
        case '-':  sumf.numerator = f1.numerator * f2.denominator - f1.denominator * f2.numerator;
            sumf.denominator = f1.denominator * f2.denominator; break;
        case '*': sumf.numerator = f1.numerator * f2.denominator;
            sumf.denominator = f1.denominator * f2.denominator; break;
        case '/': sumf.numerator = f1.numerator * f2.denominator;
            sumf.denominator = f1.denominator * f2.numerator; break;
        }
        cout << sumf.numerator << ch << sumf.denominator << endl;
        cout << "ещё раз? y или n" << endl;
        cin >> ch;
    } while (ch != 'n');

    /*
    etype sotr;
    char pb;
    cout << "Введите первую букву должности\n(laborer, secretary, manager, accountant, executive, researcher): "; cin >> pb;

    switch (pb)
    {
    case 'l': sotr = laborer; break;
    case 's': sotr = secretary; break;
    case 'm': sotr = manager; break;
    case 'a': sotr = accountant; break;
    case 'e': sotr = executive; break;
    case 'r': sotr = researcher; break;
    }
    switch (sotr)
    {
    case 0: cout << "laborer" << endl; break;
    case 1: cout << "secretary" << endl; break;
    case 2: cout << "manager" << endl; break;
    case 3: cout << "accountant" << endl; break;
    case 4: cout << "executive" << endl; break;
    case 5: cout << "researcher" << endl; break;
    }
    */
    return 0;
}
