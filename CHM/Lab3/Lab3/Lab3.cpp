#include <iostream>
using namespace std;

float f(float x)
{
	float f = 2.0f * x - log10(x) - 7.0f; 
	return f;
}
float df(float x)
{
	float df = 2 - 1 / (log(10) * x);
	return df;
}

float Newton(float x, float e, int* k)
{
	float x0 = 0.0f;
	while (abs(x0 - x) > e)
	{
		x0 = x;
		x = x - f(x) / df(x);
		(*k)++;
	}
	return x;
}
float hord(float a, float b, float e, int* k)
{
	while (abs(b - a) > e)
	{
		b = b - (b - a) / (f(b) - f(a)) * f(b);
		a = a - (a - b) / (f(a) - f(b)) * f(a);
		(*k)++;
	}
	return a;
}

int main()
{
	float a, b, e;
	int k = 0;
	cout << "Введите точность: ";
	cin >> e;
	cout << "Введите начало и конец интервала: ";
	cin >> a >> b;
	cout << "\n";
	cout << "Метод Ньютона: \n x = ";
	cout << Newton(a, e, &k) << endl;
	cout << "Скорость сходимости = " << k << endl << endl; k = 0;
	cout << "Метод хорд: \n x = ";
	cout << hord(a, b, e, &k) << endl;
	cout << "Скорость cходимости = " << k << endl;
	return 0;
}

