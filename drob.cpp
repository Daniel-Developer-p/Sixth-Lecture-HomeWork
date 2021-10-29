#include <iostream>


class Fraction {
public:
    int nominator;
    int denominator;
    int i;

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
    };

    void print_reduct() {

        if (nominator < denominator) {
            i = nominator;
        } else {
            i = denominator;
        };

        for ( ; i > 0; i-- ) {
            if (nominator % i == 0 && denominator % i == 0) {
                nominator /= i;
                denominator /= i;
            }
        }

        std::cout << nominator << "/" << denominator << std::endl;
    };
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

    drob1 -> print();
    drob1 -> print_reduct();

    return 0;
}