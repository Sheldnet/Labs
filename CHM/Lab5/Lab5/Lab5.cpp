#include<iostream>
#include<conio.h>
#include<math.h>
#define k 23
#define n 100
using namespace std;

int main()
{
	long double arrA[n];
	long double arrX[n];
	long double arrU[n];
	long double arrV[n];
	long double arrD[n];
	long double arrC[n];
	long double arrB[n];
	for (int i = 0; i < n ; i++)
	{
		arrA[i] = 1;
		arrB[i] = 2;
		arrC[i] = 1;
		arrD[i] = 10 * k;
		if (i == 0)
			arrA[i] = 0;

		if (i == n - 1)
			arrC[i] = 0;
	}

	arrU[0] = -arrC[0] / arrB[0];
	arrV[0] = arrD[0] / arrB[0];
	for (int i = 1; i < n; i++)
	{
		arrU[i] = -arrC[i] / (arrA[i] * arrU[i - 1] + arrB[i]);
		arrV[i] = (arrD[i] - arrA[i] * arrV[i - 1]) / (arrA[i] * arrU[i - 1] + arrB[i]);
	}

	arrX[n - 1] = (arrD[n - 1] - arrA[n - 1] * arrV[n - 2]) / (arrA[n - 1] * arrU[n - 2] + arrB[n - 1]);

	for (int i = n - 2; i >= 0; i--) //
	{
		arrX[i] = arrU[i] * arrX[i + 1] + arrV[i];
	}
	for (int i = 0; i < n; i++)
	{
		cout << "x" << "[" << i + 1 << "] =" << arrX[i] << endl;
	}
	return 0;
}