#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

double f(double x)
{
	return pow(x,x); // Вар 8
}

long double Pr(long double a,long double b, int n)
{
	double h, s, x;
	int i;
	s = 0;
	h = (b - a) / n;
	for (i = 1; i <= n; i++)
	{
		x = a + (i - 1) * h;
		s += f(x);
	}
	return h * s;
}
long double Trap(long double a,long double b, int n)
{
	double h, s, x;
	int i;
	h = (b - a) / n;
	s = f(a);
	for (i = 1; i <= n-1; i++)
	{
		s += 2 * f(a + i * h);
	}
	x = a + n * h;
	s += f(x);
	return(0.5 * h * s);
}
long double Simps( long double a,long double b, int n)
{
	double h, s, x;
	int i, k;
	h = (b - a) / n;
	s = f(a);
	for (i = 1; i < n; i++)
	{
		x = a + i * h;
		if (i % 2 == 0) { k = 2; } else { k = 4; }
		s += k * f(x);
	}
	x = a + n * h;
	s += f(x);
	return (h * s) / 3;
}

int main()
{
	setlocale(LC_ALL, "");
	double pr = 0;
	double trap = 0;
	double simps = 0;
	long double a = -999999999999999, b = 99999999999999;
	double	Rez = 5 * sin(log(10)) - 5 * cos(log(10)) - sin(log(2)) + cos(log(2));
	int n = 10, k = 1;
	cout << setw(10) << "I" << setw(15) << "n" << setw(35) << "Прямоугольники" << setw(30) << "Трапеции"
		<< setw(30) << "Симпсона" << endl;
	while ((pr < Rez)||(trap < Rez)||(simps < Rez))
	{
		cout << right << setw(10) << k << "              ";
		cin >> n;
		k++;
		pr = Pr(a, b, n);
		simps = Simps(a, b, n);
		trap = Trap(a, b, n);
		cout << right << setprecision(13) << setw(40) << pr << setw(28) << trap << setw(22) << simps << endl;
	}
	return 0;
}