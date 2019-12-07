// чивапчичи3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

const int N = 10;

int main()
{ 
	cout.precision(4);
	float a[N][N];
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			cin >> a[i][j];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			cout << a[i][j] << " ";
		cout << "\n";
	}
	cout << endl << endl;
	float summ1 = 0;
	summ1 = a[0][0] + a[1][0] + a[0][1] + a[1][1];
	float work = float(summ1 / 4);
	a[0][0] = a[0][1] = a[1][1] = a[1][0] = work;
	summ1 = a[N-1][N-1] + a[N-2][N-1] + a[N-2][N-2] + a[N-1][N-2];
	a[N-1][N-1] = a[N - 2][N-1] = a[N - 2][N - 2] = a[N-1][N - 2] = float(summ1/4);
	summ1 = a[0][N - 1] + a[1][N - 1] + a[0][N - 2] + a[1][N - 2];
	a[0][N - 1] = a[1][N - 1] = a[0][N - 2] = a[1][N - 2] = float(summ1 / 4);
	summ1 = a[N - 1][0] + a[N - 1][1] + a[N - 2][0] + a[N - 2][1];
	a[N-1][0] = a[N-1][1] = a[N - 2][0] = a[N - 2][1] = float(summ1 / 4);
	for (int i = 1; i < N - 1; i++)
	{
		float summ2 = 0;
		for (int k = 0; k <= 1; k++)
			for (int j = i - 1; j <= i + 1; j++)
				summ2 += a[k][j];
		summ2 /= 6;
		for (int k = 0; k <= 1; k++)
			for (int j = i - 1; j <= i + 1; j++)
				a[k][j] = summ2;
	}
	for (int i = 1; i < N - 1; i++)
	{
		float summ2 = 0;
		for (int k = N-2; k <= N-1; k++)
			for (int j = i - 1; j <= i + 1; j++)
				summ2 += a[k][j];
		summ2 /= 6;
		for (int k = N-2; k <= N-1; k++)
			for (int j = i - 1; j <= i + 1; j++)
				a[k][j] = summ2;
	}
	for (int i = 1; i < N - 1; i++)
	{
		float summ2 = 0;
		for (int k = i-1; k <= i+1; k++)
			for (int j = 0; j <= 1; j++)
				summ2 += a[k][j];
		summ2 /= 6;
		for (int k = i-1; k <= i+1; k++)
			for (int j = 0; j <= 1; j++)
				a[k][j] = summ2;
	}
	for (int i = 1; i < N - 1; i++)
	{
		float summ2 = 0;
		for (int k = i - 1; k <= i + 1; k++)
			for (int j = N-2; j <= N-1; j++)
				summ2 += a[k][j];
		summ2 /= 6;
		for (int k = i - 1; k <= i + 1; k++)
			for (int j = N-2; j <= N-1; j++)
				a[k][j] = summ2;
	}
	for (int i=1;i<N-1;i++)
		for (int j = 1; j < N - 1; j++)
		{
			float summ3 = 0;
			for (int k = i - 1; k <= i + 1; k++)
				for (int l = j - 1; l <= j + 1; l++)
					summ3 += a[k][l];
			summ3 /= 9;
			for (int k = i - 1; k <= i + 1; k++)
				for (int l = j - 1; l <= j + 1; l++)
					a[k][l] = summ3;
		}
	/*a[0][N-1] = 1002;
	a[1][N - 2] = 2001;*/
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			cout << a[i][j] << " ";
		cout << "\n";
	}
	system("pause");
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
