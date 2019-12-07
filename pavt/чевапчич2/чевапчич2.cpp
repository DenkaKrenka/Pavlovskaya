// чевапчич2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

const int N = 10;

int _tmain(int argc, _TCHAR* argv[])
{
	int a[N];
	for (int i = 0; i < N; i++)
		cin >> a[i];
	for (int i = 0; i < N; i++)
		cout << a[i]<<"";
	cout << "\n";
	int max = abs(a[0]);
	for (int i = 1; i < N; i++)
		if (abs(a[i]) > max)
			max = abs(a[i]);
	cout << max<<"\n";
	int ap1, ap2;
	for (int i = 0; i < N;i++)
		if (a[i]>0)
		{
			ap1 = i;
			break;
		}
	for (int i = ap1+1; i < N;i++)
		if (a[i]>0)
		{
			ap2 = i;
			break;
		}
	int summ = 0;
	for (int i = ap1 + 1; i < ap2; i++)
		summ += a[i];
	cout << summ<<"\n";
	int n = N;
	for (int i = 0; i < n;i++)
		if (a[i] == 0)
		{
			for (int j = i; i < n - 1; i++)
				a[i] = a[i + 1];
			i--;
			a[n] = 0;
			n--;
		}
	for (int i = 0; i < N; i++)
		cout << a[i]<<" ";
	system("pause");
	return 0;
}

