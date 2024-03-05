#pragma once

#include <iostream>
#include <string>
#include "Pair.h"

class Rational {
private:
    Pair pair;

public:
    Rational(int a = 0, int b = 0) : pair(a, b) {}

    Rational operator+(const Rational& other) const {
        return Rational(pair.getFirst() * other.pair.getSecond() + pair.getSecond() * other.pair.getFirst(),
            pair.getSecond() * other.pair.getSecond());
    }

    Rational operator-(const Rational& other) const {
        return Rational(pair.getFirst() * other.pair.getSecond() - pair.getSecond() * other.pair.getFirst(),
            pair.getSecond() * other.pair.getSecond());
    }

    Rational operator*(const Rational& other) const {
        return Rational(pair.getFirst() * other.pair.getFirst(), pair.getSecond() * other.pair.getSecond());
    }

    Rational operator/(const Rational& other) const {
        return Rational(pair.getFirst() * other.pair.getSecond(), pair.getSecond() * other.pair.getFirst());
    }

    int getFirst() const {
        return pair.getFirst();
    }

    int getSecond() const {
        return pair.getSecond();
    }

    void setFirst(int a) {
        pair.setFirst(a);
    }

    void setSecond(int b) {
        pair.setSecond(b);
    }

    void Init(int a, int b) {
        pair.Init(a, b);
    }

    void Read() {
        std::cout << "Enter the numerator: ";
        int a, b;
        std::cin >> a;
        std::cout << "Enter the denominator: ";
        std::cin >> b;
        pair.Init(a, b);
    }

    void Display() const {
        std::cout << "(" << pair.getFirst() << ", " << pair.getSecond() << ")";
    }

    std::string toString() const {
        return "(" + std::to_string(pair.getFirst()) + ", " + std::to_string(pair.getSecond()) + ")";
    }
};
