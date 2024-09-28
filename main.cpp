//
//  main.cpp
//  complex
//
//  Created by Mingze Lee on 2024/9/28.
//

#include <iostream>
#include "complex.h"
using namespace std;

int main()
{
    Complex a(3.0, 4.0);
    Complex c;
    cout << "Enter a complex number (q to quit):\n";
    while (cin >> c)
    {
        cout << "c is " << c << endl;
        cout << "Complex conjugate is " << ~c << endl;
        cout << "a is " << a << endl;
        cout << "a + c is " << a + c << endl;
        cout << "a - c is " << a - c << endl;
        cout << "a * c is " << a * c << endl;
        cout << "3.14 * c is " << 3.14 * c << endl;
        cout << "length of c is " << c.norm() << endl;
        cout << "Enter a complex number (q to quit):\n";
    }
    cout << "Done!\n";
    return 0;
}

