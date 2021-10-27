#include <iostream>


class Fraction {
public:
    int nominator;
    int denominator;

public:
    Fraction(int nominator, int denominator) {
        this -> nominator = nominator;
        this -> denominator = denominator;
    }


    Fraction(int c) {
        nominator = c;
        denominator = 1;
    }


    void print() {
        std::cout << nominator << "/" << denominator << std::endl;
    }


    void print_new() {
        std::cout << nominator / denominator - 1 << std::endl;
    }

    void print_very_new() {
        std::cout << nominator * 10 / denominator << std::endl;
    }
};

Fraction* create_fraction(bool is_integer) {
    int n, m;
    std::cin >> n;

    if(!is_integer) {
        std::cin >> m;
        return new Fraction(n, m);
    } else {
        return new Fraction(n);
    }
}

int main() {

    Fraction* drob1 = create_fraction(false);
    Fraction* drob2 = create_fraction(true);
    Fraction* drob3 = create_fraction(true);

    drob1 -> print();
    drob2 -> print();
    drob3 -> print_new();
    drob3 -> print_very_new();

    std::cout <<
                drob1 -> nominator
                << "/" <<
                drob1 -> denominator << std::endl;

    std::cout <<
              drob2 -> nominator
              << "/" <<
              drob2 -> denominator << std::endl;
    return 0;
}