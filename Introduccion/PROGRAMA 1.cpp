#include <iostream>
#include <string.h>
using std::cout;
using std::cin;
using std::endl;

void Suma(int a,int b);
int main()
{
	int N1,N2;
	cout << "Introduce el valor del primer operando: " << endl;
	cin >> N1;
	cout << "Introduce el valor del segundo operando: " << endl;
	cin >> N2;
	Suma (N1,N2);
	return 0;

	}
	void Suma(int a,int b)
	{
       int c= a+b;
       cout << "El resultado de " << a << " + " << b << " es " << c  << endl;

	}


