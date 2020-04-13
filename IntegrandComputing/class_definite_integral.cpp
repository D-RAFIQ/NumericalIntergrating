#include<iostream>
#include<math.h>

using namespace std;

#include "trapezoidal.hpp"

#include "class_definite_integral.hpp"


  typedef double (*pfn) (double);
  // constructor
  definite_integral::definite_integral(double a, double b, pfn f){
  	lower = a;
  	upper = b;
  	integrand = f;
  }; 	
  // accessor: get lower bound				
  double definite_integral::lowbd() const {
  return lower;
  };	
  // accessor: get upper bound		 
  double definite_integral::upbd() const{
  	return upper;
  }; 
  //change integral bounds to a, b
  void definite_integral::change_bounds(double a, double b){
  	lower = a;
  	upper = b;
  }; 
  // compute integral using trapezoidal rule with n sub-intervals
  double definite_integral::trapezoidal(int n) const{
  	double trapp=0.0;
 	trapp = trap(lower,upper,integrand,n);
 	return trapp;
  };

