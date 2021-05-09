﻿#include <iostream>         
using namespace std;

struct fraction
{
	int numerator;
	int denominator;
};
fraction f1, f2, sumf;

fraction fadd(fraction, fraction);
fraction fsub(fraction, fraction);
fraction fmul(fraction, fraction);
fraction fdiv(fraction, fraction);

int main()
{
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
		case '+': sumf = fadd(f1, f2); break;
		case '-': sumf = fsub(f1, f2); break;
		case '*': sumf = fmul(f1, f2); break;
		case '/': sumf = fdiv(f1, f2); break;
		}
		cout << sumf.numerator << ch << sumf.denominator << endl;
		cout << "Ещё раз? (y,n)" << endl;
		cin >> ch;
	} while (ch != 'n');
	return 0;
}

fraction fadd(fraction f1, fraction f2)
{
	sumf.numerator = f1.numerator * f2.denominator + f1.denominator * f2.numerator;
	sumf.denominator = f1.denominator * f2.denominator;
	return sumf;
}

fraction fsub(fraction f1, fraction f2)
{
	sumf.numerator = f1.numerator * f2.denominator - f1.denominator * f2.numerator;
	sumf.denominator = f1.denominator * f2.denominator;
	return sumf;
}

fraction fmul(fraction f1, fraction f2)
{
	sumf.numerator = f1.numerator * f2.denominator;
	sumf.denominator = f1.denominator * f2.denominator;
	return sumf;
}

fraction fdiv(fraction f1, fraction f2)
{
	sumf.numerator = f1.numerator * f2.denominator;
	sumf.denominator = f1.denominator * f2.numerator;
	return sumf;
}