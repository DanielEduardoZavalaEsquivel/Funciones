#include <iostream>
#include <string.h>
using std::cout;
using std::cin;
using std::endl;

int Max (int a,int b);
int main()
{
	int N1,N2,N3;
	cout << "Introduce el valor del primer numero: " << endl;
	cin >> N1;
	cout << "Introduce el valor del segundo numero: " << endl;
	cin >> N2;
	cout << "Introduce el valor del tercer numero: " << endl;
	cin >> N3;
	int max1= Max(N1,N2);
    int max2= Max(N3,max1);
    cout << "El numero mayor es "<<max2<< endl;
	return 0;

	}
	int Max(int a,int b)
	{
	    int c;
        if (a>b){c=a;}
        else{c=b;}
       return c;
	}
