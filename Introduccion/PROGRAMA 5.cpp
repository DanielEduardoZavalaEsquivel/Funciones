#include <iostream>
#include <string.h>
using std::cout;
using std::cin;
using std::endl;

int factorial (int a);
int main()
{
	int N1;
	cout << "Introduce el valor del primer numero: " << endl;
	cin >> N1;
	int fact= factorial (N1);
    cout << "El "<< N1<<"! es:"<<fact<< endl;
	return 0;

	}
	int factorial (int a)
	{
	    int i;
	    int resultado=1;
        for ( int i=1;i<=a;i++)
        {
        resultado= resultado*i;
	}
return resultado;
	}
