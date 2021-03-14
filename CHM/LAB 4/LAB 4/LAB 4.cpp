#include <iostream>
#include <cmath>
#include <conio.h>
#define eps 0.0001
using namespace std;

double f1(double x, double y)
{
    return cos(y + 0.5f) + x - 0.8f;
}

double f2(double x, double y)
{
    return sin(x) - 2 * y - 1.6f;
}

double func11(double x, double y)
{
    return 1 ;
}

double func12(double x, double y)
{
    return cos(x);
}

double func21(double x, double y)
{   
    return -sin(y + 0.5);
}

double func22(double x, double y)
{
    return -2;
}

void ober_matr(double a[2][2])
{
    double det, aa;
    det = a[0][0] * a[1][1] - a[0][1] * a[1][0];
    aa = a[0][0];
   // if ((det != 0.0) && (a[0][0] != 0.0))
    //{
        a[0][0] = a[1][1] / det;
        a[1][1] = aa / det;
        aa = a[0][1];
        a[0][1] = -a[0][1] / det;
        a[1][0] = -a[1][0] / det;
    //}
   /* else 
    {
        cout << "det не должно ровняться 0, a[0;0] не должно ровняться 0";
    }
    */
}

void nuton(double x, double y, double *k)
{
    double a[2][2], dx, dy;
    double x0, y0;
    do
    {
        x0 = x;
        y0 = y;
        a[0][0] = func11(x, y);
        a[0][1] = func12(x, y);
        a[1][0] = func21(x, y);
        a[1][1] = func22(x, y);
        ober_matr(a);
        dx = -a[0][0] * f1(x, y) + -a[0][1] * f2(x, y);
        dy = -a[1][0] * f1(x, y) + -a[1][1] * f2(x, y);
        x = x + dx;
        y = y + dy;
        //b[0] = f1(x, y);
        //b[1] = f2(x, y);
        //norm = sqrt(b[0] * b[0] + b[1] * b[1]);
        (*k)++;
    } while ((abs(x0 - x) >= eps) && (abs(y0 - y) >= eps));
    cout << x << endl << y << endl;
}
    
double f1x(double x, double y)
{
    return 0.8f - cos(y + 0.5f);
}

double f2y(double x, double y)
{
    return (1.6f - sin(x)) / -2.0f;
}

int main()
{
    double x, y;
    double k = 0.0f;
    cout << "Метод Ньютона:" << endl;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    nuton(x, y, &k);
    cout << "Количество итераций: " << k << endl;
    k = 0;

    cout << "Метод простых итераций:" << endl;
    double x0; cout << "x = "; cin >> x0;
    double y0; cout << "y = "; cin >> y0;
    x = 0, y = 0;
    int i = 0;
    x = f1x(x0, y0);
    y = f2y(x0, y0);
    do
    {
        i++;
        x0 = x;
        y0 = y;
        system("cls");
        cout << "Итерация № " << i << endl;
        cout << "x " <<(x = f1x(x, y)) << endl;
        cout << "y " <<(y = f2y(x, y)) << endl;
    } while ((eps < abs(x0 - x)) && (eps < abs(y0 - y)));
}
    /*
    cout << endl;
    cout << "Метод Простых итераций:" << endl;
    double x0 = 0.0f, y0 = 0.0f;
    do
    {
        k++;
        x = 0.8f - cos(y0 + 0.5f);
        y = (1.6f - sin(x0)) / -2.0f;
        x0 = x;
        y0 = y;
    } while ((abs(x0-x) > eps) && (abs(y0-y) > eps));
    cout << "x= " << x << " " << "y= " << y << endl;
    cout << "Количество итераций: " << k << endl;

    cout << endl;*/

