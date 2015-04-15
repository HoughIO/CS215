#include "rational.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

void Rational::Rational() {
  numerator = 0;
  denominator  = 1;
}

void Rational::setR(int nm, int dn) {
  numerator = nm;
  denominator = dn;
}

void Rational::printR() {
  if((numerator / denominator) == 1)
  {
    numerator = 1;
    denominator = 1;
  }
  cout << numerator << '/' << denominator <<endl;
}

void Rational::addR(Rational C) {
  numerator += C.num;
  denominator += C.den;
}

void Rational::subR(Rational C) {
  numerator = numerator - C.num;
  denominator = denominator - C.den;
}

void Rational::mulR(Rational C) {
  numerator = numerator * C.num;
  denominator = denominator * C.den;
}

void Rational::divR(Rational C) {
  numerator = numerator / C.num;
  denominator = denominator / C.num;
}
