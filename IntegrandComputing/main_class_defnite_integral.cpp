#include<iostream>
#include<math.h>

using namespace std ;

#include"trapezoidal.hpp"
#include"class_definite_integral.hpp"

typedef double (*pfn) (double);

double identity(double x){return x;};
double affine(double x){return 2*x+1;};
double square(double d) { return d*d; };
//double arc(double x){return arctg(x);};
int main(){
	double a,b;
	int n;
	cout << "Veuillez entrer la borne a : "<< endl;
	cin >> a;
 	cout << "Veuillez entrer la borne b : "<< endl;
 	cin >> b;
 	cout << "Veuillez entrer le nombre d'intervalles n :  "<< endl;
 	cin >> n;
 	cout << "-----------------------------------"<<endl;
	definite_integral di=definite_integral(a,b,identity);
	cout << "L'intégrale de l'identité entre " << a << " et " << b << " est : " << di.trapezoidal(n) <<endl;
	cout << "-----------------------------------"<<endl;
 	di = definite_integral(a,b,affine);
	cout << "L'intégrale de l'application affine entre " << a << " et " << b << " est : " << di.trapezoidal(n) <<endl;
	cout << "-----------------------------------"<<endl;
 	di = definite_integral(a,b,square);
	cout << "L'intégrale du carré entre " << a << " et " << b << " est : " << di.trapezoidal(n) <<endl;
	cout << "-----------------------------------"<<endl;
 	
 	return 0;
}