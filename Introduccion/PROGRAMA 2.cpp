#include <iostream>
#include <string.h>
using std::cout;
using std::cin;
using std::endl;

void Max (int a,int b);
int main()
{
	int N1,N2;
	cout << "Introduce el valor del primer numero: " << endl;
	cin >> N1;
	cout << "Introduce el valor del segundo numero: " << endl;
	cin >> N2;
	Max (N1,N2);
	return 0;

	}
	void Max(int a,int b)
	{
       if(a>b)
       {
           cout << a <<" es mayor " << endl;
       }
       else if(a<b)
       {
           cout << b <<" es mayor " << endl;
       }
        else
       {
           cout << "ERROR" << endl;
       }

	}
