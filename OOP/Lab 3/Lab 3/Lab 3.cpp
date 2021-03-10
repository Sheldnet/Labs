#include <iostream>
using namespace std;

enum etype { laborer, secretary, manager, accountant, executive, researcher };


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
