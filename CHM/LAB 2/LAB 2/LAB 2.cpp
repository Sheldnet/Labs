#include <iostream>
#include <math.h>
using namespace std;

float f(float x) 
{
	float f = 2.0f*x - log10(x) - 7.0f; // функция
	return f;
}

float dich(float a,float b, float e, int *k)
{	
	float f0 = 0.0f; //занчении фукции на прошлом шаге
	float x = (a + b) / 2.0f;
	while (abs(b-a) > e) 
	{
		f0 = f(x);
		if (f(a) * f(x) > 0.0f)
		{
			a = x; b = b;
		} else 
		{
			a = a; b = x;
		}
		x = (a + b) / 2.0f;
		(*k)++;
	}
	
	return x;
}

float si(float x, float e, int *k)
{
	float x0 = 0.0f;
	while(abs(x0-x) > e)
	{	
		x0 = x;
		x = (7.0f+log10(x))/2.0f;
		(*k)++;
	}
	return x;
}

int main()
{	
	float a, b, e;
	int k=0;
	cout << "Введите точность: ";
	cin >> e;
	cout << "Введите началао и конец интервала: ";
	cin >> a >> b;
	cout << "\n";
	cout << "Метод Дихотомии: \n";
	cout << dich(a, b, e, &k) << endl;
	cout << "Скорость сходимости= " << k << endl << endl; k = 0;
	cout << "Метод простых итераций: \n";
	cout << si(a, e, &k) << endl;
	cout << "Скорость cходимости= " << k << endl;
	return 0;
}
