#include <iostream>
using namespace std;

class sterling
{
private:
    enum { MAX = 25 };
    int pounds;
    int shillings;
    int pense;
    char point;
public:
    sterling() :pounds(0), shillings(0), pense(0), point('.')
    {}
    sterling(int pou, int s, int pe) :pounds(pou), shillings(s), pense(pe)
    {
        point = '.';
    }
    sterling(double decpounds)
    {
        pounds = static_cast<int>(decpounds); // отбрасывание дробной части
        float decfrac = (decpounds - pounds) * 20; // десятичная дробная часть
        shillings = static_cast<int>(decfrac);
        decfrac = (decfrac - shillings) * 12;
        pense = static_cast<int>(decfrac);
        point = '.';
    }
    operator double() const
    {
        double decpounds = static_cast<float>(pounds) + (static_cast<float>(shillings)) / 20 + static_cast<float>(pense) / 240;
        return decpounds;
    }
    void getmoney()  //функция запрашивает у пользователя строку
    {
        cout << "Sum in old english sys. (like \"" << '\x9C' << "13.19.11\") " << '\n' << '\x9C';
        cin >> pounds >> point >> shillings >> point >> pense;
    }
    void putmoney()         // функция выводит на экран
    {
        cout << '\x9C' << pounds << point << shillings << point << pense << '\n';
    }

    sterling operator + (sterling) const;
    sterling operator - (sterling) const;
    sterling operator * (double) const;
    sterling operator / (sterling) const;
    sterling operator / (double) const;
};
////////////////////////////////////////////////////
sterling sterling::operator + (sterling s2) const
{
    return sterling(double(sterling(pounds, shillings, pense)) + double(s2));
}
sterling sterling::operator - (sterling s2) const
{
    return sterling(double(sterling(pounds, shillings, pense)) - double(s2));
}
sterling sterling::operator * (double s2) const
{
    return sterling(double(sterling(pounds, shillings, pense)) * s2);
}
sterling sterling::operator / (sterling s2) const
{
    return sterling(double(sterling(pounds, shillings, pense)) / double(s2));
}
sterling sterling::operator / (double s2) const
{
    return sterling(double(sterling(pounds, shillings, pense)) / s2);
}
///////////////////////////////////////////////////////////////////////

int main()
{
    sterling st1 = 5.13; //используется конструктор преобразования
    st1.putmoney();
    sterling st2;
    st2.getmoney();
    st2.putmoney();
    cout << "st3= st1+st2: ";
    sterling st3 = st1 + st2;
    st3.putmoney();
    st2 = st3 - st1;
    cout << "st2 = st3-st1: ";
    st2.putmoney();
    st3 = st2 * 3.15;
    cout << "st3 = st2 * 3.15: ";
    st3.putmoney();
    st2 = st3 / 3.15;
    cout << "st2= st3 / 3.15: ";
    st2.putmoney();

    return 0;
}