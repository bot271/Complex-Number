//
//  complex.cpp
//  complex
//
//  Created by Mingze Lee on 2024/9/28.
//

#include <iostream>
#include "complex.h"
#include <cmath>

Complex::Complex()
{
    real_ = 0.0;
    imaginary_ = 0.0;
}

Complex::Complex(double a, double b)
{
    real_ = a;
    imaginary_ = b;
}

Complex::~Complex() { };

void Complex::Reset(double a, double b)
{
    real_ = a;
    imaginary_ = b;
}

Complex Complex::operator+(const Complex & c) const
{
    return Complex(real_ + c.real_, imaginary_ + c.imaginary_);
}

Complex Complex::operator*(const Complex & c) const
{
    double a, b;
    a = real_ * c.real_ - imaginary_ * c.imaginary_;
    b = real_ * c.imaginary_ + imaginary_ * c.real_;
    return Complex(a, b);
}

Complex Complex::operator-(const Complex & c) const
{
    return Complex(real_ - c.real_, imaginary_ - c.imaginary_);
}

Complex Complex::operator*(const double & m) const
{
    return Complex(m * real_, m * imaginary_);
}

Complex Complex::operator~() const
{
    return Complex(real_, - imaginary_);
}

double Complex::norm() const
{
    return sqrt(real_ * real_ + imaginary_ * imaginary_);
}

std::ostream & operator<<(std::ostream & os, const Complex & c)
{
    if (c.imaginary_ < 0)
        std::cout << c.real_ << " - " << -c.imaginary_ << "i";
    else
        std::cout << c.real_ << " + " << c.imaginary_ << "i";
    return os;
}

std::istream & operator>>(std::istream & is, Complex & c)
{
    is >> c.real_;
    is >> c.imaginary_;
    return is;
}
