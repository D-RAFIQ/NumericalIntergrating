#include <iostream>
#include <cmath>
#include "trapezoidal.hpp"

using namespace std;


typedef double (*pfn) (double);

double trapezoidal(double a, double b, pfn f, int n)
{
    double h,aire,s=0;
    int i;
    h=(b-a)/n;
    for(i=1;i<=n-1;i++) s+=f(a+i*h);
    aire=(h/2)*(f(a)+2*s+f(b));
    return aire;
};
