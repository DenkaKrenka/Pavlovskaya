//Pavlovskaya1
#include <iostream>
#include <conio.h>

using namespace std;

void main()
{
	float i, a, b, c, x0, x1, dx, f;
	cout << "  a="; cin >> a;
	cout << "  b="; cin >> b;
	cout << "  c="; cin >> c;
	cout << "  x0="; cin >> x0;
	cout << "  x1="; cin >> x1;
	cout << "  dx="; cin >> dx;
	cout << "\n\n  X     Y\n";
	cout.precision(3);
	if ((a<0) && (x0 != 0))
		for (i = x0; i <= x1; i += dx) { f = float(((a*x0)*i*i)+((b)*i*i)*x0); cout << "\n  " << i << "  " << f; }
	if ((a>0) && (x0 == 0))
		for (i = x0; i <= x1; i += dx) { f = float(x0-(a/(x0-c))); cout << "\n  " << i << "  " << f; }
	else
		for (i = x0; i <= x1; i += dx) { f = 1+(x0/c); cout << "\n  " << i << "  " << f; }
	getch();
}