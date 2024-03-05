#include <iostream>
#include "Rational.h"

int main() {
    
    Rational r1;
    r1.Read();

    Rational r2;
    r2.Read();

    
    Rational sum = r1 + r2;
    Rational difference = r1 - r2;
    Rational division = r1 / r2;

    
    std::cout << "Sum: (" << sum.getFirst() << ", " << sum.getSecond() << ")" << std::endl;
    std::cout << "Difference: (" << difference.getFirst() << ", " << difference.getSecond() << ")" << std::endl;
    std::cout << "Division: (" << division.getFirst() << ", " << division.getSecond() << ")" << std::endl;

    return 0;
}
