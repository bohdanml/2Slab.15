
#pragma once
#include <iostream>

class Pair {
private:
    int first;
    int second;

public:
    Pair(int a = 0, int b = 0) : first(a), second(b) {}

    bool operator==(const Pair& other) const {
        return (first == other.first) && (second == other.second);
    }

    Pair operator-(const Pair& other) const {
        return Pair(first - other.first, second - other.second);
    }

    Pair operator*(const Pair& other) const {
        return Pair(first * other.first, second * other.second);
    }

    int getFirst() const {
        return first;
    }

    int getSecond() const {
        return second;
    }

    void setFirst(int a) {
        first = a;
    }

    void setSecond(int b) {
        second = b;
    }

    void Init(int a, int b) {
        first = a;
        second = b;
    }

    void Read() {
        std::cout << "Enter the first integer: ";
        std::cin >> first;
        std::cout << "Enter the second integer: ";
        std::cin >> second;
    }

    void Display() const {
        std::cout << "(" << first << ", " << second << ")";
    }

    std::string toString() const {
        return "(" + std::to_string(first) + ", " + std::to_string(second) + ")";
    }
};
