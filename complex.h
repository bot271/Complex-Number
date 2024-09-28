//
//  complex.h
//  complex
//
//  Created by Mingze Lee on 2024/9/28.
//

#ifndef COMPLEX_H_
#define COMPLEX_H_
#include <iostream>
#include <cmath>

class Complex
{
private:
    double real_;
    double imaginary_;
public:
    Complex();
    Complex(double, double);
    ~Complex();
    void Reset(double, double);
    Complex operator+(const Complex &) const;
    Complex operator-(const Complex &) const;
    Complex operator*(const Complex &) const;
    Complex operator*(const double &) const;
    Complex operator~() const;
    double norm() const;
    friend Complex operator*(double a, const Complex & c) { return c * a; }
    friend std::ostream & operator<<(std::ostream &, const Complex &);
    friend std::istream & operator>>(std::istream &, Complex &);
};

#endif
