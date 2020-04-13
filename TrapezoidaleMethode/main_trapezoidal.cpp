#include<iostream>
#include <cstdlib>
#include <math.h>
#include <algorithm>
#include"trapezoidal.hpp"

       
using namespace std;




typedef double (*pfn) (double);

double identity(double x){return x;};
double affine(double x){return 2*x+1;};
double square(double d) { return d*d; };

int main()
{
	double a=0.0,b=1.0,trap=0.0;
	int n=0;
	
	cout << "Veuillez entrer la borne a : ";
	cin >> a;
 	cout << "Veuillez entrer la borne b : ";
 	cin >> b;
 	cout << "Veuillez entrer le nombre d'intervalles n: ";
 	cin >> n;

 	cout << "-----------------------------------"<<endl;
 	trap = trapezoidal(a,b,identity,n);
	cout << "L'intégrale de l'identité entre " << a << " et " << b << " est : " << trap <<endl;
	cout << "-----------------------------------"<<endl;
 	trap = trapezoidal(a,b,affine,n);
	cout << "L'intégrale de l'application affine entre " << a << " et " << b << " est : " << trap <<endl;
	cout << "-----------------------------------"<<endl;
 	trap = trapezoidal(a,b,square,n);
	cout << "L'intégrale du carré entre " << a << " et " << b << " est : " << trap <<endl;
	cout << "-----------------------------------"<<endl;
 	trap = trapezoidal(a,b,sqrt,n);
	cout << "L'intégrale de la racine entre " << a << " et " << b << " est : " << trap <<endl;
	cout << "-----------------------------------"<<endl;
	return 0;
}
